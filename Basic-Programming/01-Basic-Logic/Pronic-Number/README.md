
# Pronic Number

## Aim
To check whether a given number is a Pronic Number or not.

## Introduction
A Pronic Number is a number that is the product of two consecutive non-negative integers.

In other words, a number is Pronic if it can be expressed as:

N = k × (k + 1)

For example:
- 2 = 1 × 2
- 6 = 2 × 3
- 12 = 3 × 4
- 20 = 4 × 5

Therefore, 2, 6, 12, and 20 are Pronic Numbers.

## Algorithm
1. Start.
2. Read a number.
3. Check whether the number is non-negative.
4. Initialize a loop variable `i = 0`.
5. Calculate `i × (i + 1)`.
6. If the result equals the given number, it is a Pronic Number.
7. Otherwise, increment `i` and repeat while the product is less than or equal to the given number.
8. If no matching product is found, it is not a Pronic Number.
9. Display the result.
10. Stop.

## Example

**Input:** `6`

**Working:**
- 0 × 1 = 0
- 1 × 2 = 2
- 2 × 3 = 6

Since 2 × 3 = 6, the given number is a Pronic Number.

**Output:** `The Number is Pronic!`

## Time Complexity
- O(√n)

## Space Complexity
- O(1)

## Conclusion
A Pronic Number is identified by checking whether it can be expressed as the product of two consecutive non-negative integers.
