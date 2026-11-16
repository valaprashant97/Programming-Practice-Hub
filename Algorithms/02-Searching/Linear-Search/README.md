# Linear Search in C

## Overview

Linear Search is a simple searching algorithm used to find a specific element in an array or list. It works by checking each element sequentially, starting from the first element, until the target element is found or the entire array has been traversed.

It is also known as **Sequential Search**.

## How It Works

1. Start searching from the first element of the array.
2. Compare the current element with the target element.
3. If both elements match, return the position of the element.
4. If they do not match, move to the next element.
5. Repeat until the element is found or the array ends.
6. If no match is found, report that the element does not exist.

## Example

**Array:** 10, 20, 30, 40, 50

**Target Element:** 30

**Search Process:**

- Compare 10 with 30 — Not Found.
- Compare 20 with 30 — Not Found.
- Compare 30 with 30 — Found.

**Result:** Element found at index 2.

## Time and Space Complexity

| Case | Time Complexity |
|---|---|
| Best Case | O(1) |
| Average Case | O(n) |
| Worst Case | O(n) |

**Space Complexity:** O(1)

## Advantages

- Simple and easy to implement.
- Works with both sorted and unsorted arrays.
- Does not require additional memory.
- Suitable for small datasets.

## Disadvantages

- Slow for large datasets.
- May require checking every element.
- Less efficient than binary search for large sorted arrays.

## Applications

- Searching elements in arrays.
- Finding records in small datasets.
- Searching unsorted lists.
- Basic searching operations in programming.

## Conclusion

Linear Search is one of the fundamental searching algorithms in Data Structures and Algorithms (DSA). It is easy to understand and useful for small datasets, but its O(n) time complexity makes it less efficient for large collections of data.