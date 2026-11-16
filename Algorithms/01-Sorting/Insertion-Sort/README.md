# Insertion Sort

## Aim
To sort an array of elements in ascending order using the Insertion Sort algorithm.

## Introduction
Insertion Sort is a simple sorting algorithm that builds a sorted array one element at a time. It takes each element and inserts it into its correct position in the already sorted part of the array.

## Algorithm
1. Start from the second element of the array.
2. Store the current element in a variable called `key`.
3. Compare the key with the elements before it.
4. Shift elements greater than the key one position to the right.
5. Insert the key into its correct position.
6. Repeat until all elements are sorted.

## Example

**Input:** `5, 3, 8, 2, 1`

**Pass 1:** `3, 5, 8, 2, 1`

**Pass 2:** `3, 5, 8, 2, 1`

**Pass 3:** `2, 3, 5, 8, 1`

**Pass 4:** `1, 2, 3, 5, 8`

**Output:** `1, 2, 3, 5, 8`

## Advantages
- Easy to understand and implement.
- Efficient for small datasets.
- Works well when the array is already or nearly sorted.
- Sorts elements in place without requiring extra memory.

## Disadvantages
- Inefficient for large datasets.
- Has quadratic time complexity in average and worst cases.
- May require many shifts when elements are in reverse order.

## Applications
- Sorting small arrays or lists.
- Sorting data that is already nearly sorted.
- Useful when new elements are added to an already sorted list.
- Often used as a part of more advanced sorting algorithms.

## Time Complexity
- Best Case: O(n)
- Average Case: O(n²)
- Worst Case: O(n²)

## Space Complexity
- O(1)

## Conclusion
Insertion Sort sorts an array by taking one element at a time and inserting it into its correct position in the sorted portion of the array.
