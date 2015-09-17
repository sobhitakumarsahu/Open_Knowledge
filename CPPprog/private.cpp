#include<iostream>
using namespace std;
class A
{
private:
    int roll;
public:
    int getRoll()
    {
       // cout<<"Roll No.: "<<roll;
            return roll;
    }
    void setRoll(int i)
    {
      //  cout<<"Hello"<<endl;
        roll=i;
    }
};
int main()
{
    A obj;
    obj.setRoll(1);
    cout<<obj.getRoll();
}
