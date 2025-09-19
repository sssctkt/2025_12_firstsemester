#include <iostream>
using namespace std;
void print_ascending(int number);

int main() {
    int number=5;
    print_ascending(number);
    return 0;
}

void print_ascending(int number){
    if (number==1){
        cout<<number<<endl;
    }
    else{
        print_ascending(number-1);
        cout<<number<<endl;
    }
}
