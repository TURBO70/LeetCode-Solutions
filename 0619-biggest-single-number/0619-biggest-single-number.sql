select max(num) as num
from (
select num
FROM MyNumbers
GROUP BY num
having count(num)=1
) as unique_numbers;