
#include <iostream>
using namespace std;
int main()
{
    //today's lesson 
    //pointer, array, pointer arithmetic 
    
    //pointer arithmetic-->you can use + and - with pointer to move through the array 
    
    int a[]={1000, 100, 10, 1};
    int *p, *q=&a[3];
    p=&a[0];
    cout<<a[3]-a[0]<<endl;
    cout<<&a[3]-&a[0]<<endl;
    cout<<*q-*p<<endl;
    cout<<q-p<<endl;
    cout<<p-q<<endl;
    return 0;
}
