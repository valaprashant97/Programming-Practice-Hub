
# Happy Number

## Aim
To check whether a given number is a Happy Number or not.

## Introduction
A Happy Number is a number in which repeatedly replacing the number with the sum of the squares of its digits eventually results in 1.

For example:
- Number = 19
- 1² + 9² = 82
- 8² + 2² = 68
- 6² + 8² = 100
- 1² + 0² + 0² = 1

Therefore, 19 is a Happy Number.

## Algorithm
1. Start.
2. Read a number.
3. Check whether the number is positive.
4. Store the number in a temporary variable.
5. Calculate the sum of the squares of its digits.
6. Replace the temporary number with the calculated sum.
7. Repeat until the number becomes 1 or 4.
8. If the number becomes 1, it is a Happy Number.
9. Otherwise, it is not a Happy Number.
10. Stop.

## Example

**Input:** `19`

**Working:**
- 1² + 9² = 82
- 8² + 2² = 68
- 6² + 8² = 100
- 1² + 0² + 0² = 1

**Output:** `The Number is Happy!`

## Time Complexity
- O(log n) per transformation.

## Space Complexity
- O(1)

## Conclusion
A Happy Number is identified by repeatedly calculating the sum of the squares of its digits. If the result eventually becomes 1, the given number is a Happy Number.
