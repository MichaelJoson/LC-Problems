# Write your MySQL query statement below



#####

SELECT employee_id
FROM (
SELECT employee_id 
FROM Employees
WHERE NOT EXISTS (SELECT * FROM Salaries WHERE Employees.employee_id = Salaries.employee_id)
    
UNION
    
SELECT employee_id 
FROM Salaries
WHERE NOT EXISTS (SELECT * FROM Employees WHERE Employees.employee_id = Salaries.employee_id)    

)    T1

GROUP BY employee_id
ORDER BY employee_id ASC

