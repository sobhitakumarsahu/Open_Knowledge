#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int data)
{
    struct node *node=(struct node *)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return(node);
};
void printinorder(struct node *root)
{
    if(root)
    {
        printinorder(root->left);
        printf("%d",root->data);
        printinorder(root->right);
    }

}
void printpreorder(struct node *root)
{
    if(root)
    {
        printf("%d",root->data);
        printinorder(root->left);
        printinorder(root->right);
    }

}
void printpostorder(struct node *root)
{
    if(root)
    {
        printinorder(root->left);
        printinorder(root->right);
        printf("%d",root->data);
    }
}
int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    printinorder(root);
    printf("\n");
    printpreorder(root);
    printf("\n");
    printpostorder(root);
    printf("\n");
}
