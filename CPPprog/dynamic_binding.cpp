#include<iostream>
using namespace std;
class Animal
{
public:
    virtual void speak()
    {
        cout<<"Animal speaks\n";
    }
    virtual void move()
    {
        cout<<"Animal moves\n";
    }
};
class Dog:public Animal
{
public:
    Dog()
    {

    }
    ~Dog()
    {

    }
    virtual void speak()
    {
        cout<<"Dog barks\n";
    }
    virtual void move()
    {
        cout<<"Runs at 40 KMPH\n";
    }
};
class Cat:public Animal
{
public:
    Cat()
    {

    }
    ~Cat()
    {

    }
    virtual void speak()
    {
        cout<<"Cat Mews\n";
    }
    virtual void move()
    {
        cout<<"Runs at 30KMPH\n";
    }
};
class Horse:public Animal
{
public:
    Horse()
    {

    }
    ~Horse()
    {

    }
    virtual void speak()
    {
        cout<<"Horse neighs\n";
    }
    virtual void move()
    {
        cout<<"Runs at 80KMPH\n";
    }
};
class Others:public Animal
{
public:

    Others()
    {

    }
    ~Others()
    {

    }
};
int main()
{
    Animal *objarr[4];
    int inp;
    for(int i=0;i<4;i++)
    {
        cout<<"1: for horse \n2: for cat \n3: for Dog\nEnter (1/2/3) as input";
        cin>>inp;
        if(inp==1)
            objarr[i]=new Horse;
        else if(inp==2)
            objarr[i]=new Cat;
        else if(inp==3)
            objarr[i]=new Dog;
        else if(inp==4)
            objarr[i]=new Others;
    }
    for(int j=0;j<4;j++)
    {
        objarr[j]->speak();
        objarr[j]->move();
    }
}
