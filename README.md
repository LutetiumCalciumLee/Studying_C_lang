# Chapter 6 . Basics of Loops and the for Loop in C

- The **for loop** is used to repeat a block of code a specific number of times, especially when the number of repetitions is known in advance.

- **Syntax:**
  ```
  for (initialization; condition; increment/decrement) {
      // statements to execute
  }
  ```
  - **Initialization:** Sets the starting value of the loop variable (runs once at the beginning).
  - **Condition:** The loop continues as long as this condition is true. It is checked before each iteration.
  - **Increment/Decrement:** Updates the loop variable after each iteration (usually increases or decreases the value).

- **Execution Order:**
  1. Initialization is executed once at the start.
  2. The condition is checked; if true, the loop body executes.
  3. After the loop body, the increment/decrement expression runs.
  4. Steps 2 and 3 repeat until the condition is false, then the loop ends.

- **Key Points:**
  - The semicolons (;) in the syntax are essential and must not be omitted.
  - You can omit the initialization, condition, or increment/decrement parts, but at least the semicolons must remain. Omitting the condition creates an infinite loop.
  - The for loop is often used for counting, iterating over arrays, or performing repetitive calculations.
  - Nested for loops (a for loop inside another for loop) are common for handling multi-dimensional data or patterns.
  - The loop variable is usually declared and initialized in the initialization part, and its scope is limited to the loop if declared inside the for statement.
  - If the loop body consists of only one statement, the curly braces `{}` can be omitted.
