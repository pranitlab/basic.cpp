#include<iostream>
#include<string>

using namespace std;
int main()
{
    string email="pranit2408@gmail.com";
    int i=(int)email.find('@');

    string uname=email.substr(0,10);

    cout<<"username is "<<uname<<endl;

    return 0;
}