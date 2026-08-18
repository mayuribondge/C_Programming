# 💻 C Programming

Welcome to my **C Programming** repository! 🚀

This repository contains my **C programming practice programs, coding exercises, problem-solving programs, and fundamental concepts**. I am using this repository to improve my programming logic, strengthen my C fundamentals, and prepare for technical interviews and software development.

---

## 👩‍💻 About Me

**Name:** Mayuri Bondge
**Degree:** B.E. Information Technology
**University:** Savitribai Phule Pune University (SPPU)
**Career Goal:** Software Developer

---

## 📚 Topics Covered

### 🔹 C Programming Fundamentals

* Introduction to C
* Structure of a C Program
* Compilation and Execution
* Header Files
* Variables
* Constants
* Data Types
* Keywords
* Identifiers
* Input and Output
* Type Conversion
* Type Casting
* Comments

### 🔹 Operators

* Arithmetic Operators
* Relational Operators
* Logical Operators
* Assignment Operators
* Increment and Decrement Operators
* Conditional Operator
* Bitwise Operators
* Shift Operators

### 🔹 Control Statements

* `if`
* `if-else`
* Nested `if`
* `else-if`
* `switch`
* `for`
* `while`
* `do-while`
* `break`
* `continue`

### 🔹 Number Programs

* Even and Odd Number
* Prime Number
* Factorial
* Perfect Number
* Armstrong Number
* Palindrome Number
* Reverse Number
* Fibonacci Series
* Factors of a Number
* Sum of Digits
* Count Digits
* Multiplication Table
* Strong Number

### 🔹 Pattern Programs

* Star Patterns
* Number Patterns
* Alphabet Patterns
* Square Patterns
* Pyramid Patterns
* Inverted Pyramid
* Diamond Patterns
* Hollow Patterns

### 🔹 Functions

* Function Declaration
* Function Definition
* Function Calling
* Parameters and Arguments
* Return Values
* User-Defined Functions
* Call by Value
* Recursion
* Library Functions

### 🔹 Arrays

* One-Dimensional Arrays
* Two-Dimensional Arrays
* Array Traversal
* Searching
* Sorting
* Maximum Element
* Minimum Element
* Sum of Elements
* Average of Elements
* Reverse an Array
* Duplicate Elements
* Even and Odd Elements
* Matrix Operations

### 🔹 Strings

* String Declaration
* String Initialization
* String Input and Output
* String Traversal
* String Length
* String Copy
* String Comparison
* String Concatenation
* String Reverse
* Palindrome String
* Character Counting

### 🔹 Pointers

* Pointer Basics
* Pointer Declaration
* Pointer Initialization
* Address Operator `&`
* Dereference Operator `*`
* Pointer Arithmetic
* Pointers and Arrays
* Pointers and Functions
* Pointer to Pointer

### 🔹 Dynamic Memory Allocation

* `malloc()`
* `calloc()`
* `realloc()`
* `free()`
* Dynamic Arrays
* Memory Management

### 🔹 Structures and Unions

* Structure
* Structure Variables
* Array of Structures
* Nested Structures
* Pointer to Structure
* Structure with Functions
* Union
* Difference Between Structure and Union

### 🔹 File Handling

* File Opening
* File Closing
* Reading Files
* Writing Files
* Appending Data
* `fopen()`
* `fclose()`
* `fprintf()`
* `fscanf()`
* `fgets()`
* `fputs()`

---

## 🛠️ Technologies and Tools

* **Programming Language:** C
* **Compiler:** GCC
* **Code Editor:** VS Code
* **Version Control:** Git
* **Repository:** GitHub
* **Operating System:** Windows / Linux

---

## ▶️ How to Compile and Run

### Compile

```bash
gcc Program.c -o Program
```

### Run on Windows

```bash
Program.exe
```

### Run on Linux/macOS

```bash
./Program
```

---

## 💻 Sample Program

### Prime Number Program in C

```c
#include <stdio.h>

int main()
{
    int num = 0;
    int i = 0;
    int flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
    {
        printf("%d is not a prime number.\n", num);
    }
    else
    {
        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d is a prime number.\n", num);
        }
        else
        {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}
```

### Output

```text
Enter a number: 17
17 is a prime number.
```

---

## 🎯 Learning Objectives

The main objectives of this repository are:

* Build strong C programming fundamentals
* Improve programming logic
* Develop problem-solving skills
* Understand memory management
* Learn pointers and dynamic memory allocation
* Practice arrays and strings
* Understand functions and recursion
* Learn structures and unions
* Practice file handling
* Prepare for technical interviews
* Build a strong foundation for Data Structures and Algorithms

---

## 🧠 Problem-Solving Practice

I am practicing C programming problems related to:

* Mathematical problems
* Number manipulation
* Pattern printing
* Arrays
* Strings
* Functions
* Recursion
* Pointers
* Dynamic Memory Allocation
* Structures
* File Handling

---

## 📈 Learning Progress

| Topic                     | Status        |
| ------------------------- | ------------- |
| C Fundamentals            | ✅ Completed   |
| Operators                 | ✅ Completed   |
| Control Statements        | ✅ Completed   |
| Number Programs           | 🔄 Practicing |
| Pattern Programs          | 🔄 Practicing |
| Functions                 | 🔄 Practicing |
| Arrays                    | 🔄 Practicing |
| Strings                   | 🔄 Practicing |
| Pointers                  | 🔄 Learning   |
| Dynamic Memory Allocation | 🔄 Learning   |
| Structures and Unions     | 🔄 Learning   |
| File Handling             | 🔄 Learning   |

---

## 🚀 Future Learning Goals

After strengthening my C programming fundamentals, I plan to learn:

* Data Structures and Algorithms
* C++
* Java
* Python
* Object-Oriented Programming
* SQL
* Database Management Systems
* Backend Development
* Software Development

---

## 📌 Skills

**Programming Languages:** C, C++, Java, Python

**Core Concepts:** Data Structures, Algorithms, OOP, Problem Solving

**Database:** SQL, MySQL

**Tools:** Git, GitHub, VS Code

---

## 🤝 Contribution

This repository is created for my learning, practice, and programming development.

Suggestions and improvements are welcome.

---

## 📬 Connect With Me

**GitHub:**
https://github.com/mayuribondge

---

## ⭐ Support

If you find this repository useful, please consider giving it a ⭐ on GitHub.

---

### 🚀 Keep Learning. Keep Coding. Keep Growing.

**Happy Coding with C! 💻**
