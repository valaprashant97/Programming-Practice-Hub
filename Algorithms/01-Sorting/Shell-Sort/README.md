
# Shell Sort

## Aim
To sort an array of elements in ascending order using the Shell Sort algorithm.

## Introduction
Shell Sort is an improved version of Insertion Sort. It sorts elements by comparing values that are far apart using a gap.

The gap is gradually reduced until it becomes 1. Finally, a normal Insertion Sort operation is performed to complete the sorting.

## Algorithm
1. Start.
2. Read the size and elements of the array.
3. Initialize the gap as `size / 2`.
4. Compare elements separated by the current gap.
5. Swap or shift elements if they are not in the correct order.
6. Reduce the gap by dividing it by 2.
7. Repeat the process until the gap becomes 0.
8. Display the sorted array.
9. Stop.

## Example

**Input:** `[8, 3, 5, 1, 9]`

**Pass 1: Gap = 2**

```text
[5, 1, 8, 3, 9]
```

**Pass 2: Gap = 1**

```text
[1, 3, 5, 8, 9]
```

**Output:** `[1, 3, 5, 8, 9]`

## Advantages
- Faster than Insertion Sort for many datasets.
- Requires very little additional memory.
- Easy to implement.
- Works efficiently for medium-sized arrays.

## Disadvantages
- Not a stable sorting algorithm.
- Performance depends on the gap sequence.
- Worst-case time complexity can be O(n²).

## Applications
- Sorting medium-sized datasets.
- Sorting arrays when memory is limited.
- Embedded systems.
- Improving the performance of Insertion Sort.

## Time Complexity

| Case | Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | Depends on the gap sequence |
| Worst Case | O(n²) |

## Space Complexity
- O(1)

## Conclusion
Shell Sort improves Insertion Sort by comparing elements at different gaps. It gradually reduces the gap and finally sorts the array using a gap of 1.
