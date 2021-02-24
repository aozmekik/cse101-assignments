
1. **Part 1: (40 Pts)** In this part, you will **write c program to** calculate the sinus of an angle using the Taylor
    expansion of the sinus function given below.


3 5 7 9 11
sin(x) x ...
3! 5! 7! 9! 11!

Note that, in the approximation above x must be given in radians, but your code will accept the
angle value in degrees from the user. The more terms you used in the calculation above the more
precision you get. (For example: x is from 0 to 30.)

User Interface
In the given sequence, your program will:
 Take the values from the user.
 Take the number of terms to be used in the calculation from the user.
 Print the calculated sinus value
 Calculate sin 30, sin 31, sin32, sin33, sin34, sin35.

Implementation Details:

You write 3 functions:

1. The first function (int factorial (int n) function)is to calculate factorial in the Taylor Formula.
2. The second function (int pow (int x, int n) function) is to calculate pow of x in the in the Taylor
    Formula.
3. The third function (double sin (double x) function ) is related to the first and the second
    functions and the this third function calculate sin(x).


You are not allowed to use math.h library.

**2. Part 2: (60 points)**

SQL. The following database contains information about students, projects, and Project works
Student (student_id, name, year_born) ,
 Project (project_id, title, project_owner (teacher’s name), year_written)
 ProjectWorks (student_id, Project_work_name, project_id)
Where:
 Student is a table of students, their names, and the year they were born. Each student has a
unique student_id, which is a key.
 Project is a table of projects, giving the title, Project owner (teacher’s name), and year
written for each project. Each project has a unique project_id, which is a key.
 ProjectWorks records which students have done which works (designing, coding, testing,
reporting) in which projects.

Attributes student_id and project_id are foreign keys to Student and Project respectively. All three
attributes make up the key since it is possible for a single student to have more than one works in
the same project.

(a) ( 20 points) Write and Implement the SQL statements coding that define the relational schema
(tables) for this database. Assume that astudent_id, project_id, year_born, and year_written are all



integers, and that name, title, student, and character_name are strings. Be sure to define appropriate
keys and foreign key constraints.


(b) (20 points) Write and Implement a SQL query that returns the number of students who have done
in three or more different projects are belonged to the teacher “Erdogan Sevilgen”.


(c) (20 points) Write and Implement a SQL query that returns the names of all students who have done
some Project by the teacher Erdogan Sevilgen and have never done by teacher “David Hamilton”.
The list should not contain duplicates but does not need to be ordered. You should return at least 8
students and your database includes 15 students.


Help Desk:

1. The first step: You need to create database with some entities according to SQL queries.
2. Student_Id should be a student number, Project number should have 2 digits such as 10,
    11,12,..., 23 etc.

**Important:**

**1.** Obey honor code principles.
**2.** Your submission should include the following files
    For part 1:


HW08_<part1>_<student number>.c and the .pdf file which includes your name, your codes and
screenshots of the result for sin 30, sin 31, sin32, sin33, sin34, sin35.


For part 2:


HW08_<part2>_<student number>.sql , your database and the .pdf file which includes your
name, your codes, your queries and screenshots of the results for each queries.

**3.** You submit your HW08_<student_name>_<studentSurname>_<student number>.zip file into
    Moodle.
**4.** You can prepare your HW08 in Turkish or English. Do not use mixed Turkish- English characters in
    any part of your homework (in comments- codes, file name, etc.).
5. If any questions, pls send an email and than come in lab 120 or just send a mail
    (tualtan@gtu.edu.tr).
Good Luck!


