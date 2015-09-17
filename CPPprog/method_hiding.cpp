/*
    If you override any child class method, parent will hide all the method, over
*/
#include<iostream>
using namespace std;
class Animal
{
public:
    void speak()
    {
        cout<<"Animal speaks\n";
    }
    void move()
    {
        cout<<"Animal Moves\n";
    }
    void move(int steps)
    {
        cout<<"Animal moves"<<steps<<"steps"<<"\n";
    }
    void move(int steps,string ways)
    {
        cout<<"Animal moves"<<steps<<"steps"<<ways<<"way\n";
    }
};
class Dog:public Animal
{
public:
    void speak()
    {
        cout<<"Dog barks\n";
    }
    void move()
    {
        cout<<"Dog runs @40 KMPH\n";
    }

};
int main()
{
    Animal a;
    a.move();
    a.move(10);
    a.move(10,"forward");
    Dog d;
    d.move();
    d.speak();
//    d.move(10); // ==> Represents method Hiding.
}
