#include<iostream>
using namespace std;

class base
{
    public:
    base(){cout<<"non param base"<<endl;}
    base(int x){cout<<"param base"<<"x"<<endl;}

};
class Derived:public base
{
    public:
    Derived(){cout<<"non param derived"<<endl;}
    Derived(int y){cout<<"param derived"<<"y"<<endl;}

    Derived(int x,int y):base(x)
    {
        cout<<"param of Derived"<<y<<endl;
        cout<<"param base"<<x<<endl;
    }
};
int main()
{
    Derived d(5,10);
}