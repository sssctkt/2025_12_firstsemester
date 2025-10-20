
#include <iostream>
void does_it_change(int &y); //& symbol has two meaning 1. aliasing
//pro: you don't have to copy
//cons:when you call the function, you don't know what it is
using namespace std;
int main()
{   
    int x=3;
    does_it_change(x);
    cout<<x;
    return 0;
}

void does_it_change(int &y){
    y=1000;
    
}
