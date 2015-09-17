#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;
struct Node
{
    int key;
    struct Node *left,*right;
};
void printLevels(Node *root,int low,int high)
{
    queue <Node *> Q;
    Node *marker=new Node;
    int level=1;
    Q.push(root);
    Q.push(marker);

    while(Q.empty()==false)
    {
        Node *n=Q.front();
        Q.pop();
        if(n==marker)
        {

            cout<<endl;
            level++;
            cout<<"in marker module "<<" level is : "<<level<<"\n";
            if(Q.empty()==true||level>high)
            {
                break;
            }
            Q.push(marker);

            continue;
        }
        if(level>=low)
        {
            cout<<n->key<<" ";
        }

        if(n->left!=NULL)
        {
            cout<<"n->left called\n";
            Q.push(n->left);
        }
        if(n->right!=NULL)
        {
            cout<<"n->right called\n";
            Q.push(n->right);
        }
    }
}
Node *newNode(int key)
{
    Node *temp=new Node;
    temp->key=key;
    temp->left=temp->right=NULL;
    return temp;
}
int main()
{
    struct Node *root=newNode(20);
    root->left=newNode(8);
    root->right=newNode(22);
    root->left->left=newNode(4);
    root->left->right=newNode(12);
    root->left->right->left=newNode(10);
    root->left->right->right=newNode(14);
    cout<<"Print node between two given level \n";
    printLevels(root,2,3);
    return 0;
}
