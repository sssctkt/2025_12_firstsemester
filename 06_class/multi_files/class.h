#include <iostream>
using namespace std;
//structure everything is assumed to be public
class fraction { //everything is assumed to be private
//private, means you cannot access it in main 
//public, means you can access it in main
   private:
    int num;
    int den;
    void simplify();
    
   public:
    //what is a constructor, a constructor is to create an object 
    //luckily, they give it to you if you don't have ONE
    //constructor (always have 2 constructors--one default, one custom)
    //you need to manually make them
    fraction();
    fraction(int n, int d);
    //destructor
    ~fraction(); //delete the object when it is done
    
    
    
    //class-member function
    //the object to call the function
    void setvalue(int n, int d); //class member function, it can access the data even in private
    void getvalue();
    bool bigger(fraction f); //this fraction f is not the one that calls the function, it's like a regular variable
    fraction displaybigger(fraction f);
    fraction addition(fraction f);
    fraction operator+(fraction f);
    fraction operator-(fraction f);
    fraction operator+(int y);
    
    //friend
    friend fraction operator+(int y, fraction f);
    friend fraction addition(int y, fraction f);
    friend ostream& operator<<(ostream &os, fraction &f);
    friend istream& operator>>(istream &os, fraction &f);
    
};
