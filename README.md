# Chapter 12 . Input and Output in C

- C uses standard input/output functions defined in `` for communication with the user and files.
- **Standard input** is usually the keyboard; **standard output** is the screen.
- **Unformatted I/O** includes functions like `getchar()`/`putchar()` for single characters and `gets()`/`puts()` for strings (though `gets()` is unsafe; use `fgets()` instead).
- **Formatted I/O** uses `scanf()` for reading and `printf()` for writing data with format specifiers (e.g., `%d`, `%f`, `%s`).
- For file I/O, C provides functions like `fopen()`, `fclose()`, `fscanf()`, `fprintf()`, `fgets()`, and `fputs()` to read from and write to files.
- All I/O in C is stream-based, and careful use of functions and format specifiers ensures safe and correct data processing.
