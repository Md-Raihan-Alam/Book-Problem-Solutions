--a
SELECT COUNT(DISTINCT person.driver_id)
FROM accident
INNER JOIN participated ON accident.report_number=participated.report_number
INNER JOIN owns ON owns.license_plate=participated.license_plate
INNER JOIN person ON person.driver_id=owns.driver_id

--b
DELETE car
WHERE year=2010 AND license_plate in (SELECT license_plate FROM owns WHERE owns.driver_id='12345')
