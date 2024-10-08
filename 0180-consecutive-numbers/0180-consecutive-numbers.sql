# Write your MySQL query statement below
with cte as (
    select num,
    lead(num,1) over() num1,
    lead(num,2) over() num2
    from logs
    order by id
)

select distinct num as ConsecutiveNums from cte where (num=num1) and (num=num2)