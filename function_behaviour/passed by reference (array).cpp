#include <iostream>
using namespace std;
void does_it_change_array(int number[]);
int main(){
    
    int number[5]={1, 2, 3, 4, 5};
    does_it_change_array(number); //passed by reference
    cout<<number[0]<<endl;
    cout<<"The address of the variable in main is: "<<&number[0]<<endl;
    
    
    return 0;
}
void does_it_change_array(int number[]){
    number[0]=1000;
    cout<<number[0]<<endl;
    cout<<"The address of the variable inside the function is: "<<&number[0]<<endl;
}