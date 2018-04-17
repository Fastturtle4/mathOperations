README.md

MathOperations.h:
This is the MathOperations header file. It contains prototypes to many of the functions used.
The public and private data are defined here

MathOperations.cpp:
The functions described in the MathOperations.h file are defined here

main.cpp:
This is the main file. It uses the functions defined in the other files to generate a menu interface
that allows a student to select a math question from the menu and attempt to answer it. The menu will
display again after each question until the user quits the program

How to compile:
type: g++ -g -o CS216PA1 main.cpp MathOperations.cpp
