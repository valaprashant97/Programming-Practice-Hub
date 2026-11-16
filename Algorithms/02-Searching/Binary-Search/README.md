# Binary Search Algorithm

## Aim
To implement the Binary Search algorithm using the iterative method to search for a given element in a sorted array.

## Introduction
Binary Search is an efficient searching algorithm used to find a specific element in a sorted array. It works by repeatedly dividing the search interval into two halves.

Instead of checking every element one by one, Binary Search compares the target element with the middle element of the array and eliminates half of the remaining search space in each iteration.

## Algorithm
1. Start the program.
2. Read the size of the array from the user.
3. Check whether the array size is valid.
4. Allocate memory dynamically for the array.
5. Accept array elements from the user in ascending order.
6. Read the key element to be searched.
7. Initialize three variables:
   - `l = 0` (Left index)
   - `r = size - 1` (Right index)
   - `mid` (Middle index)
8. Repeat the following steps while `l <= r`:
   - Calculate the middle index.
   - If the middle element is equal to the key, display that the element is found.
   - If the middle element is greater than the key, update the right index to `mid - 1`.
   - If the middle element is smaller than the key, update the left index to `mid + 1`.
9. If the left index becomes greater than the right index, display that the element is not found.
10. Release the dynamically allocated memory.
11. Stop the program.

## Example

**Given:**

- Array: `[10, 20, 30, 40, 50, 60, 70]`
- Key to Search: `50`

**Step 1: Initialization**

- Left (`l`) = 0
- Right (`r`) = 6

**Step 2: First Iteration**

Calculate the middle index:

`mid = (l + r) / 2`

`mid = (0 + 6) / 2 = 3`

- Middle element = 40
- Key = 50
- Since 40 is smaller than 50, search the right half.

Update:

`l = mid + 1 = 4`

**Step 3: Second Iteration**

- Left (`l`) = 4
- Right (`r`) = 6

Calculate:

`mid = (4 + 6) / 2 = 5`

- Middle element = 60
- Key = 50
- Since 60 is greater than 50, search the left half.

Update:

`r = mid - 1 = 4`

**Step 4: Third Iteration**

- Left (`l`) = 4
- Right (`r`) = 4

Calculate:

`mid = (4 + 4) / 2 = 4`

- Middle element = 50
- Key = 50
- Both are equal, so the element is found.

<badge color="success">Element Found</badge>

**Final Output:**

```text
Element Found at Index 4
```

### Iteration Summary

| Iteration | Left (l) | Right (r) | Mid | arr[mid] | Result |
|---|---:|---:|---:|---:|---|
| 1 | 0 | 6 | 3 | 40 | Search Right |
| 2 | 4 | 6 | 5 | 60 | Search Left |
| 3 | 4 | 4 | 4 | 50 | Found |

**Conclusion:** The key element 50 is successfully found at index 4 after 3 iterations using the Binary Search algorithm.

## Time Complexity

| Case | Complexity |
|---|---|
| Best Case | O(1) |
| Average Case | O(log n) |
| Worst Case | O(log n) |

**Space Complexity:** O(1) auxiliary space.

## Advantages
- Faster than Linear Search for large sorted arrays.
- Reduces the search space by half in every iteration.
- Requires fewer comparisons.
- Simple and efficient searching technique.

## Disadvantages
- Requires a sorted array.
- Not suitable for unsorted data without sorting first.
- Less efficient for linked lists because random access is not available.

## Applications
- Searching elements in sorted arrays.
- Searching in large databases.
- Finding elements in dictionaries and phone directories.
- Searching in sorted collections.
- Finding lower and upper bounds in sorted data.

## Conclusion
Binary Search is an efficient searching algorithm that uses the Divide and Conquer technique. It repeatedly divides the search space into two halves until the required element is found or the search interval becomes empty. Its worst-case time complexity is O(log n), making it suitable for searching in large sorted arrays.