# Chapter 9 . Arrays and Pointers

## 1. Stack

- A **stack** is a data structure where elements are added and removed from only one end, following the Last In, First Out (LIFO) principle.
- The **top** indicates the position of the most recently added data.
- **Push** adds data to the stack, and **pop** removes the most recent data.
- Stacks can be implemented using arrays, with a variable (e.g., `top`) tracking the current position.
- Proper error handling is necessary to prevent pushing onto a full stack or popping from an empty stack.
- Practical stack operations include adding and removing elements, as well as checking the current size.

## 2. Memory and Addresses

- Variables are stored in memory, and each memory location has a unique address.
- The size of a variable (e.g., an `int` is typically 4 bytes) determines how much memory it occupies.
- The address of a variable can be obtained using the `&` operator (e.g., `&a`).
- Arrays are stored in contiguous memory locations. The address of each element can be calculated based on the base address and element size.
- The name of an array represents the address of its first element.

## 3. Pointers

- A **pointer** is a variable that stores the address of another variable.
- Pointers are declared using the `*` symbol (e.g., `int *p;` for an integer pointer).
- Assigning a variable's address to a pointer allows indirect access to the variable's value using the dereference operator `*`.
- The size of a pointer is typically 4 bytes, regardless of the data type it points to.
- Pointers can be used to manipulate data stored in other variables, swap values, and traverse arrays.

## 4. Relationship Between Arrays and Pointers

- The name of an array acts as a pointer to its first element.
- Pointer arithmetic allows navigation through array elements (e.g., `*(array + i)` is equivalent to `array[i]`).
- Pointers and arrays are closely related; pointers can be used to access and manipulate array data efficiently.
- For character arrays (strings), pointers are often used for string manipulation and traversal.
- Examples include reversing a string using pointers, swapping values, and sorting arrays by manipulating elements through pointers.
