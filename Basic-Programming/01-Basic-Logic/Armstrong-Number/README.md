# Armstrong Number in C

## Aim
Write a C program to check whether a given number is an Armstrong number or not.

## What is an Armstrong Number?

An **Armstrong number** is a number whose sum of its digits, each raised to the power of the total number of digits, is equal to the original number.

### Examples

- **153** = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 → Armstrong number
- **370** = 3³ + 7³ + 0³ = 27 + 343 + 0 = 370 → Armstrong number
- **123** = 1³ + 2³ + 3³ = 1 + 8 + 27 = 36 → Not an Armstrong number

## Program Logic

1. Ask the user to enter a number.
2. Store the original number in a separate variable.
3. Count the total number of digits.
4. Extract each digit using the modulus (`%`) operator.
5. Raise each digit to the power of the total number of digits.
6. Add the calculated values.
7. Compare the sum with the original number.
8. If both are equal, the number is an Armstrong number; otherwise, it is not.

## Concepts Used

- `while` loop
- `if-else` statement
- Modulus (`%`) operator
- Division (`/`) operator
- Variables and arithmetic operations

## Time and Space Complexity

- **Time Complexity:** O(d²) using repeated multiplication to calculate digit powers, where d is the number of digits.
- **Space Complexity:** O(1), because only a fixed number of variables are used.

## Conclusion

This program checks whether a given number is an Armstrong number by calculating the sum of each digit raised to the power of the total number of digits and comparing the result with the original number.