#include<iostream>
using namespace std;
#include<strings.h>
int main()
{
    char str[50]="skdjfk;j@#@#kjijd121sds";
    char str2[50];
    int i,j;
    for(i=0;str[i];i++)
    {
        while(!(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'))
        {
         //   cout<<str[i];
//            strcpy(str2[j],str[i]);
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
    }
    cout<<str;

}
