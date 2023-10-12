-- a
SELECT title FROM course WHERE dept_name='Comp. Sci.' and credits=3;

--b
SELECT DISTINCT takes.id 
	FROM takes
	INNER JOIN teaches 
	ON takes.course_id=teaches.course_id
	INNER JOIN instructor
	ON teaches.id=instructor.id
	WHERE instructor.name='Shuming'; 
	-- no input was given for instructor Einstein so Shuming is used

--c
SELECT MAX(salary)
	FROM instructor
	WHERE instructor.name ='Shuming'
	GROUP BY salary;


--d
SELECT id,name 
	FROM instructor
	WHERE salary=(
		SELECT MAX(salary)
		FROM instructor);

--e
SELECT sec_id AS section_name ,COUNT(*) AS enrollment
	FROM section
	WHERE section.semester='Fall' AND section.year=2007 -- no input of 2017 so 2007
	GROUP BY (section.sec_id) ORDER BY sec_id ASC;

--f
SELECT MAX(CNT) 
	FROM(
		SELECT COUNT(*) AS CNT
		FROM section
		WHERE section.semester='Fall' AND section.year=2007
		GROUP BY (section.sec_id)
	) 
	AS maximum_enrollment;

--g
WITH SectionEnrollment AS (
    SELECT sec_id, COUNT(*) AS enrollment_count
    FROM enrollment
    WHERE semester = 'Fall' AND year = 2007
    GROUP BY sec_id
)
SELECT sec_id, enrollment_count
FROM SectionEnrollment
WHERE enrollment_count = (
    SELECT MAX(enrollment_count)
    FROM SectionEnrollment
);
