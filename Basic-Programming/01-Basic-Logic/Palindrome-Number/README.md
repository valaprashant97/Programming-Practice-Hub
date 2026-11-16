
# Palindrome Number

## Aim
To check whether a given number is a Palindrome Number or not.

## Introduction
A Palindrome Number is a number that remains the same when its digits are reversed.

For example:
- 121 → Reverse = 121 (Palindrome)
- 1331 → Reverse = 1331 (Palindrome)
- 555 → Reverse = 555 (Palindrome)
- 123 → Reverse = 321 (Not Palindrome)

## Algorithm
1. Start.
2. Read a number.
3. Check whether the number is non-negative.
4. Store the original number in a temporary variable.
5. Initialize `reverse = 0`.
6. Extract the last digit using `num % 10`.
7. Add the extracted digit to the reversed number using `reverse = reverse * 10 + remainder`.
8. Remove the last digit using `num = num / 10`.
9. Repeat until the temporary number becomes 0.
10. Compare the reversed number with the original number.
11. If both are equal, it is a Palindrome Number.
12. Otherwise, it is not a Palindrome Number.
13. Stop.

## Example

**Input:** `121`

**Working:**
- Original Number = 121
- Reverse = 1
- Reverse = 12
- Reverse = 121

**Output:** `The Number is Palindrome!`

## Time Complexity
- O(log n)

## Space Complexity
- O(1)

## Conclusion
A Palindrome Number is identified by reversing its digits and comparing the reversed number with the original number. If both are equal, the given number is a Palindrome Number.
