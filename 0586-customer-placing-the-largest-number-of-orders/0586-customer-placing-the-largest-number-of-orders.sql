# Write your MySQL query statement below
select customer_number
FROM Orders
GROUP BY customer_number
order by COUNT(*) desc
LIMIT 1