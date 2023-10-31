CREATE VIEW student_grades(ID, GPA) AS
SELECT ID, credit_points / (CASE WHEN creti_sum=0 THEN NULL ELSE credit_sum END)
FROM (
    (SELECT ID, sum(CASE WHEN grade IS NULL THEN 0
    ELSE credits END) AS credit_sum, SUM(
        CASE WHEN grade IS NULL THEN 0 ELSE credits*points END) AS credit_points
        FROM (takes NATURAL JOIN course) NATURAL LEFT OUTER JOIN grade_points
        GROUP BY ID)
    UNION
    SELECT ID,null, null 
    FROM student
    WHERE ID NOT IN (SELECT ID FROM takes)
);