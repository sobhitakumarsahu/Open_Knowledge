#include<iostream>
using namespace std;
#include<stdlib.h>
#include<limits.h>
struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};
struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack=(struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity=capacity;
    stack->top=-1;
    stack->array=(int*)malloc(stack->capacity *sizeof(int));
    return stack;
};
// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{   return stack->top == stack->capacity - 1; }

// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{   return stack->top == -1;  }

// Function to add an item to stack.  It increases top by 1
void push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
cout<<item;
}

// Function to remove an item from stack.  It decreases top by 1
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

// Function to get top item from stack
int peek(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

// Driver program to test above functions
int main()
{
    struct Stack* stack = createStack(100);

    push(stack, 10);

    push(stack, 20);
    push(stack, 30);

cout<<pop(stack);

    cout<<peek(stack);

    return 0;
}
