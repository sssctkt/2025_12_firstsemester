
#include <iostream>
using namespace std;
int main()
{
    //we will continue on pointers
    //this time, we will relate pointers to the array
    //before we start,we have to understand the following
    /*
    int a[]={1, 2, 3, 4, 5, 6}; //integer is 4 byte
    cout<<a[0]<<endl;
    cout<<&a[0]<<endl; //the address of a[0]
    cout<<&a[1]<<endl; //the address of a[1]
    cout<<&a[2]<<endl; //the address of a[2]
    cout<<&a[3]<<endl;
    cout<<&a[4]<<endl;
    cout<<&a[5]<<endl;
    
    cout<<a<<endl; //for number array only; if it is character array, it will print out the 
    //content instead
    */
    //1. array a has the same address as address of a[0]
    int b[3];
    cout<<b<<endl;
    cout<<&b[0]<<endl;
    cout<<&b<<endl;
    cout<<&b+1<<endl; //pointer arithmetic (add 1 -->going through the next address)
    cout<<b+1<<endl;
    cout<<&b[1]<<endl;
    //the QUESTION: is b same as &b[0]??
    //answer: most of the time, yes
    
    
    return 0;
}
