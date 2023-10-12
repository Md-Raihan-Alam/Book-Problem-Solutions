--a
(
	SELECT ID
	FROM depositor
)
EXCEPT
(
	SELECT ID
	FROM borrower
);
--b
SELECT F.ID
	FROM customer AS F, customer AS S
	WHERE F.customer_street=S.customer_street
	AND F.customer_city=S.customer_city
	AND S.customer_id='12345';
--c
SELECT DISTINCT branch_name
FROM account, depositor, customer
WHERE customer.id=depositor.id
AND depositor.account_number=account.account_number
AND customer_city='Harrison';
