#include<iostream>
using namespace std;
#include<list>
#include<cctype>
#include<string>
bool compare_nocase(const std::string &first,const std::string &second)
{
    unsigned int i=0;
    while((i<first.length())&&(i<second.length()))
    {
        cout<<"FIRST(i)"<<first[i]<<"\n";
        cout<<"SECOND(i)"<<second[i]<<"\n";
        if(tolower(first[i])<tolower(second[i]))
        {
            return true;
        }
        else if(tolower(first[i]>tolower(second[i])))
        {
            return false;
        }
        i++;
    }
    return(first.length()<second.length());
}
int main()
{
    list<string> str;
    list<string>::iterator it;
    str.push_back("one");
    str.push_back("two");
    str.push_back("Three");
    str.sort();
    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it<<" ";
    }
    str.sort(compare_nocase);
    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it<<" ";
    }
}
