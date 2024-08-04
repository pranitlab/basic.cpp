#include<iostream>
using namespace std;
int main()
{
    int roll;
    cout<<"Enter your roll number";
    cin>>roll;

    if(roll>1)
    {
        cout<<"valid roll number";
    }
    else
    {
        cout<<"Invalid roll number";
    }
    return 0;
}