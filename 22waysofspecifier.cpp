#include<iostream>
using namespace std;

class parent
{
    private: int a;
    protected: int b;
    public: int c;

    void funparent()
    {
        a=10;
        b=5;
        c=15;

    }
};

class child: private child
{
    private:

    protected:
    
    public:

    void funchild()
    {
        //a=10;
        b=5;
        c=15;
    }
};

class GrandChild : public child
{
    public:
    void funGrandChild()
    {
        //a=10;
        //b=5;
        //c=20;
    }
    
};
    
int main()
{
    // Child c;
    //c.a=10;
    //c.b=5;
    //c.c=20;
        
}
    