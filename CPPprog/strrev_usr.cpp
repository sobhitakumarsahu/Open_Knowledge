#include<iostream>
using namespace std;
#include<strings.h>
void mystrrev(char *str)
{
    int i,j;
    int len;
    len=strlen(str);
    char temp;
    for(i=0,j=len-1;i<j;i++,j--)
    {
      //  if(str[i]!=str[j])
       // {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
       // }
    }
    cout<<str;
}
int main()
{
    char str[]="HELLO";
    mystrrev(str);
}
