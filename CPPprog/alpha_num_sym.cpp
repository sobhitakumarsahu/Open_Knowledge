#include<iostream>
using namespace std;
int main()
{
    char *arr="as12d,";
    int i,charcnt=0,intcnt=0,symcnt=0;
    for(i=0;arr[i];i++)
    {
        if(arr[i]>='0'&&arr[i]<='9')
        {
            intcnt++;
        }
        else if(arr[i]>='a'&&arr[i]<<'z'||arr[i]>='A'&&arr[i]<='Z')
        {
            charcnt++;
        }
        else
        {
            symcnt++;
        }
    }
    cout<<"INT CNT: "<<intcnt<<"\n";
    cout<<"CHR CNT: "<<charcnt<<"\n";
    cout<<"SYM CNT:"<<symcnt<<"\n";
}
