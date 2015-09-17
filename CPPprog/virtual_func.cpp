#include<iostream>
using namespace std;
class animal
{
public:
    animal():mAge(1),mWeight(1)
    {
        cout<<"Constructor"<<endl;
    }
    int getAge() const { return mAge;}
    void setAge(int age){mAge=age;}
    int getWeight() const {return mWeight;}
    void setWeight(int weight){mWeight=weight;}
    virtual void speak()
    {
        cout<<"Animal speaks!!!"<<endl;
    }
    virtual void movement()
    {
        cout<<"Animal moves!!"<<endl;
    }
protected:
    int mAge;
    int mWeight;
};
class dog:public animal
{
public:
    dog()
    {
        mBreed="Alcicians";
    }
    void speak()
    {
        cout<<"Dog barks"<<endl;
    }
    void movement()
    {
        cout<<"runs @ 50 KMPH!!!"<<endl;
    }
protected:
    string mBreed;
};
int main()
{
    animal *panimal = new dog;
    panimal->speak();
    panimal->movement();
}
