--a
UPDATE employee
SET city='Newtown'
WHERE ID='12345'

--b
UPDATE works T
SET T.salary=T.salary*(
    CASE
        WHEN(T.salary*1.1>100000) THEN 1.03
        ELSE 1.1
    END
)
WHERE T.ID in (SELECT manager_id FROM manages) AND
T.company_name='First Bank Corporation';