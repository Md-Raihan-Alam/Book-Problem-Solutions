CREATE TABLE department
(
	dept_name VARCHAR(20),
	building VARCHAR(15),
	budget NUMERIC(12,2),
	PRIMARY KEY (dept_name)
);
CREATE TABLE course
(
	course_id VARCHAR(7),
	title VARCHAR(50),
	dept_name VARCHAR(20),
	credits NUMERIC(2,0),
	PRIMARY KEY (course_id),
	FOREIGN KEY (dept_name) REFERENCES department
);
CREATE TABLE instructor
(
	id VARCHAR(5),
	name VARCHAR(20) NOT NULL,
	dept_name VARCHAR(20),
	salary NUMERIC(8,2),
	PRIMARY KEY(id),
	FOREIGN KEY (dept_name) REFERENCES department
);
CREATE TABLE section
(
	course_id VARCHAR(8),
	sec_id VARCHAR(8),
	semester VARCHAR(6),
	year NUMERIC(4,0),
	building VARCHAR(15),
	room_number VARCHAR(7),
	time_slot_id VARCHAR(4),
	PRIMARY KEY (course_id, sec_id, semester, year),
	FOREIGN KEY (course_id) REFERENCES course
);
CREATE TABLE teaches
(
	id VARCHAR(5),
	course_id VARCHAR(8),
	sec_id VARCHAR(8),
	semester VARCHAR(6),
	year NUMERIC(4,0),
	PRIMARY KEY(ID, course_id, sec_id, semester, year),
	FOREIGN KEY(course_id, sec_id, semester, year) REFERENCES section,
	FOREIGN KEY(id) REFERENCES instructor
);