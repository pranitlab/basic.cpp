#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str="today";
    string::iterator it;

    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;

    return 0;
}