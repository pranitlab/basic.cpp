#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str="Welcome";
    int count=0;

    for (int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"length is"<<count<<endl;
    return 0;
}