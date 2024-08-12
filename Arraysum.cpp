#include<iostream>
using namespace std;
int main()
{
    int A[7]={2,4,6,8,10,12,13};

    int sum=0;
     for(int i=0;i<7;i++)
     {
        sum+=A[i];
     }
     cout<<"sum of all element"<<sum<<endl;
     
     return 0;
}