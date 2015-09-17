#include <iostream>
 #include <vector>
 using namespace std;

 vector<int> v;
 int size;

typedef struct node
{
int data;
struct node *left, *right ;
} node, *ptr;



ptr newNode(int item)
{
ptr temp =  new node;
temp->data = item;
temp->left = temp->right = NULL;
return temp;
}

void printVerticalSumUtil(ptr root, int line)
{
cout<<"Line: "<<line<<"\n";
if (root == NULL) return;
else
{

    v[line] += root->data;
    printVerticalSumUtil(root->left, line - 1);
    printVerticalSumUtil(root->right, line + 1);
}


}

void printVerticalSum(ptr root)
{
if (root == NULL)
    return;

//Calculating the line No for the root
ptr curr = root;
int line = 0;
while (curr->left != NULL)
{
    curr = curr->left;
    line++;
}
size = 2 * line + 1;  //Total No of Lines
line++;      //Adjusting line no for root
cout<<"Line Count: "<<line<<"\n";
cout<<"Size Count: "<<size<<"\n";
for (int i = 1; i <= size; ++i)   //Initializing lines to zero
    v.push_back(0);

printVerticalSumUtil(root, line);

for (int i = 1; i <= size; ++i)
{
    cout << "Sum of Line " << i << " is " << v[i] << endl;
}
}

int main()
{

ptr root = newNode(1);
root->left = newNode(2);
root->right = newNode(3);
root->left->left = newNode(4);
root->left->right = newNode(5);
root->right->left = newNode(6);
root->right->right = newNode(7);

printVerticalSum(root);

return 0;
}
