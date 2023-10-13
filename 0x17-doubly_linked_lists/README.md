Below is a well-defined README file for the project "0x17. C - Doubly linked lists."

# 0x17. C - Doubly linked lists

**Author: Julien Barbier**

**Ongoing second chance project - started Oct 12, 2023 6:00 AM, must end by Oct 14, 2023 6:00 AM**

An auto review will be launched at the deadline

## Overview

This project focuses on implementing and working with doubly linked lists in C. You'll learn about the structure of doubly linked lists, how to perform various operations like insertion, deletion, and traversal, and how to use them in your programs.

## Learning Objectives

Upon completing this project, you will be able to:

- Understand what a doubly linked list is.
- Use doubly linked lists to store and manipulate data.
- Implement various operations with doubly linked lists, including insertion and deletion.
- Start looking for the right source of information without too much help.
- Learn how to use dynamic memory allocation functions (malloc and free) effectively.
- Follow the Betty style guide for code formatting and documentation.
- Write clean and efficient C code.

## Requirements

General requirements for this project include:

- The project must be implemented in C.
- You can use the editors vi, vim, or emacs for your code.
- All your files should be compiled on Ubuntu 20.04 LTS using gcc with C standard library functions (malloc, free, printf, and exit).
- Ensure that all your code files end with a new line.
- Include a `README.md` file at the root of your project folder.

## Data Structure

For this project, use the following data structure:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: Doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Compilation

To compile your code, use the following flags:

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89
```

Remember that the main.c files shown in the examples are provided for your reference and testing but do not need to be included in your repository.

## Tasks

1. **Print List** - Write a function that prints all the elements of a `dlistint_t` list. The function should return the number of nodes.

2. **List Length** - Write a function that returns the number of elements in a linked `dlistint_t` list.

3. **Add Node** - Write a function that adds a new node at the beginning of a `dlistint_t` list. The function should return the address of the new element, or NULL if it fails.

4. **Add Node at the End** - Write a function that adds a new node at the end of a `dlistint_t` list. The function should return the address of the new element, or NULL if it fails.

5. **Free List** - Write a function that frees a `dlistint_t` list.

6. **Get Node at Index** - Write a function that returns the nth node of a `dlistint_t` linked list. The index starts from 0. If the node does not exist, return NULL.

7. **Sum List** - Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list. If the list is empty, return 0.

8. **Insert at Index** - Write a function that inserts a new node at a given position. The index starts at 0. The function should return the address of the new node, or NULL if it fails.

9. **Delete at Index** - Write a function that deletes the node at a specified index of a `dlistint_t` linked list. The index starts at 0. Return 1 if it succeeds, -1 if it fails.

## Copyright - Plagiarism

You are required to come up with solutions for the tasks yourself and not copy or paste someone else's work. Plagiarism is strictly forbidden and will result in removal from the program.

## How to Use

In the main files for each task, you can test your functions with provided sample input data. For example:

```c
#include <stdio.h>
#include "lists.h"

int main(void)
{
    dlistint_t *head;
    
    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    print_dlistint(head);
    return (0);
}
```

After writing your C code for the tasks, compile them using the provided flags and execute the program to test your code.

## Resource

You can read or watch additional resources to better understand doubly linked lists.

- [What is a Doubly Linked List](https://en.wikipedia.org/wiki/Doubly_linked_list)
