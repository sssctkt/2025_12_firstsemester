
#include <iostream>
#include <string>
#include "class.h"
using namespace std;

int main()
{
    
    //class and object-oriented programming 
    //what is object-oriented programming-->an object can have its own data and functions
    int x{3}; //this is how we also can initialize the variables
    cout<<x<<endl;
    fraction f3, f4,answer, f5{7,8}; //we need something called "custom constructor"
    f3.getvalue(); //I want it to be 0/1
    cout<<endl;
    f5.getvalue();
    cout<<endl;
    //to make it work
    f3.setvalue(2,5); //object f3 that calls the function
    cin>>f4;
    answer=f3.displaybigger(f4);
    answer.getvalue();
    cout<<" is the bigger one"<<endl;
    answer=f3+(f4);
    cout<<"The sum is: ";
    
    answer.getvalue();
    cout<<endl;
    answer=f3-(f4);
    cout<<"The difference is: ";
    answer.getvalue();
    cout<<endl;
    
    answer=f5+x;
    cout<<"The sum is: ";
    answer.getvalue();
    cout<<endl;
    
    answer=x+f5;
    cout<<"The sum is: ";
    answer.getvalue();
    cout<<endl;
    
    answer=addition(x,f5);
    cout<<"The sum is: ";
    cout<<answer;
    cout<<endl;
    return 0;
}
