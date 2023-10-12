--a
SELECT SUM(credits * points)
    FROM takes, course, grade_points
        WHERE takes.grade=grade_points.grade
        AND takes.course_id=course.course_id
        AND id='12345'
--b
SELECT SUM(credits * points)/SUM(credits) AS GPA
    FROM takes, course, grade_points
        WHERE takes.grade=grade_points.grade
        AND takes.course_id=course.course_id
        AND id='12345'
--c
SELECT ID, sum(credit * points)/SUM(credits) as GPA
FROM takes, course, grade_points
WHERE takes.grad=grade_points.grade AND takes.course_id=course.course_id
GROUP BY ID