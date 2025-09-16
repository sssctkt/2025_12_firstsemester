#include <iostream>
using namespace std;
void does_it_change_regular(int number);
int main(){
    
    int number=5;
    does_it_change_regular(number); //passed by value
    cout<<number<<endl;
    cout<<"The address of the variable in main is: "<<&number<<endl;
    
    
    return 0;
}
void does_it_change_regular(int number){
    number=1000;
    cout<<number<<endl;
    cout<<"The address of the variable inside the function is: "<<&number<<endl;
}
