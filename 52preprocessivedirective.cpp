#include<iostream>
using namespace std;

#define max(x,y) (x>y?x:y)
#define msg(x) #x

#ifdef PI
    #define PI 3
#endif
int main()
{
    cout<<max(10,20)<<endl;
    cout<<msg(hello)<<endl;
}