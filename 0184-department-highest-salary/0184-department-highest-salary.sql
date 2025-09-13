# Write your MySQL query statement below
SELECT d.name AS Department, 
       e.name AS Employee, 
       e.salary AS Salary
from Employee e left join Department d
on e.departmentId =d.id
where e.salary=(
select max(salary)
from Employee 
WHERE departmentId = e.departmentId
)