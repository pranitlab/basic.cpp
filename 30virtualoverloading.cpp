#include<iostream>
using namespace std;

class base
{
    public:
     virtual void fun()
    {
        cout<<"fun of base"<<endl;

    }
};

class Derived:public base
{
    public:
     void fun()
    {
        cout<<"fun of derived"<<endl;

    }
};

int main()
{
    Derived d;
    base *ptr=&d;
    ptr->fun();
}