{
# C++ Program: Conditional Statements Demonstration

## Description

This program demonstrates the use of `if-else` conditional statements in C++ through three distinct problems:

1. Determining whether a number is positive, negative, or zero.
2. Converting student marks into letter grades.
3. Identifying the position of a 2D point based on its Cartesian coordinates.

Each segment is handled sequentially within the same `main()` function.

---

## 1️⃣ Part 1: Number Sign Checker

### Input:
- An integer value.

### Output:
- "The number is positive."
- "The number is negative."
- "The number is zero."

### 🔍 Theory:
Conditional statements allow decision-making in code. Here, we check whether the number is:
- Greater than 0 → Positive
- Less than 0 → Negative
- Equal to 0 → Zero

---

## 2️⃣ Part 2: Marks to Grade Converter

### Input:
- An integer value (0–100) representing student marks.

### Output:
- Corresponding grade as per the mark:
  - `90–100` → Grade A
  - `80–89`  → Grade B
  - `70–79`  → Grade C
  - `60–69`  → Grade D
  - `<60`    → Grade F

### 📘 Theory:
Grading systems use threshold values. The program uses a **nested if-else ladder** to compare the input marks and print the appropriate grade.

---

## 3️⃣ Part 3: Coordinate Quadrant Checker

### Input:
- `x` and `y` coordinates (integers).

### Output:
- Quadrant information:
  - Quadrant I → `x > 0`, `y > 0`
  - Quadrant II → `x < 0`, `y > 0`
  - Quadrant III → `x < 0`, `y < 0`
  - Quadrant IV → `x > 0`, `y < 0`
  - On X-axis → `y == 0`, `x ≠ 0`
  - On Y-axis → `x == 0`, `y ≠ 0`
  - Origin → `x == 0`, `y == 0`

### 📘 Theory:
In 2D coordinate geometry, the Cartesian plane is divided into 4 quadrants based on the signs of `x` and `y`. This logic helps locate any point's position relative to axes.

---
## Submission Info

**Course**: ENTC 2024-2028 
**Submitted By**: Dewashish Hemant Lambore 
**PRN**: 24070123036  
**Semester**: III 

