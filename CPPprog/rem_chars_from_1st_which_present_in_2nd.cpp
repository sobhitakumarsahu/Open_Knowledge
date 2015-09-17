#include<iostream>
using namespace std;
#include<stdlib.h>
#define NO_OF_CHARS 256
int *getCharCntArr(char *arr)
{
    int *cnt=(int*)calloc(sizeof(int),NO_OF_CHARS);
    int i;
    for(i=0;*(arr+i);i++)
    {
        cnt[*(arr+i)]++;
    }
    return cnt;
}
void removeDirtyChars(char *str1,char *str2)
{
    int *count=getCharCntArr(str2);
    int ip_idx=0,res_idx=0;
    char temp;
    while(*(str1+ip_idx))
    {
        temp=*(str1+ip_idx);
        if(count[temp]==0)
        {
            *(str1+res_idx)=*(str1+ip_idx);
            res_idx++;
        }
        ip_idx++;
    }
    *(str1+res_idx)='\0';
    cout<<str1<<" ";
}
int main()
{
    char str[]="geeksforgeeks";
    char mask[]="mask";
    removeDirtyChars(str,mask);
}
