#include<iostream>
using namespace std;
int main()
{
    int A[10]={-2,-4,-6,-8,-10,-12,-2,-9,-6,-9};

    int min=INT_MAX;

     for(auto x:A)
     {
         if(x<min)
             min=x;
     }
     cout<<"Minimum number is"<<min<<endl;
     
     return 0;
}