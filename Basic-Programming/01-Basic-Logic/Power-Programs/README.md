# Power of a Number in C

## Aim
Write C programs to calculate the power of a number (\(a^b\)) using different methods.

## 1. Using Multiplication

Calculate power using the multiplication (`*`) operator inside a loop.

**Logic:**
1. Take base (`a`) and exponent (`b`) from the user.
2. Initialize `result = 1`.
3. Run a loop from 1 to `b`.
4. Multiply `result` by `a` in each iteration.
5. Display the result.

**Equation:**

`result = result * a`

## 2. Without Using Multiplication

Calculate power without using the multiplication (`*`) operator or the `pow()` function.

**Logic:**
1. Take base (`a`) and exponent (`b`) from the user.
2. Initialize `result = 1`.
3. Use nested loops to perform multiplication through repeated addition.
4. Update the result in each iteration.
5. Display the result.

**Equation:**

`a × b = a + a + ... (b times)`

## 3. Using Power Function

Calculate power using the built-in `pow()` function from the `math.h` library.

**Syntax:**

`pow(base, exponent)`

**Example:**

`pow(2, 3) = 8`


## Complexity
- **Using Multiplication:** O(b) time, O(1) space.
- **Without Multiplication:** Repeated addition; O(a × b) time for non-negative integer inputs, O(1) space.
- **Using Power Function:** Depends on the library implementation.

## Conclusion
This program demonstrates three different methods to calculate the power of a number in C: using multiplication, without using multiplication, and using the built-in `pow()` function.