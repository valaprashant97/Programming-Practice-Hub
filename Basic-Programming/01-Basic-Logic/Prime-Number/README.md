# Prime Number Program in C

## Aim
To write a C program to check whether a given number is Prime or Not Prime.

## Concept
A **Prime Number** is a natural number greater than 1 that has exactly two factors:

1. 1
2. The number itself.

If a number has more than two factors, it is called a **Composite Number**.

### Examples

- 2 → Prime Number
- 3 → Prime Number
- 5 → Prime Number
- 7 → Prime Number
- 10 → Not a Prime Number
- 12 → Not a Prime Number

## Logic
1. Accept a number from the user.
2. Initialize a counter variable with 0.
3. Run a loop from 1 to the given number.
4. Check whether the number is completely divisible by the loop variable using the modulus (`%`) operator.
5. If the remainder is 0, increment the counter.
6. After the loop:
   - If the counter is equal to 2, the number is Prime.
   - Otherwise, the number is Not Prime.

## Time and Space Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Conclusion
The program checks whether a given number is Prime or Not Prime by counting its total factors. A prime number must have exactly two factors: 1 and itself.