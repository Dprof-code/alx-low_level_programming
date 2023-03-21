# 0x0D. C - Preprocessor

This directory contains my solutions to programming problems using the C programming language, specifically focusing on Preprocessor.

The C preprocessor modifies a source code file before handing it over to the compiler. You're most likely used to using the preprocessor to include files directly into other files, or #define constants, but the preprocessor can also be used to create "inlined" code using macros expanded at compile time and to prevent code from being compiled twice.

There are essentially three uses of the preprocessor--directives, constants, and macros. Directives are commands that tell the preprocessor to skip part of a file, include another file, or define a constant or macro. Directives always begin with a sharp sign (#) and for readability should be placed flush to the left of the page. All other uses of the preprocessor involve processing #define'd constants or macros. Typically, constants and macros are written in ALL CAPS to indicate they are special (as we will see).

### Header Files

The #include directive tells the preprocessor to grab the text of a file and place it directly into the current file. Typically, such statements are placed at the top of a program--hence the name "header file" for files thus included.

### Constants

If we write
```
1 #define [identifier name] [value]
```

whenever [identifier name] shows up in the file, it will be replaced by [value].

If you are defining a constant in terms of a mathematical expression, it is wise to surround the entire value in parentheses:

```
1 #define PI_PLUS_ONE (3.14 + 1)
```

By doing so, you avoid the possibility that an order of operations issue will destroy the meaning of your constant:

```
1 x = PI_PLUS_ONE * 5;
```

Without parentheses, the above would be converted to

```
1 x = 3.14 + 1 * 5;
```

which would result in 1 * 5 being evaluated before the addition, not after. Oops!

It is also possible to write simply

```
1 #define [identifier name]
```
which defines [identifier name] without giving it a value. This can be useful in conjunction with another set of directives that allow conditional compilation.

### Macros

The other major use of the preprocessor is to define macros. The advantage of a macro is that it can be type-neutral (this can also be a disadvantage, of course), and it's inlined directly into the code, so there isn't any function call overhead. (Note that in C++, it's possible to get around both of these issues with templated functions and the inline keyword.)

A macro definition is usually of the following form:

```
1 #define MACRO_NAME(arg1, arg2, ...) [code to expand to]
```

Within this directory, each file corresponds to a different task, with a detailed explanation of the problem and the approach I took to solve it. Some of the tasks covered in this directory include printing text to the console, working with variables, and writing simple functions.

I hope to continue building on my knowledge of C programming through this directory, with the ultimate goal of becoming proficient in the language and applying it to real-world projects. Please feel free to browse through the directory, use the code in your own projects, and leave any comments or feedback.

## Learning Objectives

- What are macros and how to use them
- What are the most common predefined macros
- How to include guard your header files
