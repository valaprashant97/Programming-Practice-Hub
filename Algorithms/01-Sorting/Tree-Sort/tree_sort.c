
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Create a new node
struct Node* createNode(int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert element into BST
struct Node* insert(struct Node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }

    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }

    return root;
}

// Inorder traversal
void inorder(struct Node *root, int arr[], int *index)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, arr, index);

    arr[(*index)++] = root->data;

    inorder(root->right, arr, index);
}

// Free allocated memory
void freeTree(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

// Tree Sort
void treeSort(int arr[], int size)
{
    struct Node *root = NULL;

    // Insert array elements into BST
    for (int i = 0; i < size; i++)
    {
        root = insert(root, arr[i]);
    }

    // Store sorted elements using inorder traversal
    int index = 0;
    inorder(root, arr, &index);

    freeTree(root);
}

int main(void)
{
    int size;

    printf("Enter array size: ");

    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    int *arr = malloc((size_t)size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter array elements:\n");

    for (int i = 0; i < size; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input!\n");
            free(arr);
            return 1;
        }
    }

    treeSort(arr, size);

    printf("Sorted array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}
