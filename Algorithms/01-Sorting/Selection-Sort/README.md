# Selection Sort

## Aim
To sort an array of elements in ascending order using the Selection Sort algorithm.

## Introduction
Selection Sort is a simple sorting algorithm that repeatedly finds the smallest element from the unsorted part of an array and places it at the beginning.

## Algorithm
1. Start from the first element.
2. Assume the first unsorted element is the minimum.
3. Compare it with the remaining unsorted elements.
4. Find the smallest element.
5. Swap it with the first element of the unsorted part.
6. Repeat until the array is sorted.

## Example

**Input:** `64, 25, 12, 22, 11`

**Pass 1:** `11, 25, 12, 22, 64`

**Pass 2:** `11, 12, 25, 22, 64`

**Pass 3:** `11, 12, 22, 25, 64`

**Pass 4:** `11, 12, 22, 25, 64`

**Output:** `11, 12, 22, 25, 64`

## Advantages
- Easy to understand and implement.
- Performs fewer swaps compared to some simple sorting algorithms.
- Requires no extra memory for sorting.

## Disadvantages
- Slow for large datasets.
- Performs many comparisons even if the array is already sorted.
- Not suitable for large or frequently changing datasets.

## Applications
- Sorting small arrays or lists.
- Learning basic sorting concepts.
- Situations where minimizing the number of swaps is useful.

## Time Complexity
- Best Case: O(n²)
- Average Case: O(n²)
- Worst Case: O(n²)

## Space Complexity
- O(1)

## Conclusion
Selection Sort sorts an array by repeatedly selecting the smallest element from the unsorted part and placing it in its correct position.
