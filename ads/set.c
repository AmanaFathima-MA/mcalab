#include<stdio.h>
#include<stdlib.h>
 int main()
  {
  int sizeA,sizeB,maxElement=0,choice;
 
  printf("enter number of elements in set A: ");
  scanf("%d",&sizeA);
  int setA[sizeA];
  printf("A elements: ");
   for(int i=0;i<sizeA;i++)
    {
    scanf("%d",&setA[i]);
    if(setA[i] > maxElement)
    maxElement=setA[i];
    }
    //b input
    printf("enter number of elements in set B: ");
  scanf("%d",&sizeB);
  int setB[sizeB];
  printf("B elements: ");
   for(int i=0;i<sizeB;i++)
    {
    scanf("%d",&setB[i]);
    if(setB[i]>maxElement)
    maxElement=setB[i];
    }
    //bit string
    char setA_bs[maxElement + 1];
    char setB_bs[maxElement + 1];
    for(int i=0;i<=maxElement;i++)
    {
    setA_bs[i]='0';
    setB_bs[i]='0';
    }
    
    
    for(int i=0;i<sizeA;i++)
    setA_bs[setA[i]]='1';
    for(int i=0;i<sizeB;i++)
    setB_bs[setB[i]]='1';
    
    //MENU
    do
    {
    printf("---Set Operations---\n");
    printf(" 1.Union\n 2.Intersection\n 3.Difference \n 4.display\n 5.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    
    char result[ maxElement + 1];
    int i;
    
    switch(choice)
    {
     case 1:
      for(i=0;i<=maxElement;i++)
     result[i]=(setA_bs[i]=='1' || setB_bs[i]=='1') ? '1':'0';
     printf("Union AuB= { ");
     for(i=0;i<=maxElement;i++)
     if(result[i]=='1')
     printf("%d ",i);
     printf("}\n");
     break;
     
    case 2:
      for(i=0;i<=maxElement;i++)
     result[i]=(setA_bs[i]=='1' && setB_bs[i]=='1') ? '1':'0';
     printf("Intersection AnB={ ");
     for(i=0;i<=maxElement;i++)
     if(result[i]=='1')
     printf("%d ",i);
     printf("}\n");
     break;
     
     case 3:
  
      for(i=0;i<=maxElement;i++)
     result[i]=(setA_bs[i]=='1' && setB_bs[i]=='0') ? '1':'0';
     printf("Difference A-B ={ ");
     for(i=0;i<=maxElement;i++)
     if(result[i]=='1')
     printf("%d ",i);
     printf("}\n");
     break;
     
     case 4:
     printf("set A={  ");
     for(i=0;i<=maxElement;i++)
       if(setA_bs[i]=='1')
     printf("%d ",i);
     printf("}\n");
        printf("set B={  ");
     for(i=0;i<=maxElement;i++)
       if(setB_bs[i]=='1')
     printf("%d ",i);
     printf("}\n");
     break;
     
     case 5:
     exit (0);
     
     default:
     printf("Invalid choice");
     }
     }
     while(choice!=5);
     
     return 0;
     }
     
     
    
  

     
    
  

