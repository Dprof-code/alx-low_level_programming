# 0x0E. C - Structures, typedef

This directory contains my solutions to programming problems using the C programming language, specifically focusing on Structures.

A structure is a user defined data type available in C that allows to combine data items of different kinds.

### Structure Declaration

- You can define a structure in the global scope of your program (outside of all your functions, just like the functions prototypes).
- You can declare elements of your structure in its scope.

```
struct User
{
	char *name;
	char *email;
	int age;
};

int main(void)
{
	struct User user;

	return (0);
}
```

You can access the elements of your structure by using the ‘.’ symbol.

```
struct User
{
        char *name;
        char *email;
        int age;
};

int main(void)
{
        struct User user;
	
	user.name = "Adedamola";
	user.email = "adedamola@mail.com";
	user.age = "22";
        return (0);
}
```

### Pointers to structures

To access elements of a pointer to a
structure, you have to dereference the
pointer and then access to the data using
the ‘.’ symbol.

but,

There is a simple way to do that, just by
using the ‘->’ symbol.
This symbol is equivalent to dereferencing
+ using ‘.’

```
struct User
{
        char *name;
        char *email;
        int age;
};

int main(void)
{
	struct User user;
	struct User *ptr;

	ptr = &user;
	(*ptr).name = "Adedamola"

	ptr -> email = "adedamola@mail.com";
	return (0);
}
```

## Learning Objectives

- What are structures, when, why and how to use them
- How to use ```typedef```
