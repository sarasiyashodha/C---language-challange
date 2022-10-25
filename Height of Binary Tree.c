#include <stdio.h>  
#include <stdlib.h>  
   
  
struct node{  
    int data;  
    struct node *left;  
    struct node *right;  
};  
   
 
struct node *root = NULL;  
   
 
struct node* createNode(int data){  
    
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
      
    newNode->data = data;  
    newNode->left = NULL;  
    newNode->right = NULL;  
      
    return newNode;  
}  
   

int findHeight(struct node *temp){  
   
    if(root == NULL) {  
        printf("Tree is empty\n");  
        return 0;  
    }  
    else {  
        int leftHeight = 0, rightHeight = 0;  
          
        
        if(temp->left != NULL)  
            leftHeight = findHeight(temp->left);  
          
          
        if(temp->right != NULL)  
            rightHeight = findHeight(temp->right);  
          
         
        int max = (leftHeight > rightHeight) ? leftHeight : rightHeight;  
          
          
        return (max + 1);  
    }  
}  
   
int main()  
{  
      
    root = createNode(1);  
    root->left = createNode(2);  
    root->right = createNode(3);  
    root->left->left = createNode(4);  
    root->right->left = createNode(5);  
    root->right->right = createNode(6);  
    root->right->right->right= createNode(7);  
    root->right->right->right->right = createNode(8);  
      
    
    printf("Maximum height of given binary tree: %d", findHeight(root));  
    return 0;  
}  
