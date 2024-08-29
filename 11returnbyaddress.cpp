#include<iostream>
using namespace std;

int *fun(int n)
{
    int *p=new int [5];
    for(int i=0;i<5;i++)
    {
        p[i]=5*i;
    }
    cout<<p<<endl;
    return p;

}
int main()
{
    int *q=fun(5);
    for(int i=0;i<5;i++)
    cout<<q<<endl;

    return 0;
}