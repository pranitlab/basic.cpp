#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter n";
    cin>>n;

    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum n number is"<<sum;

    return 0;
}