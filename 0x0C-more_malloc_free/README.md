# 0x0C. C - More malloc, free

This directory contains my solutions to programming problems using the C programming language, specifically focusing on Memory Allocation with ```malloc``` and ```free```.

## Automatic and dynamic allocation, malloc and free

The ```malloc``` function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and ```malloc``` will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function ```free```.

### Dynamic allocation

#### Malloc

The ```malloc``` function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

- Prototype: ```void *malloc(size_t size);```
- where ```void *``` means it is a pointer to the type of your choice
- and ```size``` is the number of bytes your need to allocate

#### Free

When you are using ```malloc```, you have to handle the memory yourself. This means that:

- You need to keep track of all the addresses of the allocated memory (in a variable of type pointer)
- You have to deallocate every memory space you previously allocated yourself. If you do not do this, then your program can run out of memory. Your operating system could even kill your program while it is running

Within this directory, each file corresponds to a different task, with a detailed explanation of the problem and the approach I took to solve it. Some of the tasks covered in this directory include printing text to the console, working with variables, and writing simple functions.

I hope to continue building on my knowledge of C programming through this directory, with the ultimate goal of becoming proficient in the language and applying it to real-world projects. Please feel free to browse through the directory, use the code in your own projects, and leave any comments or feedback.

## Learning Objectives

- How to use the exit function
- What are the functions ```calloc``` and ```realloc``` from the standard library and how to use them
