# Write your MySQL query statement below
select s.unique_id,e.name from Employees as  e left join  EmployeeUNI as s on e.id = s.id;