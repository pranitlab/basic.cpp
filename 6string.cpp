#include<iostream>
using namespace std;
int main()
{
    char S[100];
    cout<<"Enter your name";
    cin.get(S,100);

    cout<<"welcome"<<S<<endl;

    cin.ignore();

    char S2[100];
    cout<<"Enter your name again";
    cin.get(S2,100);

    cout<<"welcome"<<S2<<endl;
}