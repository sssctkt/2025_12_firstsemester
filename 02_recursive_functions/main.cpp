#include <iostream>
using namespace std;
int factorial_nonrecursive(int term);
int factorial_recursive(int term);
int main(){
    int answer;
    answer=factorial_recursive(6);
    cout<<answer;
    return 0;
}
int factorial_nonrecursive(int term){
    int result=1;
    for (int z=1; z<=term; z++)
    {
        result*=z;
    }
    
    return result;
}
int factorial_recursive(int term){
    //exit clause
    if (term==1){
        return 1;
    }
    else{
        return term*factorial_recursive(term-1);
    }
}
