#include<iostream>
using namespace std;
#include<strings.h>
int main()
{
    char s1[50]="MADAM";
    char s2[50];
    int i=0,j=0,len;
    len=strlen(s1);
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';
    cout<<"STR1: "<<s1<<"\n";
    cout<<"STR2: "<<s2<<"\n";
    int ret=strcmp(s1,s2);
    cout<<"ret: "<<ret;
    if(strcmp(s1,s2))
    {
        cout<<"Not Palindrome!!";
    }
    else
    {
        cout<<"Pallindrome!!";
    }
}
