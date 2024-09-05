 select person_name from(SELECT person_name, weight, 
           SUM(weight) OVER (ORDER BY turn) AS total_weight,turn
    FROM Queue) as bus
   
    where total_weight<=1000
    order by turn desc
    limit 1;

