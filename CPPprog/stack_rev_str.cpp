#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

struct Stack
{
    int top;
    unsigned capacity;
    char* array;
};
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char*) malloc(stack->capacity * sizeof(char));
    return stack;
}
void reverse(char str[])
{
    int n=strlen(str);
    for(i=0;i<n;i++)
    {
        push(str[i],stack);

    }
}

int main()
{
    char str[] = "GeeksQuiz";

    reverse(str);
    printf("Reversed string is %s", str);

    return 0;
}
