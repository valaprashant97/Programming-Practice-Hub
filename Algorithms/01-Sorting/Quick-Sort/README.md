
# Quick Sort

## Aim
To sort an array of elements in ascending order using the Quick Sort algorithm.

## Introduction
Quick Sort is a Divide and Conquer sorting algorithm. It selects an element called a pivot and partitions the array into two parts. Elements smaller than the pivot are placed on the left, and larger elements are placed on the right. Both parts are then sorted recursively.

## Algorithm
1. Start.
2. Read the array elements.
3. Select the last element as the pivot.
4. Partition the array around the pivot.
5. Place smaller elements before the pivot and larger elements after it.
6. Find the correct position of the pivot.
7. Recursively apply Quick Sort to the left subarray.
8. Recursively apply Quick Sort to the right subarray.
9. Display the sorted array.
10. Stop.

## Example

**Input:** `[5, 3, 8, 2, 1]`

**Step 1: Select Pivot**
- Pivot = `1`

**Step 2: Partition the Array**
```text
[5, 3, 8, 2, 1]
          Pivot = 1

[1, 3, 8, 2, 5]
```

**Step 3: Sort the Right Subarray**
- Pivot = `5`
- Array = `[1, 3, 2, 5, 8]`

**Step 4: Sort the Remaining Subarray**
- Pivot = `2`
- Array = `[1, 2, 3, 5, 8]`

**Output:** `[1, 2, 3, 5, 8]`

## Advantages
- Fast for average-sized datasets.
- Uses in-place partitioning.
- Efficient for large arrays in typical cases.

## Disadvantages
- Worst-case performance is slow.
- Recursive calls require stack memory.
- Performance depends on pivot selection.

## Applications
- Sorting large arrays.
- General-purpose sorting.
- Situations where in-place sorting is preferred.

## Time Complexity
- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n²)

## Space Complexity
- Average Case: O(log n)
- Worst Case: O(n)

## Conclusion
Quick Sort sorts an array using the Divide and Conquer technique by selecting a pivot, partitioning the array, and recursively sorting the subarrays.
