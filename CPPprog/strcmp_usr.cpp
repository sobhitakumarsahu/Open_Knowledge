#include<iostream>
using namespace std;
int mystrcmp(char *str,char *str1)
{
    while(*str==*str1)
    {
        if(*str=='\0')
        {
            return 0;

        }
            str++;
            str1++;

    }
    return(*str-*str1);
}
int main()
{
    char *str="TEST";
    char *str1="TEST";
    char *str2="Hello";
    int ret,ret1;
    ret=mystrcmp(str,str1);
    ret1=mystrcmp(str,str2);
    cout<<"RET1: "<<ret1;
    cout<<"RET: "<<ret;

}
