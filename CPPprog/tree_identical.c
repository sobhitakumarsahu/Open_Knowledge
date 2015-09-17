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
int identical(struct node *root1,struct node *root2)
{
    if(root1==NULL && root2==NULL)
    {
        return 1;
    }
    if(root1!=NULL && root2!=NULL)
    {
        return(root1->data==root2->data && identical(root1->left,root2->left) && identical(root1->right,root2->right));
    }
}
int main()
{
    struct node *root1=newnode(1);
    struct node *root2=newnode(1);
    root1->left=newnode(2);
    root1->right=newnode(3);
    root1->left->left=newnode(4);
    root1->left->right=newnode(5);
    root2->left=newnode(2);
    root2->right=newnode(3);
    root2->left->left=newnode(4);
    root2->left->right=newnode(5);

    if(identical(root1,root2))
    {
        printf("Both trees are identical\n");
    }
    else
        printf("Trees are not identical\n");
}
