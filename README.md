**Student Management System**

**Overview**

The Student Management System is a console-based application developed in C language using Linked Lists and File Handling. The project is designed to manage student records efficiently by allowing users to add, modify, delete, search, sort, save, and load student information.

Unlike array-based implementations, this project uses a Linked List data structure, which enables dynamic memory allocation and removes the limitation of fixed-size storage. Student records are stored as nodes in a linked list, making insertion and deletion operations efficient.

The project also includes file handling functionality to ensure that records are permanently stored and can be retrieved even after the program is closed and restarted.



** Features**

Student Record Management

* Add new student records
* Automatic roll number generation
* Display all student records
* Modify existing student details
* Delete student records by roll number
* Delete student records by name
* Delete all records

    • Search Functionality

* Search student by roll number
* Search student by name

    • Sorting Operations

* Sort records alphabetically by name (A–Z)
* Sort records by percentage (Highest to Lowest)

    • Additional Features

* Display records in reverse order using recursion
* Save records to a text file
* Load records from a text file during startup
* Dynamic memory allocation using `malloc()`
* Proper memory deallocation using `free()`

    •  Technologies Used
      
* Programming Language: C
* Data Structure: Singly Linked List
* Concepts:

  * Structures
  * Pointers
  * Dynamic Memory Allocation
  * File Handling
  * Recursion
  * Bubble Sort
  * String Manipulation



 Data Structure

Each student record is stored using the following structure:


typedef struct student
{
    int roll;
    char name[30];
    float per;
    struct student *next;
} STU;


Fields

| Field 	| Description                    		|
| ----- 	| ------------------------------		|
| roll  	| Student Roll Number		            | 
| name	  | Student Name                   		|	
| per   	| Student Percentage             		|				
| next  	| Pointer to Next Student Record 	  |



    ** Project Workflow**

1. Load Existing Records

When the application starts, it loads previously saved records from `student.txt`.

2. Add Student

* Allocate memory dynamically.
* Generate the smallest available roll number.
* Accept student details.
* Insert the record into the linked list.

3. Display Records

Traverse the linked list and display all student details in a formatted table.

4. Modify Records

Users can:

* Search by roll number
* Search by name

Then update:

* Name
* Percentage

5. Delete Records

Records can be deleted:

* By roll number
* By name

6. Sort Records

Users can sort records:

* Alphabetically by name
* By percentage in descending order

7. Reverse Display

Records can be displayed in reverse order using recursion.

 8. Save Records

All records are written to `student.txt` for permanent storage.

Concepts Demonstrated

** Linked List**

Used to store student records dynamically without any fixed size limitation.

 **Dynamic Memory Allocation**

Memory is allocated at runtime using `malloc()` and released using `free()`.

** File Handling**
Student records are saved and loaded using:

    • fopen()
    • printf()
    • fscanf()
    • fclose()
      
** Recursion**

Used to print records in reverse order.

** Sorting**

Bubble Sort is implemented for sorting student records by name and percentage.

** String Operations**

Functions such as `strcmp()` and `strcpy()` are used for string comparison and copying.
 Sample Menu


================ STUDENT MANAGEMENT SYSTEM ================

A/a : Add Student Record
D/d : Delete Student Record
M/m : Modify Student Record
S/s : Show Student Records
N/n : Sort By Name
P/p : Sort By Percentage
R/r : Reverse Display
V/v : Save Records
L/l : Load Records
E/e : Delete All Records
Q/q : Exit

**Learning Outcomes**

This project helped in understanding:

* Linked List implementation
* Dynamic Memory Allocation
* Pointer manipulation
* File Handling in C
* Recursive functions
* Sorting algorithms
* Modular programming
* Data management techniques
Future Enhancements

The project can be extended with:

* Attendance Management
* Student Result Management
* Fee Management System
* Login Authentication
* Database Integration (MySQL)
* GUI-based Interface
* Export Reports to PDF or Excel
* Search Filters and Advanced Sorting

**Conclusion**
This Student Management System demonstrates the practical implementation of core C programming concepts, including Linked Lists, Dynamic Memory Allocation, File Handling, Recursion, and Sorting Algorithms. The project provides an efficient and scalable solution for managing student records while serving as a strong learning project for understanding data structures and system design fundamentals.
