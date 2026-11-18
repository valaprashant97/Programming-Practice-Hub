
# Bucket Sort

## Aim
To sort an array of non-negative integers in ascending order using the Bucket Sort algorithm.

## Introduction
Bucket Sort is a sorting algorithm that distributes elements into different buckets, sorts or groups them individually, and then combines them to produce a sorted array.

This implementation uses a counting-based bucket approach, where each bucket represents an integer value.

## Algorithm
1. Start.
2. Read the array elements.
3. Find the maximum element in the array.
4. Create buckets from 0 to the maximum element.
5. Initialize all buckets with zero.
6. Traverse the array and increment the corresponding bucket count.
7. Traverse the buckets in ascending order.
8. Insert each value into the original array according to its bucket count.
9. Display the sorted array.
10. Stop.

## Example

**Input:** `[5, 3, 8, 2, 1]`

**Step 1: Create Buckets**

```text
Value:   0  1  2  3  4  5  6  7  8
Count:   0  1  1  1  0  1  0  0  1
```

**Step 2: Sort Using Bucket Counts**

```text
[1, 2, 3, 5, 8]
```

**Output:** `[1, 2, 3, 5, 8]`

## Advantages
- Simple to understand and implement.
- Efficient for small integer ranges.
- Handles duplicate values using bucket counts.
- Does not require comparison-based sorting.

## Disadvantages
- Requires additional memory for buckets.
- Not suitable for very large integer ranges.
- This implementation supports only non-negative integers.

## Applications
- Sorting small non-negative integer values.
- Sorting data with a limited range.
- Counting occurrences of elements.
- Practicing array indexing and memory allocation.

## Time Complexity
- O(n + k), where `n` is the number of elements and `k` is the maximum value plus one.

## Space Complexity
- O(k)

## Conclusion
Bucket Sort arranges elements in ascending order by counting the occurrences of each value and rebuilding the array from the bucket counts.
