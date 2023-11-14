# 0x18. C - Dynamic libraries

This directory contains my solutions to programming problems using the C programming language, specifically focusing on Dynamic Libraries. As a beginner in C programming, I will be completing various tasks and projects to solidify my understanding of the language and gain experience with its syntax.

Dynamic libraries provide a code that can be loaded anywhere in the memory. Once loaded, the library code can be used by any number of programs. This way the size of programs using dynamic library and the memory footprint can be kept low as possible. The memory is conserved while using dynamic libraries since each application or program can access the dynamic library without needing an individual copy, as would be the case, if we were using static libraries. The main difference from Static Libraries and Dynamic Libraries in Static, the linker makes a copy of all of the selected functions for the library to the executable file and in Dynamic it is not necessary. This means a difference in use of memory but also in risk of data corruption and in how easily the code is handled.

Within this directory, each file corresponds to a different task, with a detailed explanation of the problem and the approach I took to solve it. Some of the tasks covered in this directory include printing text to the console, working with variables, and writing simple functions.

I hope to continue building on my knowledge of C programming through this directory, with the ultimate goal of becoming proficient in the language and applying it to real-world projects. Please feel free to browse through the directory, use the code in your own projects, and leave any comments or feedback.

## Learning Objectives

- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable `$LD_LIBRARY_PATH` and how to use it
- What are the differences between static and shared libraries
- Basic usage `nm`, `ldd`, `ldconfig`
