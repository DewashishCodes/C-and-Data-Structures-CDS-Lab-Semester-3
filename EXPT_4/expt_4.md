{
# C++ Program: Bitwise Operations Demonstration

## 🎯 Objective

To demonstrate the use of **bitwise operators** in C++ using two integers. This includes:
- AND `&`
- OR `|`
- XOR `^`
- NOT `~`
- Left Shift `<<`
- Right Shift `>>`

---

## 🧠 Theory

Bitwise operators work on the **binary representation** of integers (0s and 1s). Each integer is stored as a sequence of bits, and bitwise operations allow direct manipulation of these bits.

These are widely used in:
- Low-level programming (microcontrollers, OS development)
- Cryptography
- Optimization
- Flag-based programming (bit masking)

---

## 📘 Operator Descriptions and Truth Tables

### 1. Bitwise AND (`a & b`)
**Sets bit to 1 only if both bits are 1.**

| a | b | a & b |
|---|---|--------|
| 0 | 0 |   0    |
| 0 | 1 |   0    |
| 1 | 0 |   0    |
| 1 | 1 |   1    |

---

### 2. Bitwise OR (`a | b`)
**Sets bit to 1 if at least one bit is 1.**

| a | b | a \| b |
|---|---|--------|
| 0 | 0 |   0    |
| 0 | 1 |   1    |
| 1 | 0 |   1    |
| 1 | 1 |   1    |

---

### 3. Bitwise XOR (`a ^ b`)
**Sets bit to 1 if the bits are different.**

| a | b | a ^ b |
|---|---|--------|
| 0 | 0 |   0    |
| 0 | 1 |   1    |
| 1 | 0 |   1    |
| 1 | 1 |   0    |

---

### 4. Bitwise NOT (`~a`)
**Inverts all bits.**

> ⚠️ Note: `~a` returns the **two’s complement** of the number, effectively `-(a+1)`.

Example:  
If `a = 5` → Binary: `00000101`  
Then `~a` = `11111010` → -6 in 2's complement.

---

### 5. Left Shift (`a << n`)
**Shifts all bits to the left by `n` positions.**  
Effectively multiplies the number by `2^n`.

Example:  
`a = 5` → `00000101`  
`a << 1` → `00001010` → `10`

---

### 6. Right Shift (`b >> n`)
**Shifts all bits to the right by `n` positions.**  
Effectively divides the number by `2^n`.

Example:  
`b = 8` → `00001000`  
`b >> 1` → `00000100` → `4`

---
## Submission Info

**Course**: ENTC 2024-2028 
**Submitted By**: Dewashish Hemant Lambore 
**PRN**: 24070123036  
**Semester**: III 


