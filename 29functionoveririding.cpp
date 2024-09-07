#include<iostream>
using namespace std;

class base
{
    public:
    void fun()
    {
        cout<<"fun of base"<<endl;

    }
};

class Derived:public base
{
    public:
    void fun()
    {
        cout<<"fun of base"<<endl;

    }
};

int main()
{
    Derived d;
    d.fun();
}