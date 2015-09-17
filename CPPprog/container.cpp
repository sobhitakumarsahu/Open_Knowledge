#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main()
{
    int a;
    vector<int> vec;
    a=vec.size();
    cout<<a;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(5);
    a=vec.size();
    cout<<a;
    cout<<vec[2]<<endl;
    cout<<vec[1]<<endl;
    //cout<<vec[4]<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<"INDEX: "<<vec[i]<<endl;
    }
    for(vector<int>::iterator itr=vec.begin();itr!=vec.end();++itr)
    {
        cout<<"ITR: "<<*itr<<endl;
    }
//    for(itr:vec)
 //   {
  //      cout<<"foreach"<<itr<<endl;
   // }
   int *p=&vec[0];
   if(vec.empty())
   {
        cout<<"Vector is empty"<<endl;
   }
   else
   {
        cout<<"Vector containing data"<<endl;
   }
    cout<<"SIZE: "<<vec.size();
    vector<int> vec2(vec);
    for(int i1=0;i1<vec2.size();i1++)
    {
        cout<<"INDEX---->: "<<vec2[i1]<<endl;
    }
}
