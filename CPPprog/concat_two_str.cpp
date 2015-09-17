#include<iostream>
using namespace std;
int main()
{
    char s1[50]="I LOVE";
    char s2[50]="INDIA VERY MUCH";
    int i=0,j=0;
    while(s1[i]!='\0')
        i++;
    while(s2[j]!='\0')
    {
        if(j==0)
        {
            s1[i]=' ';
            i++;
        }
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    cout<<"STR: "<<s1;

}
