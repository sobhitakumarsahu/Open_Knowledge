#include<iostream>
using namespace std;
int main()
{
    char *str1="I LOVE CHIKENS";
    char *str2="LOVE";
    char *str3="HATE";
    char *str4;
    int j,i,k,n=0,flag=0;
    j=0;
    for(i=0;str1[i];i++)
    {

        if(str1[i]==str2[j]&&str1[i]!='\0'&&str2[j]!='\0')
        {
            cout<<"match found!!";
            j++;

            if(str2[j]=='\0')
            {
             //   cout<<"Hello";
                for(k=0;str3[k];k++)
                {

                    str4[n]=str3[k];
                    n++;
                }
                str4[n]=' ';
                flag=1;
            }
            continue;

        }

/*        else
        {
             cout<<"Hello";
            if(flag==1)
            {
                str4[n]=str1[i];
                n++;
            }
            if(flag==0)
            {
                str4[n]=str1[i];
                n++;
                j=0;
            }
        }
        */
    }

   //str4[n]='\0';
   // cout<<"FINAL STR: "<<str4;
}
