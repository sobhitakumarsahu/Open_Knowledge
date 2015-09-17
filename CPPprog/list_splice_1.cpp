#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> list1,list2;
    list<int>::iterator it;
    for(int i=1;i<=4;i++)
    {
        list1.push_back(i);
    }
    for(int i=1;i<=3;i++)
    {
        list2.push_back(i*10);
    }
    it=list1.begin();
    ++it;
    cout<<*it<<"\n";
    list1.splice(it,list2);
    for(it=list1.begin();it!=list1.end();++it)
    {
        cout<<*it<<"\n";
    }
    list2.splice(list2.begin(),list1,it);
    it=list1.begin();
    advance(it,3);
    cout<<"IT: "<<*it<<"\n";


}
