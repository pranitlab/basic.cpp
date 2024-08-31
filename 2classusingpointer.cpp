#include<iostream>
using namespace std;

class rectangle
{
    public:
    int breath;
    int length;

    int area()
    {
        return length*breath;
    }
    int perimeter()
    {
        return 2*(length+breath);
    }
    
};
int main()
{
    rectangle r1;
    rectangle *ptr;
    ptr=&r1;
    ptr->length=10;
    ptr->breath=5;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;
}