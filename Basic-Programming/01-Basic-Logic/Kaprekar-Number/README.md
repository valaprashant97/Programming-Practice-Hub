
# Kaprekar Number

## Aim
To check whether a given number is a Kaprekar Number or not.

## Introduction
A Kaprekar Number is a non-negative integer whose square can be divided into two parts, and the sum of those two parts equals the original number.

For example:
- 45² = 2025
- Split into two parts: 20 and 25
- 20 + 25 = 45
- Therefore, 45 is a Kaprekar Number.

## Algorithm
1. Start.
2. Read a number.
3. Check whether the number is non-negative.
4. Calculate the square of the number.
5. Count the number of digits in the square.
6. Calculate the divisor using powers of 10 based on the digit count.
7. Split the square into two parts:
   - Right part = Square % Divisor
   - Left part = Square / Divisor
8. Add both parts.
9. If the sum equals the original number, it is a Kaprekar Number.
10. Otherwise, it is not a Kaprekar Number.
11. Stop.

## Example

**Input:** `45`

**Working:**
- Square = 45 × 45 = 2025
- Left part = 20
- Right part = 25
- Sum = 20 + 25 = 45

**Output:** `The Number is Kaprekar!`

## Time Complexity
- O(log n)

## Space Complexity
- O(1)

## Conclusion
A Kaprekar Number is identified by squaring the given number, splitting the square into two parts, and checking whether their sum equals the original number.
