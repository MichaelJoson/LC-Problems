# Write your MySQL query statement below
SELECT firstName, lastName, city, state
From Person
LEFT JOIN Address ON Person.personId=Address.personId