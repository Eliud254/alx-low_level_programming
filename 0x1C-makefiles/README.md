# Project Title: 0x1C. C - Makefiles

## Introduction
This project focuses on the understanding and implementation of Makefiles in the C programming language. The goal is to create Makefiles for compiling and managing a set of source files efficiently.

## Project Details
- **Author:** Julien Barbier
- **Weight:** 1
- **Project Duration:** Dec 20, 2023, 6:00 AM - Dec 21, 2023, 6:00 AM
- **Checker Release:** Dec 20, 2023, 12:00 PM
- **Auto Review:** Will be launched at the deadline

## Learning Objectives
After completing this project, you should be able to:
- Explain what make and Makefiles are.
- Understand when, why, and how to use Makefiles.
- Define rules in Makefiles and comprehend how to set and use them.
- Differentiate between explicit and implicit rules.
- Identify and utilize common and useful rules in Makefiles.
- Grasp the concept of variables in Makefiles and learn how to set and use them.

## Resources
- [Makefile](https://www.gnu.org/software/make/manual/make.html)
- [Installing the make utility](https://www.gnu.org/software/make/)
- [Make Official Documentation](https://www.gnu.org/software/make/manual/make.html)

## Requirements
- **Allowed Editors:** vi, vim, emacs
- **OS:** Ubuntu 20.04 LTS
- **Version of gcc:** 9.3.0
- **Version of make:** GNU Make 4.2.1
- All your files should end with a new line.
- A README.md file at the root of the project folder is mandatory.

## Project Structure
### Task 0: make -f 0-Makefile
- Create your first Makefile.
#### Requirements:
- Name of the executable: school
- Rules: all
- The all rule builds your executable
- Variables: none

Example:
```bash
make -f 0-Makefile
./school
```

### Task 1: make -f 1-Makefile
- Requirements:
  - Name of the executable: school
  - Rules: all
  - The all rule builds your executable
  - Variables: CC, SRC
  - CC: the compiler to be used
  - SRC: the .c files

Example:
```bash
make -f 1-Makefile
```

### Task 2: make -f 2-Makefile
- Create your first useful Makefile.
#### Requirements:
- Name of the executable: school
- Rules: all
- The all rule builds your executable
- Variables: CC, SRC, OBJ, NAME
  - CC: the compiler to be used
  - SRC: the .c files
  - OBJ: the .o files
  - NAME: the name of the executable
- The all rule should recompile only the updated source files
- You are not allowed to have a list of all the .o files

Example:
```bash
make -f 2-Makefile
```

### Task 3: make -f 3-Makefile
- Requirements:
  - Name of the executable: school
  - Rules: all, clean, oclean, fclean, re
  - all: builds your executable
  - clean: deletes all Emacs and Vim temporary files along with the executable
  - oclean: deletes the object files
  - fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
  - re: forces recompilation of all source files
  - Variables: CC, SRC, OBJ, NAME, RM
    - CC: the compiler to be used
    - SRC: the .c files
    - OBJ: the .o files
    - NAME: the name of the executable
    - RM: the program to delete files
  - The all rule should recompile only the updated source files
  - The clean, oclean, fclean, re rules should never fail
  - You are not allowed to have a list of all the .o files

Example:
```bash
make -f 3-Makefile
make all -f 3-Makefile
make clean -f 3-Makefile
make oclean -f 3-Makefile
make fclean -f 3-Makefile
make all -f 3-Makefile
make re -f 3-Makefile
```

### Task 4: A complete Makefile
- Requirements:
  - Name of the executable: school
  - Rules: all, clean, fclean, oclean, re
  - all: builds your executable
  - clean: deletes all Emacs and Vim temporary files along with the executable
  - oclean: deletes the object files
  - fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
  - re: forces recompilation of all source files
  - Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
    - CC: the compiler to be used
    - SRC: the .c files
    - OBJ: the .o files
    - NAME: the name of the executable
    - RM: the program to delete files
    - CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
  - The all rule should recompile only the updated source files
  - The clean, oclean, fclean, re rules should never fail
  - You are not allowed to have a list of all the .o files

Example:
```bash
make all -f 4-Makefile
```

### Task 5: Island Perimeter
- Create a function `def island_perimeter(grid)` that returns the perimeter of the island described in grid:
  - grid is a list of list of integers:
    - 0 represents a water zone
    - 1 represents a land zone
  - One cell is a square with side length 1
  - Grid cells are connected horizontally/vertically (not diagonally).
  - Grid is rectangular, width and height don’t exceed 100
  - Grid is completely surrounded by water, and there is one island (or nothing).
  - The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

Requirements:
- First line contains #!/usr/bin/python3
- You are not allowed to import any module
- Module and function must be documented

Example:
```bash
./5-main.py
```

## Conclusion
This project aims to reinforce your understanding of Makefiles in C programming. Ensure that you follow the given guidelines, create the necessary files, and implement the specified rules and functions. Good luck!
