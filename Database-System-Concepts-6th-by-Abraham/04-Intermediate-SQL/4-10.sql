SELECT COALESCE (a.name,b.name) AS name,
COALESCE(a.address,b.address) AS address,a.title,b.salry 
FROM a FULL OUTER JOIN b ON a.name=b.name AND a.address=b.address