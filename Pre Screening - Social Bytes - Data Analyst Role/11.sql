-- Create the Student table
CREATE TABLE Student (
    ID INT PRIMARY KEY NOT NULL,
    Name VARCHAR(20) NOT NULL,
    Age INT NOT NULL,
    Address VARCHAR(25)
);

-- Insert 5 records into the Student table
INSERT INTO Student (ID, Name, Age, Address) VALUES
    (1, 'John Doe', 20, '123 Main St'),
    (2, 'Jane Smith', 22, '456 Elm St'),
    (3, 'Michael Johnson', 21, '789 Oak Ave'),
    (4, 'Emily Brown', 23, '555 Maple Dr'),
    (5, 'Daniel Wilson', 20, '987 Pine Rd');
