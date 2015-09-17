#include<iostream>
using namespace std;
int main()
{
    char s1[]="I LOVE INDIA VERY MUCH";
    int i,wrdcnt=0;
    for(i=0;s1[i];i++)
    {
        if(s1[i]==' ')
        {
            wrdcnt++;
        }
    }
    cout<<"No. of words are there in string:"<<wrdcnt+1;
}
