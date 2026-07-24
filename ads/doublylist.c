#include<stdio.h>
#include<stdlib.h>
struct Node
{
 int data;
 struct Node* next;
 struct Node* prev;
};
struct Node *head=NULL;

//create
struct Node * createnodes(int data)
{
struct Node * newNode=(struct Node *) malloc (sizeof(struct Node));
newNode->data=data;
newNode->prev=newNode->next=NULL;
return newNode;
}

//beg insert 
void beginsert(int data)
 {
 struct Node * newNode=createnodes(data);
 if(head==NULL)
   {
   head=newNode;
   }
 else{
  newNode->next=head;
  head->prev=newNode;
  head=newNode;
         }
 printf("%d inserted at beginning\n",data);
 }
//insert at end
void endinsert(int data)
{
 struct Node * newNode=createnodes(data);
 if(head==NULL)
 {
 head=newNode;
 }
 else
  {
  struct Node*temp=head;
  while(temp != NULL)
  temp=temp->next;
  temp->next=newNode;
  newNode->prev=temp;
  }
  printf("%d inserted at end\n",data);
  }
  //delete at beg
  void deletebeg()
  {
  if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }
  struct Node*temp=head;
  if (head !=NULL)
  {
  head->prev=NULL;
  printf("deleted % d from beginning \n",temp->data);
  free(temp);
  }
  }
  //delete from end
  void enddel()
  {
    if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }
    struct Node*temp=head;
    while (temp!=NULL)
    temp=temp->next;
    if(temp->prev !=NULL)
    temp->prev->next=NULL;
    else
    head=NULL;
    printf("deleted %d from end \n",temp->data);
    free(temp);
  }
  //traverse forward
  void forward()
  {
   if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }
   
   struct Node* temp=head;
   printf("list forward:  ");
   while(temp !=NULL)
   {
   printf("%d ",temp->data);
   temp=temp->next;
   }
   printf("\n");
  }
  // traverse backward
  void traverseback()
  {
   if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }
   
   struct Node* temp=head;
   printf("list forward:  ");
   while(temp !=NULL)
   {
   printf("%d ",temp->data);
   temp=temp->next;
   }
   printf("\n");
  }
  
  //count nodes
  void countNodes()
  {
  int counting=0;
  struct Node * temp=head;
   while(temp !=NULL)
   {
  counting++;
  temp=temp->next;
   }
  printf("count: %d \n",counting);
  }
  
  int main()
  {
  int choice,data;
  while(1)
  {
    printf("-----doubly linked list Menu \n");
    printf("1.insert at beginning\n");
    printf("2.insert at end\n");
    printf("3.delete at beginning\n");
    printf("4.delete at end\n");
    printf("5.forward traversal\n");
    printf("6.backward traversal\n");
    printf("7.count nodes\n");
    printf("8.exit\n");
    
    printf("ENTER YOUR CHOICE: \n");
    scanf("%d ",&choice);
    
    switch(choice)
    {
    case 1:
    printf("enter the value: \n");
    scanf("%d",&data);
    beginsert(data);
    break;
    case 2:
    printf("enter the value: \n");
    scanf("%d",&data);
    endinsert(data);
    break;
    case 3:
    deletebeg();
    break;
    case 4:
    enddel();
    break;
    case 5:
    forward();
    break;
    case 6:
    traverseback();
    break;
    case 7:
    countNodes();
    break;
    case 8:
    exit(0);
    
    default:
    printf("invalid choice\n");
    }
    }
    return 0;
 }    
    
      
  
  
