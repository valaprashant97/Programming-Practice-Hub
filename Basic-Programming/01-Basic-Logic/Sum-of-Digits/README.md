# Sum of Digits of a Given Number (Iterative and Recursive)

## 📌 Overview

The sum of digits of a number is calculated by adding all the individual digits of a given number.

For example, if the given number is `1234`, then:

**Sum = 1 + 2 + 3 + 4 = 10**

There are two common approaches to calculate the sum of digits:

1. **Iterative Approach:** Uses loops to extract and add each digit.
2. **Recursive Approach:** Uses a function that calls itself to calculate the sum of digits.

## 🧮 Mathematical Logic

To calculate the sum of digits:

- Extract the last digit using the modulus operation.
- Add the extracted digit to the sum.
- Remove the last digit using integer division.
- Repeat until the number becomes zero.

## 1. Iterative Approach

The iterative approach uses a loop to repeatedly extract the last digit and add it to the sum.

**Working Principle:**
- Initialize the sum to zero.
- Extract the last digit of the number.
- Add the digit to the sum.
- Remove the last digit.
- Continue until the number becomes zero.

**Example:**

For `1234`:

- 1234 → Extract 4
- 123 → Extract 3
- 12 → Extract 2
- 1 → Extract 1

**Result = 4 + 3 + 2 + 1 = 10**

## 2. Recursive Approach

The recursive approach calculates the sum of digits by repeatedly calling the same function with a smaller number.

**Mathematical Formula:**

**Sum(n) = (n % 10) + Sum(n / 10)**

**Base Condition:**

When `n = 0`, the function returns `0`.

**Working Principle:**
- Extract the last digit using the modulus operation.
- Add it to the result of the recursive function call.
- Pass the remaining number by removing its last digit.
- Stop when the number becomes zero.

### 🔄 Example: Sum of Digits of 1234

```text
sumOfDigits(1234)
= 4 + sumOfDigits(123)
= 4 + 3 + sumOfDigits(12)
= 4 + 3 + 2 + sumOfDigits(1)
= 4 + 3 + 2 + 1 + sumOfDigits(0)
= 4 + 3 + 2 + 1 + 0
= 10
```

## ⚙️ Important Concepts

- **Modulus Operator (%):** Extracts the last digit.
- **Integer Division (/):** Removes the last digit.
- **Iteration:** Repeats statements using loops.
- **Recursion:** A function calls itself.
- **Base Condition:** Stops recursive function calls.

## ⏱️ Complexity Analysis

Let `d` represent the number of digits in the given number.

| Approach | Time Complexity | Space Complexity |
|---|---|---|
| Iterative | O(d) | O(1) |
| Recursive | O(d) | O(d) |