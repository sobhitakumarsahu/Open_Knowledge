#include<iostream>
using namespace std;
int main()
{
    char *s1="Sobhita";
    char *s2="Kumar";
    char *temp;
    temp=s1;
    s1=s2;
    s2=temp;
    cout<<"S1: "<<s1<<"S2: "<<s2;
}
