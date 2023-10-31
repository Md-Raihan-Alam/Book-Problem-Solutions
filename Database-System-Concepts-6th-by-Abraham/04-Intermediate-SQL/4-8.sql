--a
SELECT ID,name,sec_id,semester,year,time_slot_id, COUNT(DISTINCT building,room_number)
FROM instructor NATURAL JOIN teaches NATURAL JOIN section
GROUP BY(ID,name,sec_id,semester,year,time_slot_id)
HAVING COUNT(building<room_number)>1;

--b
CREATE ASSERTION CHECK NOT EXISTS
(
    SELECT ID,name,sec_id,semester,year,time_slot_id,COUNT(DISTINCT building,room_number)
    FROM instructor NATURAL JOIN teaches NATURAL JOIN section
    GROUP BY (ID,name,sec_id,semester,year,time_slot_id)
    HAVING COUNT(building<room_number)>1;
);