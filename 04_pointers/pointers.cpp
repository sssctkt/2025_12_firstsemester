
#include <iostream>

using namespace std;
int main()
{   
    //regularly:
    int x;
    x=5; //the variable x holds the value of 5;
    //& symbol has two meaning, 1. aliasing 2: address of the variable 
    //what is a pointer, a pointer is a variable, that instead of holding a value
    //it holds the address of the other variable!
    int  *b; //create a pointer b, it can hold the address of the integer variable
    b=&x; //the pointer b holds the address of x;
    cout<<x<<endl;
    cout<<&x<<endl; //address of x
    cout<<b<<endl;
    cout<<&b<<endl; //address of the pointer b
    //dereferencing
    cout<<*b<<endl; //it will print the value of the address of the variable that it 
    //is holding
    return 0;
}


