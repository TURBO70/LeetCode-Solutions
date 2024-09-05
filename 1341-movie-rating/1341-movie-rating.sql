with res as (select count(*) as numberOfratings
from MovieRating 
group by user_id )


(select u.name as results
from Users u left join MovieRating m
on u.user_id=m.user_id
group by m.user_id
having count(*) =(
    select max(numberOfratings)
    from res
)
order by u.name
limit 1
)

union all

(SELECT
    m.title as results
FROM
    MovieRating mr
JOIN
    Movies m ON mr.movie_id = m.movie_id
WHERE
    mr.created_at BETWEEN '2020-02-01' AND '2020-02-29'
GROUP BY
    m.title
ORDER BY
    AVG(mr.rating) DESC, m.title ASC
LIMIT 1
);
