#include<iostream>
using namespace std;
int main()
{
    char str[50]="INDIA";
    int count[26],c=0;
    for(c=0;str[c];c++)
    {
        if(str[c]>='A'&&str[c]<='Z')
        {
            count[str[c]-'A']++;
        }
    }
    for(c=0;c<26;c++)
    {
        cout<<c+'a'<<"-->"<<count[c]<<"\n";
    }

}
