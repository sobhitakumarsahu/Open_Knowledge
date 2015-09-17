#include<iostream>
using namespace std;
#include<stdlib.h>
#define NO_OF_CHARS 256
int *getCharCountArr(char *str)
{
    int *count=(int *)calloc(NO_OF_CHARS,sizeof(int));
    int i;
    for(i=0;*(str+i);i++)
    {
        count[*(str+i)]++;
    }
    return count;
}
void getMaxOccur(char *str)
{
    int *count=getCharCountArr(str);
    int i,max_idx=0,len=NO_OF_CHARS;
    cout<<"NO_OF_CHARS: "<<NO_OF_CHARS;
    for(i=1;i<len;i++)
    {
        if(count[i]>count[max_idx])
        {
            max_idx=i;
        }
    }
    cout<<(char)max_idx;
}
int main()
{
    char str[]="sample string";
    getMaxOccur(str);
}
