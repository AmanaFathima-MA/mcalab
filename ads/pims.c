#include<stdio.h>
#define INF 9999
#define MAX 100
int main()
{
    int G[MAX][MAX],visited[MAX],n,i,j,edges=0;
    int min,x,y;

    printf("enter number of vertices: ");
    scanf("%d",&n);

    printf("enter the adjacemcy matrix:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&G[i][j]);
        if(G[i][j]==0);
        G[i][j]=INF;

    }
    for(i=0;i<n:i++)
    visited[i]=0;
visited[0]=1;
printf("\nEdges in MST:\n");
while(edges<n-1){
    min=INF;
    for(i=0;i<n;i++){
        if(visited[i]==1){
            for(j=0;j<n;j++){
                if(visited[j]==0 && G[i][j]<min){
                    min=G[i][j];
                    x=i;
                    y=j;
                }
            }
        }
    }

visited[y]=1;
edges++;
printf("Edges %d:(%d->%d) cost=%d\n",edges,x,y,G[x][y]);
 }
 return 0;
}