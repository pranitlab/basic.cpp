#include<iostream>
using namespace std;

int Max(int x,int y,int z=0)
{
    if (x>y && x>z)
        return x;
    else if (y>z)
        return y;
    else
        return z;
}

int main()
{
    cout<<Max(10,20)<<endl;
    cout<<Max(10,20,30)<<endl;

}
