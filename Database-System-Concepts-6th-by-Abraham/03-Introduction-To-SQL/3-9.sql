--a
SELECT e.Id,e.person_name,city
FROM employee AS e, works AS w
WHERE w.company_name='First Bank Corporation' AND w.ID=e.ID;
--b
SELECT * FROM employee
WHERE ID in 
(SELECT ID FROM works WHERE company_name='FIRST BANK CRPORATION' AND salary>10000);
--c
SELECT ID FROM works WHERE company_name<>'First Bank Corporation';
--d
SELECT ID FROM works WHERE salary>all (SELECT salary FROM works WHERE company_name='Small Bank Corporation');
--e
SELECT S.company_name FROM company AS S WHERE NOT EXISTS
(
    (SELECT city FROM company WHERE company_name='Small Bank Corporation')
    EXCEPT
    (SELECT city FROM company AS T WHERE S.company_name=T.company_name)
);
--f
SELECT company_name FROM works GROUP BY company_name
HAVING COUNT(DISTINCT ID)>=all
(SELECT COUNT(DISTINCT ID)
    FROM works GROUP BY company_name);
--g
SELECT company_name FROM works GROUP BY company_name HAVING AVG(salary) >
(SELECT AVG(salary) FROM works WHERE company_name='First Bank Corporation');