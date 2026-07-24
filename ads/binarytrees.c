#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

//create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// insertion
void insert(struct Node* root) {
    int value;
    char direction;

    printf("Enter value to insert: ");
    scanf("%d", &value);

    struct Node* newNode = createNode(value);
    struct Node* current = root;

    while (1) {
        printf("Insert to the (L)eft or (R)ight of node %d? ", current->data);
        scanf(" %c", &direction);

        if (direction == 'L' || direction == 'l') {
            if (current->left == NULL) {
                current->left = newNode;
                break;
            } else {
                current = current->left;
            }
        } else if (direction == 'R' || direction == 'r') {
            if (current->right == NULL) {
                current->right = newNode;
                break;
            } else {
                current = current->right;
            }
        } else {
            printf("Invalid choice. Please enter L or R.\n");
        }
    }
}

// Traversals
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Delete all nodes
void deleteTree(struct Node* root) {
    if (root == NULL) return;

    deleteTree(root->left);
    deleteTree(root->right);

  
    free(root);
}

// Main
int main() {
    struct Node* root = NULL;
    int rootValue, choice;

    printf("Enter value for root node: ");
    scanf("%d", &rootValue);
    root = createNode(rootValue);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert a node\n");
        printf("2. Inorder traversal\n");
        printf("3. Preorder traversal\n");
        printf("4. Postorder traversal\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert(root);
                break;
            case 2:
                printf("Inorder traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 3:
                printf("Preorder traversal: ");
                preorder(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder traversal: ");
                postorder(root);
                printf("\n");
                break;
            case 5:
                deleteTree(root);
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

