# C3 - Multi-file programs, linked lists, constants, & recursion

## recursion.c

[Video](https://youtu.be/cAnujKR4stQ) (16:16) - *Recursion examples*
This file uses the Fibonacci function to demonstrate a loop-based implementation, a naive recursive implementation, and a tail-recursive implementation.  

Additional videos on recursion (also part of Scheme 2 for CSC240):

- [Thinking recursively video](https://youtu.be/OpX214pT6D0) (2:59): *Walkthrough of recursive solutions to several problems*
- [Tail Recursion](https://youtu.be/mFiRdTmbs3E) (10:40) goes over tail recursion using examples in Java & Python but which are both applicable to C

## constants.c

[Video](https://youtu.be/4n3U43dv9HM) (8:49) - *Using constants in C*
This file has examples of symbolic & enumeration constants as well as constant variables.  It also shows how the value of a "constant" variable can be changed.  A constant variable is different from a symbolic constant since the constant variable will have memory allocated to it and we can have pointers to it, we just can't change it directly.  

## macros.c

[Video](https://youtu.be/r9jqJZEeXho) (12:04) - *Using macros in C*
This file has examples of using macros to define symbolic constants and macro functions.  

## headers.c

[Video](https://youtu.be/cjfdlfXWTxE) (9:01) - *Example of how header files work*

The intention of this video & example is to show how header files are included into a C source file.  We use the -E flag so that gcc will run the preprocessor but not compile the file since header files affect the C code that gets compiled.  We also discuss how to write guards and demonstrate what their purpose is.  See the multifile & multifile2 examples below for more information on writing header files and C programs with more than one C source file.

## typedef.c

[Video](https://youtu.be/iYJemPTIWtU) (6:07) - *Example of using typedef with structs*

This video shows multiple ways to declare a struct with typedef

## mystuff_originial.c / multifile

 *Multifile C program example*
This example demonstrates how to create a module (.h + .c files) from some macros and functions in the mystuff_original.c file that we may want to save for reuse later.  

- [Video](https://youtu.be/lARP1419SsI) (11:16) - Creating the module
- [makefile video](https://youtu.be/ME986X6VWoM) (4:53) - A more indepth video about creating a makefile
- [Reusing modules video](https://youtu.be/uwAhmcauntc) (5:55) - a video where we reuse the module created above

## multifile2

[Video](https://youtu.be/tvWigt9RCLU) (19:30) - *A second multfile example*
Includes more examples of working with the preprocessor.  Also includes examples of inline functions.

## basiclist

[Video - Overview of Linked Lists](https://youtu.be/tDTx50zsji0) (11:34) for those of you who are rusty on your CSC205 material

[Video - Overview of the basiclist module](https://youtu.be/kjIPryTpnXo) (9:20) has diagrams that go over how basiclist works

[Video](https://youtu.be/MjOE9W6KFyY) (15:21) - *Simple example of a linked list in C*
The basicilist.h is the header file that contains the struct definition and forward declarations for our linked list functions.  We use a node_t pointer to point to the first element in our linked list.  In the basiclist.c file, the list_add function takes a double pointer to the list (since it will add the new element to the front of the list) and a pointer to the data.  Since we don't know what type of data we are adding to the list, we use a void *.  The user of the code will need to handle casting back to the correct type.  The list_remove_first function frees the memory associated with the first element then points the list to the 2nd element.  There is also a test main function that will be compiled if you use the -DTEST flag.  The main method in basiclist.c creates a list of integers then prints them out.  

## structwithptr.c

[Video](https://youtu.be/iAxVfDVBie8) (8:35) - *Example of allocating memory for a pointer to a struct*

If you have a structure that contains pointers, if you create a pointer to that structure you need to allocate memory for the structure itself, and also for the pointers it contains.
