# Chapter 10 . Functions in C

## 1. Understanding Functions

- A **function** in C is like a "magic box" that takes input, processes it, and returns an output.
- C provides built-in functions (like `printf()`) and allows users to define their own.
- Using functions avoids repetitive code. For example, instead of writing the same set of instructions multiple times (like making coffee for each customer), you can call a function to perform the task whenever needed.

## 2. Structure and Use of Functions

- A function typically has:
  - A **name**
  - **Parameters (arguments)**: Inputs to the function
  - **Return value**: The result produced by the function
- Calling a function is like pressing a button on a vending machine: you provide some input (like selecting coffee type), and the function returns the result (the prepared coffee).
- Example: A function `plus(int v1, int v2)` returns the sum of two numbers.

## 3. Local and Global Variables

- **Local variables** are declared inside a function and can only be used within that function.
- **Global variables** are declared outside all functions and can be accessed by any function in the program.
- If a local and global variable have the same name, the local variable takes precedence within its function.

## 4. Function Return Values and Parameters

- Functions can be categorized by whether they return a value or not:
  - **Functions with a return value**: Return a result using the `return` statement and must specify a return type (e.g., `int`, `char`).
  - **Functions without a return value**: Use the `void` return type and do not return anything.
- **Parameters** are used to pass information into functions. There are two main ways to pass parameters:
  - **Call by value**: The function receives a copy of the argument’s value. Changes inside the function do not affect the original variable.
  - **Call by address (reference)**: The function receives the address of the argument, allowing it to modify the original variable.

## 5. Practical Examples

- **Calculator Function**: A function that takes two numbers and an operator, then returns the calculation result.
- **Gugudan (Multiplication Table)**: A function that prints the multiplication table for a given number.
- **Case Conversion**: Functions that convert uppercase letters to lowercase and vice versa.
- **Lotto Number Generator**: A function that randomly selects numbers for a lottery ticket.

## 6. Key Benefits of Functions

- **Modularity**: Breaks code into manageable sections.
- **Reusability**: Functions can be called multiple times, reducing code duplication.
- **Readability**: Makes programs easier to read and maintain.
- **Debugging**: Isolates errors to specific functions for easier troubleshooting.
