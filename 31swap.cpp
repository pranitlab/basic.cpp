#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str1="programming";
    string str2="cpp ";

    str1.swap(str2);

    cout<<str1<<str2<<endl;

    return 0;
}