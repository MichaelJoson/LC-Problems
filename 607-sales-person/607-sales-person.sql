# Write your MySQL query statement below
SELECT name
FROM SalesPerson
WHERE sales_id
NOT IN (
    SELECT Orders.sales_id
    FROM Orders
    LEFT JOIN Company ON Orders.com_id=company.com_id
    WHERE company.name='RED'
)
