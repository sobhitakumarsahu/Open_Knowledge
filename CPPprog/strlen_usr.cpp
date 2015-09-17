#include<iostream>
using namespace std;
int find_length(char *str)
{
    int i,charcnt=0;
    for(i=0;str[i];i++)
    {
        charcnt++;
    }
    return charcnt;
}
int main()
{
    char *str="I LOVE INDIA";
    int len=find_length(str);
    cout<<"LEN: "<<len;
}

