#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter n";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        if (n%1==0)
            count++;
    }
    if(count==2)
        cout<<"it's prime\n";
    else
        cout<<"not prime\n";
}