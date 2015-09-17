#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> mylist1,mylist2;
    list<int>::iterator it;
    for(int i=1;i<5;i++)
    {
        mylist1.push_back(i);
    }
    for(int i=1;i<3;i++)
    {
        mylist2.push_back(i*10);
    }
    it=mylist1.begin();
    ++it;
    mylist1.splice(it,mylist2);
    for(it=mylist1.begin();it!=mylist1.end();++it)
    {
        cout<<*it<<"\n";
    }

}
