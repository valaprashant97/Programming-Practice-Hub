
# Heap Sort

## Aim
To sort an array of elements in ascending order using the Heap Sort algorithm.

## Introduction
Heap Sort is a comparison-based sorting algorithm that uses a Binary Heap data structure.

It works by first building a Max Heap, where the parent node is greater than or equal to its child nodes. Then, it repeatedly moves the largest element to the end of the array and rebuilds the heap.

## Algorithm
1. Start.
2. Read the size and elements of the array.
3. Build a Max Heap from the given array.
4. Swap the root element (largest element) with the last element.
5. Reduce the heap size by one.
6. Apply the Heapify operation to maintain the Max Heap property.
7. Repeat steps 4–6 until the heap contains only one element.
8. Display the sorted array.
9. Stop.

## Example

**Input:** `[5, 3, 8, 2, 1]`

**Step 1: Build Max Heap**

```text
        8
       / \
      3   5
     / \
    2   1
```

**Step 2: Extract the largest element repeatedly**

```text
[5, 3, 2, 1, 8]
[3, 1, 2, 5, 8]
[2, 1, 3, 5, 8]
[1, 2, 3, 5, 8]
```

**Output:** `[1, 2, 3, 5, 8]`

## Advantages
- Efficient for large datasets.
- Time complexity is O(n log n).
- Does not require an additional array.
- Performs sorting in place.

## Disadvantages
- Not a stable sorting algorithm.
- Generally slower than Quick Sort in practical applications.
- Heap implementation can be difficult to understand.

## Applications
- Sorting large datasets.
- Priority Queue implementation.
- Operating system scheduling.
- Finding the largest or smallest elements.

## Time Complexity

| Case | Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |

## Space Complexity
- O(log n) auxiliary space for this recursive implementation due to Heapify calls.

## Conclusion
Heap Sort is an efficient comparison-based sorting algorithm that uses a Max Heap to arrange elements in ascending order. It guarantees O(n log n) time complexity in all cases.
