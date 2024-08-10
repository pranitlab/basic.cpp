#include<iostream>
using namespace std;
int main()
{
    int A[10]={2,4,6,8,10,12,2,9,6,9};

    int max=INT_MIN;

     for(auto x:A)
     {
         if(x>max)
             max=x;
     }
     cout<<"Maximum number is"<<max<<endl;
     
     return 0;
}