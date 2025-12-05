
#include <iostream>
#include <string>
#include "class.h"
using namespace std;

int main()
{
    
    //class and object-oriented programming 
    //what is object-oriented programming-->an object can have its own data and functions
    fraction f3, f4,answer;
    f3.setvalue(2,5); //object f3 that calls the function
    f4.setvalue(4,5);
    answer=f3.displaybigger(f4);
    answer.getvalue();
    cout<<" is the bigger one"<<endl;
    answer=f3+(f4);
    cout<<"The sum is: ";
    answer.getvalue();
    return 0;
}
