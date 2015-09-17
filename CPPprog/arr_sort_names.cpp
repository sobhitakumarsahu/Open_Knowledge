#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
//#include<stdio.h>
static int mycompare(const void *a,const void *b)
{
    return strcmp(*(const char **)a,*(const char **)b);
}
int main()
{
    char *arr[]={"GeeksforGeeks", "GeeksQuiz", "CLanguage"};
    int i,len;
    len=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,len,sizeof(const char*),mycompare);
    for(i=0;i<len;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
