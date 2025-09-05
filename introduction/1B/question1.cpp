
#include <iostream>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter a phone number: ";
    getline(cin, sentence);
    for (int i=0; i<sentence.size(); i++){
        if (sentence[i]>='A'&& sentence[i]<='C'){
            cout<<"2";
        }
        //complete the rest;
        else{
            cout<<sentence[i];
        }
    }

    return 0;
}
