#include<iostream>
using namespace std;

class Rectangle
{
    public:
    void area()
    {
        cout<<"area of rectangle"<<endl;
    }
    
};
class cuboid:public Rectangle
{
    public:
    void volume()
    {
        cout<<"cuboid volume"<<endl;
    }

};
int main()
{
    cuboid c;
	Rectangle *p=&c;
	p->area();
	//p->volume(); 	
		      
	return 0;
};