#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str="Welcome";
    string::iterator it;
    int count=0;

    for (it=str.begin();it!=str.end();it++)
    {
        count++;
    }
    cout<<"length is"<<count<<endl;
    return 0;
}