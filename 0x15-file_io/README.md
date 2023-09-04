# File I/O in C Programming

A simple C programming project that demonstrates file input and output operations.

## Table of Contents

- [Introduction](#introduction)
- [Prerequisites](#prerequisites)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project showcases the fundamentals of file input and output (I/O) operations in the C programming language. It provides a basic example of how to read from and write to files using C functions.

## Prerequisites

Before you begin, ensure you have the following:

- C Compiler (e.g., GCC)
- CMake (optional but recommended for building)
- [Insert any specific dependencies or tools here]


**Step 1: Include the Necessary Header File**
To perform file I/O in C, you need to include the `stdio.h` header file, which provides functions and types for I/O operations.

```c
#include <stdio.h>
```

**Step 2: Declare File Pointers**
You'll need file pointers to work with files. Declare file pointers for the files you want to read from and write to. For example:

```c
FILE *inputFile;  // Pointer for input file
FILE *outputFile; // Pointer for output file
```

**Step 3: Open Files**
Before you can read from or write to a file, you must open it. You can use the `fopen` function to open files. It takes two arguments: the filename and the mode (read, write, etc.). Here's how to open a file for reading and writing:

```c
inputFile = fopen("input.txt", "r");   // Open for reading ("r" mode)
outputFile = fopen("output.txt", "w"); // Open for writing ("w" mode)
```

Make sure to check if the file opens successfully:

```c
if (inputFile == NULL || outputFile == NULL) {
    perror("Error opening files");
    return 1; // Exit with an error code
}
```

**Step 4: Read from a File**
To read data from a file, you can use functions like `fscanf` or `fgets`. Here's an example using `fscanf` to read integers from an input file:

```c
int num1, num2;
fscanf(inputFile, "%d %d", &num1, &num2);
```

**Step 5: Write to a File**
To write data to a file, you can use functions like `fprintf` or `fputs`. Here's an example using `fprintf` to write data to an output file:

```c
fprintf(outputFile, "Sum: %d\n", num1 + num2);
```

**Step 6: Close Files**
After you're done reading from or writing to a file, you should close it using the `fclose` function:

```c
fclose(inputFile);
fclose(outputFile);
```

Closing files is important because it frees up system resources and ensures that changes are written to the file.

**Step 7: Error Handling**
Always check for errors during file I/O operations. The functions mentioned above often return `NULL` or an error code when something goes wrong. Handle errors gracefully to prevent crashes and unexpected behavior.

Here's a complete example that reads two numbers from an input file, calculates their sum, and writes the result to an output file:

```c
#include <stdio.h>

int main() {
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        perror("Error opening files");
        return 1;
    }

    int num1, num2;
    fscanf(inputFile, "%d %d", &num1, &num2);
    fprintf(outputFile, "Sum: %d\n", num1 + num2);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
```

This code reads from "input.txt" and writes to "output.txt." Remember to replace these filenames with your actual file names and adapt the code as needed for your specific use case.
