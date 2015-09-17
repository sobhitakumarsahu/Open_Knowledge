#include<iostream>
using namespace std;
int main()
{
    char s1[50]="I LOVE INDIA";
    char s2[50]="I HATE YOU";
    int i,j;
    for(i=0;s1[i];i++)
    {
        for(j=0;s2[j];j++)
        {
            if(s1[i]==s2[j])
            {
                s1[i]=' ';
                s2[j]=' ';
            }
        }
    }
    cout<<"s1: "<<s1<<"\n";
    cout<<"s2: "<<s2<<"\n";
}
