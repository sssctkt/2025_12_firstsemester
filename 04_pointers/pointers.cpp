
#include <iostream>
using namespace std;
int main()
{
    int x=3;
    int *b;
    b=&x;
    cout<<b<<endl; //address of x 
    cout<<&x<<endl; //address of x 
    cout<<x<<endl; //3 
    cout<<*b<<endl; //dereferencing-->the value of the address the pointer is holding 
    cout<<*&x<<endl; //3
   

    return 0;
}
