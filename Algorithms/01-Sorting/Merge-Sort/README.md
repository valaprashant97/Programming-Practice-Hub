
# Merge Sort

## Aim
To sort an array of elements in ascending order using the Merge Sort algorithm.

## Introduction
Merge Sort is a divide-and-conquer sorting algorithm. It divides an array into smaller subarrays, sorts them individually, and then merges them to produce a sorted array.

## Algorithm
1. Start.
2. Divide the array into two halves.
3. Continue dividing each half until each subarray contains only one element.
4. Compare elements from the divided subarrays.
5. Merge the subarrays in sorted order.
6. Repeat the merging process until the entire array is sorted.
7. Display the sorted array.
8. Stop.

## Example

**Input:** `[38, 27, 43, 3, 9, 82, 10]`

**Step 1: Divide the Array**
```text
[38, 27, 43, 3, 9, 82, 10]

       /          \
[38, 27, 43, 3]  [9, 82, 10]

    /      \       /     \
[38, 27] [43, 3] [9, 82] [10]

[38] [27] [43] [3] [9] [82] [10]
```

**Step 2: Merge in Sorted Order**
```text
[27, 38] [3, 43] [9, 82] [10]

[3, 27, 38, 43] [9, 10, 82]

[3, 9, 10, 27, 38, 43, 82]
```

**Output:** `[3, 9, 10, 27, 38, 43, 82]`

## Advantages
- Efficient for large datasets.
- Provides consistent O(n log n) time complexity.
- Stable sorting algorithm.
- Suitable for sorting linked lists.

## Disadvantages
- Requires additional memory for merging.
- More complex to implement than simple sorting algorithms.
- Recursive calls may add overhead.

## Applications
- Sorting large datasets.
- Sorting linked lists.
- External sorting of large files.
- Sorting data when stable ordering is required.

## Time Complexity
- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n log n)

## Space Complexity
- O(n)

## Conclusion
Merge Sort sorts an array using the divide-and-conquer technique by repeatedly dividing the array into smaller parts and merging them in sorted order.
