# Chapter 11 . Input and Output in C

C provides a rich set of functions for handling input and output operations, both for interacting with users (keyboard/screen) and for working with files. All standard I/O functions are defined in the `` header.

## Standard Input and Output

- **Standard Input (stdin):** Usually the keyboard.
- **Standard Output (stdout):** Usually the screen.
- **Standard Error (stderr):** Used for error messages, also displayed on the screen.

These are treated as files in C, so input/output operations use the same mechanisms as file operations.

## Types of Input and Output Functions

### Unformatted I/O Functions
- **Character I/O:**  
  - `getchar()` reads a single character from stdin.
  - `putchar()` writes a single character to stdout.
- **String I/O:**  
  - `gets()` reads a line from stdin into a string (deprecated due to safety issues).
  - `puts()` writes a string to stdout.

### Formatted I/O Functions
- **`scanf()`**: Reads formatted input from stdin. Uses format specifiers like `%d`, `%f`, `%s` to read integers, floats, strings, etc.
- **`printf()`**: Writes formatted output to stdout. Uses the same format specifiers to display data in a structured way.

### Safe Alternatives
- **`fgets()`**: A safer alternative to `gets()`, reads a line from stdin with bounds checking.

## Format Specifiers

Format specifiers are used in `scanf()` and `printf()` to indicate the type of data being read or written. Common specifiers include:
- `%d` for integers
- `%f` for floats
- `%c` for characters
- `%s` for strings
- `%lf` for doubles
- `%x` for hexadecimal
- `%o` for octal
- `%p` for pointers

Modifiers can be used for width, precision, and alignment.

## File Input and Output

C treats files as streams of bytes, and all file operations are performed using pointers of type `FILE *`. Key functions include:
- **Opening/Closing Files:**  
  - `fopen()` opens a file for reading, writing, or appending.
  - `fclose()` closes a file.
- **Reading/Writing Files:**  
  - `fgetc()` and `fputc()` read/write single characters.
  - `fgets()` and `fputs()` read/write strings.
  - `fread()` and `fwrite()` read/write blocks of data (often used for binary files).
  - `fprintf()` and `fscanf()` perform formatted I/O with files, similar to `printf()` and `scanf()`.

## Practical Notes

- Always check the result of file operations (e.g., `fopen()`) to avoid errors.
- Use `fgets()` instead of `gets()` for safer string input.
- Understand the difference between formatted and unformatted I/O, and choose the appropriate function for your needs.
- All I/O in C is ultimately stream-based, which makes it flexible but requires careful handling of data types and buffers.
