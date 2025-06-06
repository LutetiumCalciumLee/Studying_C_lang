# Chapter 7 . Loop Control in C (while, do-while, break, continue, goto, return)

## 1. **while Loop**
- The `while` loop repeatedly executes a block of code as long as a specified condition remains true.
- Before each iteration, the condition is evaluated. If it is true, the loop body runs; if false, the loop exits.
- This structure is useful when the number of iterations is not known in advance and depends on dynamic conditions.
- Proper increment or update of the loop variable inside the loop is essential to avoid infinite loops.

## 2. **do-while Loop**
- The `do-while` loop is similar to the `while` loop but guarantees that the loop body is executed at least once.
- The loop’s body runs first, and the condition is checked after the execution. If the condition is true, the loop repeats; otherwise, it exits.
- This is useful for menu-driven programs or when user input must be processed at least once regardless of the condition.

## 3. **for Loop Comparison**
- The `for` loop is typically used when the number of iterations is known beforehand.
- You can convert a `for` loop to a `while` loop by moving the initialization before the loop and the increment inside the loop body.

## 4. **Infinite Loops**
- Both `while` and `for` loops can be used to create infinite loops by using conditions that are always true (e.g., `while(1)` or `for(;;)`).
- Infinite loops are often used in programs that require continuous user interaction until a break condition is met.

## 5. **break Statement**
- The `break` statement is used to exit a loop immediately, regardless of the condition.
- It is commonly used with `if` statements inside loops to terminate the loop when a specific condition is met.
- In `switch-case` statements, `break` ends the current case block.

## 6. **continue Statement**
- The `continue` statement skips the rest of the code in the current loop iteration and proceeds to the next iteration.
- It is often used to skip over certain values or conditions within a loop without terminating the entire loop.

## 7. **goto Statement**
- The `goto` statement allows for an unconditional jump to a labeled statement within the same function.
- While it can be used for breaking out of deeply nested loops or for error handling, its use is discouraged as it can make code harder to read and maintain.

## 8. **return Statement**
- The `return` statement ends the execution of a function and returns control to the calling function.
- In the `main()` function, `return 0;` typically signals successful program completion.
