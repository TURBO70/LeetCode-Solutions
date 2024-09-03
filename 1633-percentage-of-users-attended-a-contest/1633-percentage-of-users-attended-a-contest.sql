select contest_id,round((select count(distinct user_id)*100)/(select count(distinct u.user_id) from Users u ),2) as percentage 
from Register 
group by contest_id 
order by percentage desc,contest_id