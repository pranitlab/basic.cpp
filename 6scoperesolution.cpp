#include<iostream>
using namespace std;
    
class Rectangle
{
    private:
	    int length;
	    int breadth;
    public:
        Rectangle();
        Rectangle(int l,int b);
        Rectangle(Rectangle &r);
        int getLength() {return length;}
        int getBreadth() {return breadth;}
        void setlength(int l);
        void setBreath(int b);
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();

};
int main()
{

}

Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l, int b)
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
