{
# C++ Program: Data Types and Storage Classes Demonstration

## Description

This program is a combined demonstration of:
1. Input/output of various **primitive data types** and their memory sizes in C++.
2. Usage of different **storage classes** (`auto`, `register`, `static`, `extern`) and how they behave at runtime.

It is intended as a comprehensive assignment submission covering both basic data handling and memory/storage behavior in C++.

---

## 🔢 Part 1: Data Types and Sizes

The program accepts user input for the following data types:

- `char`  
- `int`  
- `float`  
- `double`  
- `bool`  
- `long`  
- `long long`

Each input is displayed along with its memory size using the `sizeof()` operator.

### 📘 Theory

- **Data Types** determine the type and size of data a variable can hold.
- **`sizeof()`** returns the memory (in bytes) allocated for the data type on the given system.
- Memory size can vary slightly depending on system architecture and compiler.

---

## 🗃️ Part 2: Storage Classes

The program demonstrates the behavior of the following C++ storage classes:

### ✅ `auto`
- Default for local variables.
- Automatically determines type based on initializer in modern C++ (though here used in its classic sense as a regular local variable).

### ✅ `register`
- Suggests storing the variable in a CPU register for faster access.
- Cannot take the address of a register variable.
- Treated as a hint — compilers may ignore it.

### ✅ `static`
- Retains its value across multiple function calls.
- Memory is allocated only once.
- Used inside `showStatic()` function to demonstrate that its value persists.

### ✅ `extern`
- Declares a global variable accessible across multiple files.
- Demonstrated with a global variable `externVar` used inside `main()`.

---
## Submission Info

**Course**: ENTC 2024-2028 
**Submitted By**: Dewashish Hemant Lambore 
**PRN**: 24070123036  
**Semester**: III 
