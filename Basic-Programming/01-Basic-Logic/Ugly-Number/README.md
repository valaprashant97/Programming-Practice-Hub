
# Ugly Number

## Aim
To check whether a given number is an Ugly Number or not.

## Introduction
An Ugly Number is a positive number whose only prime factors are 2, 3, and 5.

For example:
- 6 = 2 × 3 (Ugly Number)
- 10 = 2 × 5 (Ugly Number)
- 15 = 3 × 5 (Ugly Number)
- 14 = 2 × 7 (Not an Ugly Number)
- 1 is also an Ugly Number.

## Algorithm
1. Start.
2. Read a number.
3. Check whether the number is positive.
4. Divide the number repeatedly by 2 while it is divisible by 2.
5. Divide the number repeatedly by 3 while it is divisible by 3.
6. Divide the number repeatedly by 5 while it is divisible by 5.
7. If the final number is 1, it is an Ugly Number.
8. Otherwise, it is not an Ugly Number.
9. Stop.

## Example

**Input:** `30`

**Working:**
- 30 ÷ 2 = 15
- 15 ÷ 3 = 5
- 5 ÷ 5 = 1

**Output:** `Ugly Number`

## Time Complexity
- O(log n)

## Space Complexity
- O(1)

## Conclusion
An Ugly Number is identified by repeatedly dividing it by 2, 3, and 5. If the final result is 1, the given number is an Ugly Number.