# 0x12. C - Singly linked lists

This directory contains my solutions to programming problems using the C programming language, specifically focusing on Linked lists.

A data structure is a storage that is used to store and organize data. It is a way of arranging data on a computer so that it can be accessed and updated efficiently.

### Classification of Data Structure

- Linear data structure: Data structure in which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements, is called a linear data structure. 
Examples of linear data structures are array, stack, queue, linked list, etc.

	- Static data structure
	- Static data structure

- Non-linear data structure: Data structures where data elements are not placed sequentially or linearly are called non-linear data structures. In a non-linear data structure, we can’t traverse all the elements in a single run only. 
Examples of non-linear data structures are trees and graphs.

### Linked List

Linked list is the linked representation of list

- Single Linked List : forwards direction only
- Double Linked List : forwards and backwards
- Circular Linked List : tail is linked to head

Single linked list consists of Node. Node contains data and address of next node.

#### Creating a Node

```
struct node {
	int data;
	struct node *next;
};
```

#### Creating a Singly Linked list


```
struct node {
	int data;
	struct node *next;
}

int main()
{
	struct node *head = NULL;
	head = malloc(sizeof(struct node));

	head->data = 45;
	head->next = NULL;

	return (0);	
}
```

#### Project Data Structure

```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

Within this directory, each file corresponds to a different task, with a detailed explanation of the problem and the approach I took to solve it. Some of the tasks covered in this directory include printing text to the console, working with variables, and writing simple functions.

I hope to continue building on my knowledge of C programming through this directory, with the ultimate goal of becoming proficient in the language and applying it to real-world projects. Please feel free to browse through the directory, use the code in your own projects, and leave any comments or feedback.

## Learning Objectives

- How to use linked lists
- Start to look for the right source of information without too much help
