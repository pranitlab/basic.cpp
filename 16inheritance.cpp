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

class derived:public Base
{
    public:
        void show()
        {
            cout<<"show of derived "<<endl;

        }

};
int main()
{
    derived d;
    d.display();
    d.show();
}