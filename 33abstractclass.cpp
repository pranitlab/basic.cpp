#include<iostream>
using namespace std;
    
class Car
{
    public:
	virtual void start()=0;
	
	
};
    
class Innova:public Car
{
    public:
	void start()
	{
		cout<<"Innova Started"<<endl;
	}
	
};
    
class Swift:public Car
{
    public:
	void start()
    {
		cout<<"Swift Started"<<endl;
	}
	
};
    
int main()
{
    //Car c;
	Car *ptr=new Innova();
	ptr->start();
	ptr=new Swift();
	ptr->start();
	    
}
    