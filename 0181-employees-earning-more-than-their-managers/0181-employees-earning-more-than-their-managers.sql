# Write your MySQL query statement below
SELECT a.name AS 'Employee'
FROM EMPLOYEE AS a, EMPLOYEE AS b
WHERE a.managerId = b.id
AND a.Salary > b.Salary