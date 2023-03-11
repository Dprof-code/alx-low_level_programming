# 0x0A. C - argc, argv

This directory contains my solutions to programming problems using the C programming language, specifically focusing on main function arguments.

There are at least two arguments to main: ```argc``` and ```argv```. The first of these is a count of the arguments supplied to the program and the second is an array of pointers to the strings which are those arguments—its type is (almost) ‘array of pointer to char’. These arguments are passed to the program by the host system's command line interpreter or job control language.

The declaration of main looks like this:
```
int main(int argc, char *argv[]);
```

Within this directory, each file corresponds to a different task, with a detailed explanation of the problem and the approach I took to solve it. Some of the tasks covered in this directory include printing text to the console, working with variables, and writing simple functions.

I hope to continue building on my knowledge of C programming through this directory, with the ultimate goal of becoming proficient in the language and applying it to real-world projects. Please feel free to browse through the directory, use the code in your own projects, and leave any comments or feedback.

## Learning Objectives

- How to use arguments passed to your program
- What are two prototypes of ```main``` that you know of, and in which case do you use one or the other
- How to use ```__attribute__((unused))``` or ```(void)``` to compile functions with unused variables or parameters
