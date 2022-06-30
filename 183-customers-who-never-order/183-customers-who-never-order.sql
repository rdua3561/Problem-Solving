/* Write your PL/SQL query statement below */
SELECT name as Customers fROM Customers
WHERE id NOT IN (SELECT customerId from Orders);
