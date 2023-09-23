# File Descriptors and Permissions Project

This project is a collection of C programs that demonstrate the use of file descriptors and file permissions. The project is divided into several tasks, each focusing on different aspects of file I/O operations and permissions management.

## Learning Objectives

By completing this project, you will gain knowledge and practical experience in the following areas:

1. File I/O Operations:
   - Creating, opening, closing, reading, and writing files.
   - Understanding file descriptors and their use.

2. Standard File Descriptors:
   - Knowledge of the three standard file descriptors: STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO.
   - Their purposes and POSIX names.

3. Using I/O System Calls:
   - Utilizing system calls like `open`, `close`, `read`, and `write` for file operations.

4. File Permissions:
   - Setting file permissions when creating files with the `open` system call.
   - Understanding and managing file permission modes.

5. System Calls vs. Functions:
   - Differentiating between system calls and standard library functions.

## Project Structure

The project includes the following tasks:

1. **read_textfile.c**: A program that reads a text file and prints its content to the standard output.

2. **create_file.c**: A program that creates a new file with specified content.

3. **append_text_to_file.c**: A program that appends text to the end of an existing file.

4. **cp.c**: A program that copies the content of one file to another, with error handling and permissions management.

5. **elf_header.c** (Advanced): A program that displays information contained in the ELF header of an ELF file.

## How to Compile and Run

Each task has its own C source file and can be compiled separately using GCC. For example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-read_textfile.c -o read_textfile
```

To run the compiled program:

```bash
./read_textfile filename letters
```

Replace `filename` with the name of the text file you want to read and `letters` with the number of letters to read and print.
