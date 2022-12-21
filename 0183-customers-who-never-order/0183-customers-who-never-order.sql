# Write your MySQL query statement below
SELECT name AS Customers
FROM Customers
WHERE customers.id NOT IN (select customerId from Orders)