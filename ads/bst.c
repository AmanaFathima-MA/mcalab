#include<stdio.h>
#include<stdlib.h>

 struct node
   {
    int data;
    struct node* left;
    struct node* right;
    };
    
    struct node* createnode(int value)
    {
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=newnode->right=NULL;
    return newnode;
    }
    //insert
    struct node* insert(struct node* root,int value)
    {
    if (root==NULL)
     return createnode(value);
     
     if(value<root->data)
     root->left=insert(root->left,value);
     else if(value>root->data)
     root->right=insert(root->right,value);
     return root;
     }
     //find min
     struct node* findmin(struct node* root)
     {
     while(root && root->left !=NULL)
      root= root->left;
     return root;
      }
      //inorder
      void inorder(struct node* root)
      {
       if(root!= NULL)
        {
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
        }
       }
       //preorder
       void preorder(struct node* root)
      {
       if(root!= NULL)
        {
         printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
        }
       }
       //postorder
          void postorder(struct node* root)
      {
       if(root!= NULL)
        {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
        }
       }
       //search
       struct node* search(struct node * root,int value)
       {
       if(root == NULL|| root->data==value)
        return root;
        
        if(value<root->data)
        return search(root->left,value);
        return search(root->right,value);
        }
        //delete
    struct node* deletenode(struct node* root,int value)
    {
    if (root==NULL)
    return root;
   if(value<root->data)
     root->left=deletenode(root->left,value);
     else if(value>root->data)
     root->right=deletenode(root->right,value);
     else
     {
     if(root->left==NULL)
     {
     struct node* temp= root->right;
     free(root);
     return temp;
     }
     else if(root->right ==NULL)
     {
      struct node* temp= root->left;
       free(root);
     return temp;
     }
     struct node* temp = findmin(root->right);
        root->data = temp->data;
        root->right = deletenode(root->right, temp->data);
     }
     return root;
     }
     int main()
     {
     struct node*root=NULL;
     int choice,value;
     while(1)
     {
     printf("BINARY SEARCH TREE MENU\n");
     printf("1.Insert\n");
     printf("2.Delete\n");
     printf("3.Search\n");
     printf("4.Inorder Traversal\n");
     printf("5.Preorder Traversal\n");
     printf("6.Postorder Traversal\n");
     printf("7.Exit\n");
     printf("Enter Your Choie:");
     scanf("%d",&choice);
     
     switch(choice)
     {
      case 1:
      printf("Enter value to insert: ");
      scanf("%d",&value);
      root=insert(root,value);
      break;
      case 2:
      printf("Enter value to delete: ");
      scanf("%d",&value);
      root=deletenode(root,value);
      break;
     case 3:
     printf("Enter value to search: ");
     scanf("%d",&value);
     if(search(root,value)!=NULL)
     printf("%d found\n",value);
     else
     printf("%d not found \n",value);
     break;
     
     case 4:
     printf("Inorder: ");
     inorder(root);
     printf("\n");
     break;
     case 5:
     printf("Preorder: ");
     preorder(root);
     printf("\n");
     break;
     case 6:
     printf("Postorder: ");
     postorder(root);
     printf("\n");
     break;
     case 7:
     exit(0);
     default:
     printf("invalid choice");
     }
     }
     return 0;
     }
