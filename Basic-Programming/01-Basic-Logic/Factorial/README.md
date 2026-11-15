# Factorial of a Number Using Recursion

## 📌 Overview
The factorial of a number is a mathematical operation that calculates the product of all positive integers less than or equal to a given non-negative integer.

It is represented by an exclamation mark (`!`).

Using **recursion**, the factorial is calculated by a function that calls itself repeatedly with a smaller number until it reaches the base condition.

## 🧮 Mathematical Formula

The factorial of a number `n` is defined as:

**n! = n × (n - 1) × (n - 2) × ... × 3 × 2 × 1**

Using recursion:

**n! = n × (n - 1)!**

## 📖 Examples

- **0! = 1**
- **1! = 1**
- **2! = 2 × 1 = 2**
- **3! = 3 × 2 × 1 = 6**
- **4! = 4 × 3 × 2 × 1 = 24**
- **5! = 5 × 4 × 3 × 2 × 1 = 120**

## ⚙️ Important Properties

1. The factorial is defined for non-negative integers.
2. The factorial of zero is always 1.
3. The factorial of one is always 1.
4. Factorial values grow very quickly as the number increases.
5. Factorials are always positive integers.

## 🔄 Recursion and Base Condition

**Base Condition:**
- When `n = 0` or `n = 1`, the function returns `1`.
- This condition stops further recursive function calls.

**Recursive Condition:**
- The function calls itself with `n - 1`.
- Each recursive call reduces the value until the base condition is reached.

### Example: Factorial of 5

```text
factorial(5)
    5 × factorial(4)
    5 × 4 × factorial(3)
    5 × 4 × 3 × factorial(2)
    5 × 4 × 3 × 2 × factorial(1)
    5 × 4 × 3 × 2 × 1

Result = 120
```

## 🎯 Applications of Factorial

- Permutations and combinations.
- Probability calculations.
- Mathematical and statistical problems.
- Binomial theorem.
- Counting arrangements and possibilities.
- Combinatorics and discrete mathematics.

## ⏱️ Complexity Analysis

- **Time Complexity:** O(n) – The function makes n recursive calls.
- **Space Complexity:** O(n) – Recursive calls occupy memory in the call stack.
