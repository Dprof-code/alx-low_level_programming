# 0x15. C - File I/O

This directory contains my solutions to programming problems using the C programming language, specifically focusing on File I/O. This invloves file handling.

### Types of File

- Text Based File
- Binary File : stored as 0's and 1's, compiles text files.

### Main File Operations

- Create a file
- Open a file
- Read a file
- Write to a file
- Close a file

```
// To create a file, a pointer has to be declared with a type FILE
// The pointer points to the file in memory

int main()
{
	FILE *new_file;
	new_file = fopen("file_name", "mode",);
}
```
