English translation of the tasks given->Tasks to perform:
Task 11.1. Buffer
In this task, use smart pointers and remember to correctly release all resources.
Define an abstract class Buffer. The class has:
• a pure virtual function void add(int a);
• a pure virtual function void write();
• a parameterless constructor printing the message "Buffer Constructor" on the screen;
• a destructor printing the message "Buffer Destructor" on the screen.
Create two classes publicly inheriting from this class: BufferArr and BufferFile.
The BufferArr class has:
• private fields to represent a one-dimensional array of elements with a size
specified as a parameter;
• a one-argument constructor allocating an array of the specified size;
• appropriate getters and setters for the fields;
• a method add(int a) that adds the parameter element to the next position
in the array; if the array is full and an element cannot be added, an appropriate
message should appear on the screen;
• write() method that displays all added elements on the screen.
Additionally, constructors and the destructor should print a message identifying them on the screen: "BufferArr Class Constructor" and "BufferArr Class Destructor".

The BufferFile class has:
• a private field to store the file path;
• a one-argument constructor allowing initialization of the field in the class by accepting
the path name as a parameter;
• a method add(int a) that appends the next number to the file. Each line contains
one number;
• a write() method that displays all numbers from the file on the console.
Additionally, constructors and the destructor should print a message identifying them on the screen: "BufferFile Class Constructor" and "BufferFile Class Destructor". Pointers allowing the file to be opened should be used.

Write a program to test polymorphic calls to virtual methods.
Write a main() function that has 6 "buffers" placed in a container or array.

Task 11.2. Shops
In this task, use smart pointers. Define a Warehouse class that will represent a warehouse. The class will have:
• private fields storing the name of the goods stored in the warehouse
(for simplicity, for example: books, computers, beds, etc.) and the quantity;
• a constructor initializing fields in the class;
• appropriate setters and getters for the fields;
• a method displaying information about the warehouse (name of the goods and quantity of goods).
Then create a Shop class representing a shop and having:
• a private field: shop name, a list of warehouses (vector) used by the shop;
• a one-parameter constructor allowing the initialization of the shop name;
• a method adding a warehouse to the list;
• a method that allows selling goods, the name, and quantity of which are provided
as arguments (assuming that the name of the article is the same as the name of the goods
in the warehouse). If the warehouse contains the appropriate quantity of the goods,
the goods should be sold;
• a method displaying which warehouses the shop uses;
• a method displaying the shop name.
In the destructors of the created classes, a message identifying these destructors should be displayed.

In the main function, create a list of unique shops. Shops can use the same
warehouses. Test the created classes.

Task 11.3. Doubly Linked List
Write a program that, based on smart pointers, will implement a simplified
doubly linked list. Operations that can be performed on the list are adding to
the beginning and end of the list, removing from the beginning and end, displaying
the contents of the list, checking if it is empty. The program should be tested. In the destructors of the created classes, a message identifying these destructors should be displayed.
