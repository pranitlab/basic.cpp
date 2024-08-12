#include<iostream>
using namespace std;
int main()
{
    int A[10]={2,4,6,8,10,12,2,9,6,9};
    int key;

    cout<<"enter the serach key";
    cin>>key;

    for (int i=0;i<10;i++)
    {
        if(key==A[i])
        {
        cout<<"key element found at"<<i<<endl;
        exit(0);
        }
    }
    cout<<"key element not found"<<endl;
     return 0;
}