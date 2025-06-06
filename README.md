# Chapter 2 . Writing a Simple C Program

**1. Program Creation Steps**
- Create a new project in Visual Studio:  
  [Create New Project] → [C++] → [Windows Desktop Wizard] → Set project name and location → Select 'Empty Project'
- After project creation, add a new C file (.c) to the [Source Files] folder

**2. Coding the Program**
- Example: Write code to perform addition, subtraction, multiplication, and division on two numbers (100 and 50)
- Declare variables a, b, and result, and print each operation’s result using printf

**3. Build (Compile/Link)**
- Select [Build] → [Build Solution]  
  If there are no errors, the build succeeds; if there are errors, fix the source and rebuild

**4. Run the Program**
- Press [Ctrl]+[F5] to run the program  
  The result is displayed, and pressing any key closes the window

**5. Variables vs. Containers**
- Variables are storage spaces that retain values during program execution

---

## Introduction to scanf() Function

**1. Using Input Functions**
- Use scanf(), or the more secure scanf_s() recommended in Visual Studio  
  (scanf_s is only supported in Visual C++)

**2. Performing Operations with User Input**
- Example: Use scanf to input two numbers and print their sum  
- Use printf to display prompts so the user knows what to enter
