
# Tree Sort

## Aim
To sort an array of elements in ascending order using the Tree Sort algorithm.

## Introduction
Tree Sort is a comparison-based sorting algorithm that uses a Binary Search Tree (BST).

It works by inserting all array elements into a Binary Search Tree and then performing Inorder Traversal. Inorder Traversal visits nodes in ascending order, producing a sorted array.

## Algorithm
1. Start.
2. Read the size and elements of the array.
3. Create an empty Binary Search Tree.
4. Insert each array element into the BST.
5. If the element is smaller than the current node, insert it into the left subtree.
6. Otherwise, insert it into the right subtree.
7. Perform Inorder Traversal (Left → Root → Right).
8. Store the traversed elements back into the original array.
9. Display the sorted array.
10. Stop.

## Example

**Input:** `[5, 3, 8, 2, 1]`

**Step 1: Create Binary Search Tree**

```text
        5
       / \
      3   8
     /
    2
   /
  1
```

**Step 2: Perform Inorder Traversal**

```text
Left → Root → Right

1 → 2 → 3 → 5 → 8
```

**Output:** `[1, 2, 3, 5, 8]`

## Advantages
- Simple to understand using Binary Search Tree concepts.
- Average-case time complexity is O(n log n).
- Handles duplicate elements.
- Inorder Traversal produces sorted elements.

## Disadvantages
- Worst-case time complexity is O(n²) when the BST becomes unbalanced.
- Requires additional memory for tree nodes.
- Recursive operations may cause stack overflow for highly unbalanced trees.

## Applications
- Sorting data using Binary Search Trees.
- Understanding BST insertion and traversal.
- Maintaining data in sorted order.
- Tree-based data processing.

## Time Complexity

| Case | Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n²) |

## Space Complexity
- O(n) for storing the BST nodes.
- Additional recursion stack space depends on tree height.

## Conclusion
Tree Sort uses a Binary Search Tree to arrange elements in ascending order. By performing Inorder Traversal, it retrieves the elements in sorted order.
