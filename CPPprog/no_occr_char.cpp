#include<iostream>
using namespace std;
int main()
{
    char *str="I LOVE INDIA";
    char ch;
    int i,cnt=0;
    cout<<"Enter a char. to get the count";
    cin>>ch;
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<"Not found!!";
    }
    else
        cout<<"CNT: "<<cnt;
}
