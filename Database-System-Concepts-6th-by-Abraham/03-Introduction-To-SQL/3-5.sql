--a
SELECT ID,
    CASE
        WHERE score<40 THEN 'F'
        WHERE score<60 THEN 'C'
        WHERE score<80 THEN 'B'
        ELSE 'A'
    END
FROM marks
--b
WITH grades AS
(
    SELECT ID,
        CASE
            WHERE score<40 THEN 'F'
            WHERE score<60 THEN 'C'
            WHERE score<80 THEN 'B'
            ELSE 'A'
        END AS grades
    FROM marks
)
SELECT grade, COUNT(id)
FROM grades
GROUP BY grade