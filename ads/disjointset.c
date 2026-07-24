#include <stdio.h>
#define MAX 20

int parent[MAX];
int elements[MAX];
int n;

void createset() {
    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);
  
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elements[i]);
        parent[i] = i;  // Initialize each element as its own parent
    }
    printf("Disjoint sets are created\n");
}

int getindex(int x) {
    for (int i = 0; i < n; i++) {
        if (elements[i] == x)
            return i;  // Return the index of the element
    }
    return -1;  // Return -1 if element not found
}

int find(int i) {
    if (parent[i] != i)
        parent[i] = find(parent[i]);  // Path compression
    return parent[i];  // Return the root
}

void unionset(int x, int y) {
    int i = getindex(x);
    int j = getindex(y);
  
    if (i == -1 || j == -1) {
        printf("Elements not found\n");
        return;
    }
  
    int rootI = find(i);
    int rootJ = find(j);
  
    if (rootI != rootJ) {
        parent[rootJ] = rootI;  // Union the sets
        printf("Union done: %d and %d are in the same set\n", x, y);
    }
}

void display() {
    printf("Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", elements[i]);
    }
    printf("\nParent: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", parent[i]);
    }
    printf("\n");
}

int main() {
    int x, y, choice;
    createset();
  
    do {
        printf("\n---Disjoint Set Operations---\n");
        printf("1. Union\n");
        printf("2. Find\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
        switch (choice) {
            case 1:
                printf("Enter two elements to union: ");
                scanf("%d %d", &x, &y);
                unionset(x, y);
                break;
            case 2:
                printf("Enter element to find: ");
                scanf("%d", &x);
                {
                    int idx = getindex(x);
                    if (idx == -1)
                        printf("Element not found\n");
                    else
                        printf("Representative of %d is: %d\n", x, find(idx));
                }
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
  
    return 0;
}


