#include <iostream>
using namespace std;
//given the arithemetic sequence
//2, 5, 8, 11, .....
int function(int term);
int function2(int term);
int main(){
    int answer;
    answer=function2(2);
    cout<<answer;
    return 0;
}

int function(int term){
    int answer;
    answer=2+3*(term-1);
    return answer;
}
int function2(int term){
    if (term==1){
        return 2;
    }
    else{
        return function2(term-1)+3;
    }
}
