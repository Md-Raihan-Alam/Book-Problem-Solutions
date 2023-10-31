--a
SELECT ID, COUNT(sec_id) AS Number_of_sections FROM instructor 
NATURAL LEFT OUTER JOIN teaches GROUP BY ID;

--b
SELECT ID
(
    SELECT COUNT(*) AS Number_of_sections
    FROM teaches T where T.id=I.id
)
FROM instructor I;

--c
SELECT course_id, ID,DECODE (name,null,'-',name) AS name
FROM (section NATURAL LEFT OUTER JOIN teaches)
NATURAL LEFT OUTER JOIN instructor
WHERE semester='Sprint' AND year=2018

--d
SELECT dept_name, COUNT(ID)
FROM department NATURAL LEFT OUTER JOIN instructor
GROUP BY dept_name;
