#include<iostream>
#include<string>
using namespace std;
int main()
{
    //char str[]="World Health Org.";
    string str;
    cout<<"Enter a String: ";
    //cin>>str;
    getline(cin,str);
    int i;
    char *ptr;
    for(i=0;str[i];i++)
    {
        if((i==0)||str[i-1]==' ')
        {
            //ptr=str[i+1];
            cout<<str[i];
        }
    }
}
