#include <iostream>
using namespace std;
int main()
{
    int age;
    string answer;
    cin>>age;
    /*
    if (age>=19){
        answer="you can drink";
        
    }
    else{
        answer="you can drink....soda";
    }*/
    answer=(age>=19)?"you can drink":"you can drink....soda";
    /*tenrary operator*/
    cout<<answer;
    return 0;
}
