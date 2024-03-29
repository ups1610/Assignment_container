SELECT
    ID,
    Month,
    SUM(Salary) OVER (PARTITION BY ID ORDER BY Month ROWS BETWEEN 2 PRECEDING AND 1 PRECEDING) AS CumulativeSum
FROM Employee
WHERE Month <> (SELECT MAX(Month) FROM Employee)
ORDER BY ID ASC, Month DESC;
