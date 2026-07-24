#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, j;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n];

    printf("Enter the adjacency matrix (0 if no edge):\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    int parent[n];   // To store MST
    int key[n];      // To pick minimum weight edge
    int mstSet[n];   // To track vertices included in MST

    // Initialize all keys as infinite and mstSet[] as false
    for(i = 0; i < n; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
    }

    key[0] = 0;    // Start from vertex 0
    parent[0] = -1; // First node is root of MST

    for(int count = 0; count < n - 1; count++) {
        // Pick minimum key vertex not in MST
        int min = INT_MAX, u = -1;
        for(i = 0; i < n; i++) {
            if(mstSet[i] == 0 && key[i] < min) {
                min = key[i];
                u = i;
            }
        }

        mstSet[u] = 1; // Include vertex u in MST

        // Update key values of adjacent vertices
        for(v = 0; v < n; v++) {
            if(graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    printf("Edge \tWeight\n");
    int totalWeight = 0;
    for(i = 1; i < n; i++) {
        printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
        totalWeight += graph[i][parent[i]];
    }
    printf("Total weight of MST: %d\n", totalWeight);

    return 0;
}
