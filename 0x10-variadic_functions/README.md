# 0x10. C - Variadic functions

This directory contains my solutions to programming problems using the C programming language, specifically focusing on Variadic functions.

```stdarg.h``` is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments.Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter. An example of such a function is printf. A typical declaration is

```int check(int a, double b, ...);```

Variadic functions must have at least one named parameter, so, for instance,

```char *wrong(...);```

is not allowed in C. (In C++ and the upcoming C23,[2] such a declaration is permitted.) In C, a comma must precede the ellipsis if a named parameter is specified; in C++, it is optional.

### Defining variadic functions

```
long func(char, double, int, ...);
long func(char a, double b, int c, ...)
{
	/* ... */
}
```

Within this directory, each file corresponds to a different task, with a detailed explanation of the problem and the approach I took to solve it. Some of the tasks covered in this directory include printing text to the console, working with variables, and writing simple functions.

I hope to continue building on my knowledge of C programming through this directory, with the ultimate goal of becoming proficient in the language and applying it to real-world projects. Please feel free to browse through the directory, use the code in your own projects, and leave any comments or feedback.

## Learning Objectives

- What are variadic functions
- How to use ```va_start```, ```va_arg```, ```va_end``` macros
- Why and how to use the const type qualifier
