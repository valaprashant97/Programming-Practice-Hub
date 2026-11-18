
# Radix Sort

## Aim
To sort an array of non-negative integers in ascending order using the Radix Sort algorithm.

## Introduction
Radix Sort is a non-comparison-based sorting algorithm that sorts numbers digit by digit.

It starts from the Least Significant Digit (LSD) and moves towards the Most Significant Digit (MSD). Counting Sort is used to sort the elements at each digit position.

## Algorithm
1. Start.
2. Read the size and elements of the array.
3. Find the maximum element in the array.
4. Start sorting from the unit digit (1's place).
5. Apply Counting Sort to arrange elements according to the current digit.
6. Move to the next digit position (10's, 100's, 1000's, etc.).
7. Repeat until all digit positions of the maximum element are processed.
8. Display the sorted array.
9. Stop.

## Example

**Input:** `[170, 45, 75, 90, 802]`

**Pass 1: Sort by Unit Digit (1's place)**

```text
170, 90, 802, 45, 75
```

**Pass 2: Sort by Tens Digit (10's place)**

```text
802, 45, 170, 75, 90
```

**Pass 3: Sort by Hundreds Digit (100's place)**

```text
45, 75, 90, 170, 802
```

**Output:** `[45, 75, 90, 170, 802]`

## Advantages
- Does not compare elements directly.
- Efficient for numbers with a limited number of digits.
- Can perform well on large datasets.
- Uses Counting Sort as a stable sorting technique for each digit.

## Disadvantages
- Requires additional memory.
- This implementation supports only non-negative integers.
- Performance depends on the number of digits.
- Not suitable for every type of data.

## Applications
- Sorting integers and numerical data.
- Sorting identification numbers.
- Sorting phone numbers.
- Sorting large datasets with fixed-length keys.

## Time Complexity

| Case | Complexity |
|---|---|
| Best Case | O(d × n) |
| Average Case | O(d × n) |
| Worst Case | O(d × n) |

## Space Complexity
- O(n + 10), which simplifies to O(n).

Where:
- `n` = Number of elements.
- `d` = Number of digits in the maximum element.
- `10` = Number of possible decimal digits (0–9).

## Conclusion
Radix Sort is an efficient non-comparison-based sorting algorithm that arranges numbers digit by digit using a stable Counting Sort operation.
