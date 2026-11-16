# Quotient and Remainder Without Division and Modulus Operators

## Aim
To find the quotient and remainder of two numbers without using the division (`/`) and modulus (`%`) operators. The bigger number is divided by the smaller number.

## Introduction
The quotient is the number of times the smaller number can be subtracted from the bigger number. The remainder is the value left after repeated subtraction.

## Algorithm
1. Start.
2. Read two numbers.
3. Check that neither number is zero.
4. Identify the bigger number as the dividend and the smaller number as the divisor.
5. Set `quotient = 0` and `remainder = dividend`.
6. While `remainder` is greater than or equal to `divisor`:
   - Subtract `divisor` from `remainder`.
   - Increment `quotient` by 1.
7. Display the quotient and remainder.
8. Stop.

## Example

**Input:** `20` and `6`

**Working:**
- 20 - 6 = 14
- 14 - 6 = 8
- 8 - 6 = 2

Now, `2` is smaller than `6`, so subtraction stops.

**Output:**
- Quotient: `3`
- Remainder: `2`

## Time Complexity
- O(dividend / divisor), for positive non-zero inputs.

## Space Complexity
- O(1)
