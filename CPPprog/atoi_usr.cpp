#include<iostream>
using namespace std;
int myatoi(char *str)
{
    int res=0;
    int i;
    for(i=0;str[i];i++)
    {
        cout<<"str[i]: "<<str[i]<<"\n";
        res=res*10+str[i]-'0';
        cout<<"res: "<<res<<"\n";
    }
    return res;
}
int main()
{
    char str[]="7873";
    int val=myatoi(str);
    cout<<"ATOI: "<<val;
}
