#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    // Valid Date: DD/MM/YY
    char str[40];
    cout<<"Enter DOB in DD/MM/YY format: ";
    cin>>str;
    int i;
    atoi(str);
    cout<<str[0]<<" "<<str[1];
    int date=((str[0]*10)+(str[1]*1));
    cout<<date;
}
