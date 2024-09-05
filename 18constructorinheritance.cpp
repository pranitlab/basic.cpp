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
};
int main()
{
    Derived d;
}