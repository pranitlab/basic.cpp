#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str="Hello";

    str.resize(50);
    cout<<str.capacity()<<endl;

    cout<<str<<endl;
    return 0;
}