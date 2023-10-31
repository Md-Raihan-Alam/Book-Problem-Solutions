--a
SELECT * FROM student NATURAL JOIN takes
UNION
SELECT ID,name,dept_name,tot_cred,null,null,null,null,null
FROM student S WHERE NOT EXISTS
    (SELECT ID FROM takes T WHERE T.id=S.id);
--B
(SELECT * FROM student NATURAL JOIN takes)
UNION
(SELECT id,name,dept_name,tot_cred,null,null,null,null,null
FROM student S
WHERE NOT EXISTS (SELECT id FROM takes T WHERE T.id=S.id)
UNION
(SELECT id,null,nuLL,null,course_id,sec_id,semester,year,grade
FROM takes T WHERE NOT EXISTS (SELECT ID FROM student S WHERE T.id=S.id)
)
);