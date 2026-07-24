#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int q[SIZE];
int front=-1;
int rear=-1;

int isempty()
 {
return (front == -1);
 }

int isfull()
 {
  return (front== 0 && rear ==SIZE -1) || (front== rear +1);
  }
 //insert
 void enqueue(int value)
  {
  if(isfull())
  {
  printf("Queue is full cannot insert\n");
  return;
  }
  if(front==-1)
  front=0;
  
  rear=(rear+1) % SIZE;
  q[rear]=value;
  printf("Inserted %d \n",value);
  }
 //delete
 void deque()
 {
  if(isempty())
   {
    printf("Queue is empty cannot delete\n");
    return;
   }
  
  int value=q[front];
  if(front==rear)
  {
  front=rear=-1;
  }
  else
  {
  front=(front +1) % SIZE;
  }
  printf("Deleted %d\n",value);
 }

 void display()
 {
 if(isempty())
   {
    printf("Queue is empty cannot display\n");
    return;
   }
   
  printf("Queue elements: \n");
 int i=front;
 while(1)
  {
    printf("%d\n",q[i]);
    if(i==rear)
    break;
   i=(i+1)%SIZE;
   }
  printf("\n");
 }
 
 void countq()
 {
 if(isempty())
   {
    printf("Queue count : 0\n");
    return;
   }
 
 int count=(rear-front + SIZE) %SIZE +1;
 printf("Count: %d\n",count);
 }
 
 int main()
 {
 int choice,value;
 while(1)
 {
 printf("---CIRCULAR QUEUE MENU---\n");
 printf("1.Enqueue - insertion\n");
 printf("2.Dequeue - deletion\n");
 printf("3.Display\n");
 printf("4.Count\n");
 printf("5.Exit\n");
 printf("Enter your Choice: ");
 scanf("%d",&choice);
 
 switch(choice)
  {
 case 1:
 printf("Enter value: ");
 scanf("%d",&value);
 enqueue(value);
 break;
  case 2:
  deque();
  break;
  case 3:
  display();
  break;
  case 4:
  countq();
  break;
  case 5:
  exit(0);
  default:
  printf("Invalid choice");
  }
 }
return 0;
}

 
  
 
  

 
  

