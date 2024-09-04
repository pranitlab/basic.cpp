#include<iostream>
using namespace std;

class Base
{
    public:
        void display()
        {
            cout<<"display of base"<<endl;
        }
};

class derived:public Base {};
int main()
{
    derived d;
    d.display();
}