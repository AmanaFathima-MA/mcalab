#include <stdio.h>

int setA[10], setB[10], setC[20], i, j, m, n;

void create() {
    // Creation of set A
    printf("Enter the size of set A: ");
    scanf("%d", &m);
    printf("Enter elements of set A: ");
    for(i = 0; i < m; i++) {
        scanf("%d", &setA[i]);
    }

    // Creation of set B
    printf("Enter the size of set B: ");
    scanf("%d", &n);
    printf("Enter elements of set B: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &setB[i]);
    }

    // Display set A
    printf("\nSET A: { ");
    for(i = 0; i < m; i++) {
        printf("%d ", setA[i]);
    }
    printf("}\n");

    // Display set B
    printf("SET B: { ");
    for(i = 0; i < n; i++) {
        printf("%d ", setB[i]);
    }
    printf("}\n");
}

void uniondis() {
    int k = 0;

    // Copy setA to setC
    for(i = 0; i < m; i++) {
        setC[k++] = setA[i];
    }

    // Add elements from setB to setC, avoiding duplicates
    for(i = 0; i < n; i++) {
        int duplicate = 0;
        for(j = 0; j < m; j++) {
            if(setB[i] == setA[j]) {
                duplicate = 1; // Set B element is a duplicate
                break;
            }
        }
        if(!duplicate) {
            setC[k++] = setB[i];
        }
    }

    // Display the union of sets A and B
    printf("\nUNION: { ");
    for(i = 0; i < k; i++) {
        printf("%d ", setC[i]);
    }
    printf("}\n");
}

void find() {
    int item, found = 0;
    printf("Enter the element to find: ");
    scanf("%d", &item);

    // Search in setA
    for(i = 0; i < m; i++) {
        if(setA[i] == item) {
            printf("Element %d found in SET A\n", item);
            found = 1;
            break;
        }
    }

    // Search in setB
    for(i = 0; i < n; i++) {
        if(setB[i] == item) {
            printf("Element %d found in SET B\n", item);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element %d not found in either set\n", item);
    }
}

int main() {
    int choice;
    do {
        printf("\n--DISJOINT SET OPERATIONS--\n");
        printf("1. CREATION\n");
        printf("2. UNION\n");
        printf("3. FIND\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                create();
                break;
            case 2:
                uniondis();
                break;
            case 3:
                find();
                break;
            case 4:
                printf("\nEXIT\n");
                return 0;
            default:
                printf("\nInvalid choice!\n");
        }
    } while(choice != 0);

    return 0;
}


