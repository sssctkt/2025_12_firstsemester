
#include <iostream>
#include <string>
using namespace std;
//structure everything is assumed to be public
class fraction { //everything is assumed to be private
//private, means you cannot access it in main 
//public, means you can access it in main
   private:
    int num;
    int den;
   public:
    void setvalue(int n, int d); //class member function, it can access the data even in private
    void getvalue();
    bool bigger(fraction f); //this fraction f is not the one that calls the function, it's like a regular variable
};
int main()
{
    
    //class and object-oriented programming 
    //what is object-oriented programming-->an object can have its own data and functions
    fraction f3, f4;
    f3.setvalue(3, 5); //object f3 that calls the function
    f4.setvalue(4,5);
    if(f3.bigger(f4)==true){
        f3.getvalue();
        cout<<"is bigger";
    }
    else{
        f4.getvalue();
        cout<<"is bigger";
    }
    return 0;
}

void fraction::setvalue(int n, int d){
    //the object that calls the function, its value CAN be changed
    num=n;
    den=d;
}
void fraction::getvalue(){
    cout<<num<<"/"<<den;
}
bool fraction::bigger(fraction f){
    if ((f.num*1.0/f.den)>(num*1.0/den))
}
