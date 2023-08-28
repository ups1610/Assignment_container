SELECT p.Name, a.Address
FROM Person p
JOIN Address a ON p.address_id = a.address_id;
