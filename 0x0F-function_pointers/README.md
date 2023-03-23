# 0x0F. C - Function pointers

This directory contains my solutions to programming problems using the C programming language, specifically focusing on Function Pointer

In C, like normal data pointers ```(int *, char *, etc)```, we can have pointers to functions. Following is a simple example that shows declaration and function call using function pointer.

```
#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main()
{
	// fun_ptr is a pointer to function fun()
	void (*fun_ptr)(int) = &fun;

	/* The above line is equivalent of following two
	void (*fun_ptr)(int);
	fun_ptr = &fun;
	*/

	// Invoking fun() using fun_ptr
	(*fun_ptr)(10);

	return 0;
}
```

## Learning Objectives

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory
