# Odd and Even Number – Using Modulus and Bitwise AND

## 1. Odd and Even Using Modulus Operator (`%`)

### Aim
To write a C program to find whether a given number is Odd or Even using the modulus (`%`) operator.

### Concept
The modulus operator (`%`) returns the remainder after division.

- If a number is divisible by 2 and the remainder is 0, it is an **Even Number**.
- If the remainder is 1, it is an **Odd Number**.

### Logic
1. Accept a number from the user.
2. Divide the number by 2 using the modulus operator.
3. Check the remainder.
4. If the remainder is 0, print Even Number.
5. Otherwise, print Odd Number.

### Example

| Input | Output |
|---|---|
| 10 | Even Number |
| 7 | Odd Number |
| 15 | Odd Number |
| 20 | Even Number |

---

## 2. Odd and Even Without Using Modulus Operator (`%`)

### Aim
To write a C program to find whether a given number is Odd or Even without using the modulus (`%`) operator.

### Concept
We use the **Bitwise AND (`&`) operator** to check whether a number is Odd or Even.

The last bit of a binary number determines whether it is Odd or Even.

- If the last bit is `0`, the number is Even.
- If the last bit is `1`, the number is Odd.

### Logic
1. Accept a number from the user.
2. Perform Bitwise AND (`&`) between the number and 1.
3. If the result is 0, print Even Number.
4. Otherwise, print Odd Number.

### Example

| Number | Binary | AND with 1 | Result |
|---|---|---|---|
| 7 | 111 | 1 | Odd |
| 10 | 1010 | 0 | Even |
| 15 | 1111 | 1 | Odd |
| 20 | 10100 | 0 | Even |

---

## Difference Between Both Approaches

| Modulus (`%`) | Bitwise AND (`&`) |
|---|---|
| Uses modulus operator. | Uses bitwise AND operator. |
| Checks the remainder after division by 2. | Checks the last bit of the binary number. |
| Easy to understand for beginners. | Uses bit manipulation concepts. |
| `n % 2` | `n & 1` |

## Time and Space Complexity

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

## Conclusion

Both approaches are used to determine whether a given number is Odd or Even. The modulus approach checks the remainder, while the bitwise approach checks the last bit of the binary representation.