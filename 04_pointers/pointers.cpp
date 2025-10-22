
#include <iostream>
#include <string>
using namespace std;
//the function must have no return type 
//1. use aliasing
void collectname(string &a);
//2. use pointers
void collectname(string *a);
int main()
{
    /*
    pointer stage 1 will be completed today
    */
    string name="";
    //call a function to collect the name
    //collectname(name);
    collectname(&name);
    cout<<name;
    //int *q=&x;
    

    return 0;
}
void collectname(string &a){
    cout<<"Enter name";
    getline(cin, a);
}

void collectname(string *a){
    cout<<"Enter name";
    getline(cin, *a);
}
