#include<iostream>
using namespace std;
#define NO_OF_CHARS 256
#include<stdlib.h>
int *fillChars(char *str,int *count)
{
    int i;
    for(i=0;*(str+i);i++)
    {
        count[*(str+i)]++;
    }
    return count;
}
void printDupes(char *str)
{
    int *count=(int*)calloc(NO_OF_CHARS,sizeof(int));
    fillChars(str,count);
    int i;
    for(i=0;i<NO_OF_CHARS;i++)
    {
        if(count[i]>1)
        {
            cout<<(char)i<<" "<<count[i]<<"\n";
        }
    }
    free(count);
}
int main()
{
    char str[]="test string";
    printDupes(str);
}
