WITH cte_dep_sl AS
SELECT name, department, salary 
FROM (
    SELECT name, department, salary, RANK() OVER (PARTITION BY department ORDER BY salary DESC) as rnk
    FROM employees
             ) ranked
WHERE rnk <= 3;
# phần trăm số người lãnh lương cao hơn 500$ trong 3 văn phòng
cte_dep_sl AS
SELECT 
 ROUND(
   CASE WHEN salary > 500 THEN count(salary) OVER (PARTITION BY rnk)  * 100.0 / COUNT(*)) as  highest-Percentage
 ELSE 0 END)   
From cte_dep_sl;