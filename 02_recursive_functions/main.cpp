#include <iostream>
using namespace std;
void print_descending(int number);

int main() {
    int number=5;
    print_descending(number);
    return 0;
}

void print_descending(int number){
    if (number==1){
        cout<<number<<endl;
    }
    else{
        cout<<number<<endl;
        print_descending(number-1);
        
    }
}
