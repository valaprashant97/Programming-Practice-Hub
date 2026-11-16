
# Automorphic Number

## Aim
To check whether a given number is an Automorphic Number or not.

## Introduction
An Automorphic Number is a number whose square ends with the same digits as the original number.

For example:
- 5² = 25 (Ends with 5)
- 6² = 36 (Ends with 6)
- 25² = 625 (Ends with 25)
- 76² = 5776 (Ends with 76)

Therefore, 5, 6, 25, and 76 are Automorphic Numbers.

## Algorithm
1. Start.
2. Read a number.
3. Check whether the number is non-negative.
4. Calculate the square of the number.
5. Initialize the divisor to 1.
6. Count the digits of the original number and multiply the divisor by 10 for each digit.
7. Find the last digits of the square using the divisor.
8. Compare the result with the original number.
9. If both are equal, it is an Automorphic Number.
10. Otherwise, it is not an Automorphic Number.
11. Stop.

## Example

**Input:** `76`

**Working:**
- Square = 76 × 76 = 5776
- Divisor = 100
- Last digits = 5776 % 100 = 76
- Compare 76 == 76

**Output:** `The Number is Automorphic!`

## Time Complexity
- O(log n)

## Space Complexity
- O(1)

## Conclusion
An Automorphic Number is identified by squaring the given number and checking whether the square ends with the same digits as the original number.
