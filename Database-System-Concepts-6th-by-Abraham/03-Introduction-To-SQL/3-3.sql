--a
UPDATE instructor
SET salary=salary*1.10
WHERE dept_name='Comp. Sci'

--b
DELETE FROM course
WHERE course_id NOT INT (SELECT cousre_id FROM section)

--c
INSERT INTO instructor
SELECT ID, name, dept_name ,10000
FROM student
WHERE tot_cred>100