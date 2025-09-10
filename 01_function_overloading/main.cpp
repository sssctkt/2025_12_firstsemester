
#include <iostream>
using namespace std;
void printmessage(int number);
void printmessage(string sentence);
void printmessage(); 

//different type of arguments
void printmessage(int number1, int number2);
//different number of arguments
void printmessage(string name, int number);
void printmessage(int number, string name);
//same number of arguments, but in different order

//why we need function overloading--it helps to have a better name design for 
//a function which may have differnt purpose based on different criteria

//however:
//int printmessage(); you cannot have function overloading just based on 
//a different return type

int main()
{
    //function overloading and recursive functions
    //what is function overloading...c++ can choose the correct function 
    //based on the given argument
    int answer;
    printmessage(5);
    printmessage("hello");
    printmessage();
    printmessage(5,6);
    printmessage("Logan", 23);
    printmessage(100, "Logan");
    //answer=printmessage(); this is wrong
    return 0;
}
void printmessage(int number){
    cout<<"The integer is: "<<number<<endl;
}
void printmessage(string sentence){
    cout<<"The string is: "<<sentence<<endl;
}
void printmessage(){
    cout<<"This grade 12 class seems better this year\n";
}
void printmessage(int number1, int number2){
    cout<<number1<<" and "<<number2<<endl;
}
void printmessage(string name, int number){
    cout<<name<<", your favorite number is "<<number<<endl;
}
void printmessage(int number, string name){
    cout<<number<<" is the number you should avoid seeing this semester, "<<name<<endl;
}
/*
int printmessage(){
    return 3;
}*/
