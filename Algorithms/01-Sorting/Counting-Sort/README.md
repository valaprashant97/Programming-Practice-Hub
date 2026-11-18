
# Counting Sort

## Aim
To sort an array of non-negative integers in ascending order using the Counting Sort algorithm.

## Introduction
Counting Sort is a non-comparison-based sorting algorithm. It works by counting the occurrences of each element and using those counts to arrange the elements in sorted order.

## Algorithm
1. Start.
2. Read the size and elements of the array.
3. Find the maximum element in the array.
4. Create a count array of size `max + 1` and initialize it with zero.
5. Traverse the original array and count the occurrences of each element.
6. Traverse the count array from index 0 to maximum value.
7. Insert each element into the original array according to its frequency.
8. Display the sorted array.
9. Stop.

## Example

**Input:** `[5, 3, 8, 2, 1]`

**Step 1: Count the occurrences**

| Element | Frequency |
|---|---:|
| 1 | 1 |
| 2 | 1 |
| 3 | 1 |
| 5 | 1 |
| 8 | 1 |

**Step 2: Reconstruct the sorted array**

```text
[1, 2, 3, 5, 8]
```

**Output:** `[1, 2, 3, 5, 8]`

## Advantages
- Simple and easy to implement.
- Efficient for a limited range of integer values.
- Does not use comparisons between elements.
- Handles duplicate elements.

## Disadvantages
- Requires additional memory for the count array.
- Not suitable for very large value ranges.
- This implementation supports only non-negative integers.

## Applications
- Sorting integers within a limited range.
- Counting the frequency of elements.
- Sorting data with many duplicate values.
- As a subroutine in Radix Sort.

## Time Complexity
- Best Case: O(n + k)
- Average Case: O(n + k)
- Worst Case: O(n + k)

## Space Complexity
- O(k)

Where:
- `n` = Number of elements in the array.
- `k` = Maximum element + 1.

## Conclusion
Counting Sort efficiently sorts non-negative integers by counting the frequency of each element and reconstructing the array in ascending order.
