#include<iostream>
using namespace std;

template<class T>
T Maxim(T x,T y)
{
    if (x>y)
        return x;
    else 
        return y;
}
int main()
{
    cout<<Maxim(12,14)<<endl;
    cout<<Maxim(2.4,3.6)<<endl;
    return 0;
}