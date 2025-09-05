
#include <iostream>
using namespace std;
int main()
{
    /*
    for (int i=1; i<=5; i++){
        for (int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    */
    int i=1, k;
    while(i<=5){
        k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
