#include "class.h"
#include <iostream>
using namespace std;
void fraction::setvalue(int n, int d){
    //the object that calls the function, its value CAN be changed
    num=n;
    den=d;
}
void fraction::getvalue(){
    cout<<num<<"/"<<den;
}
bool fraction::bigger(fraction f){
    
    if ((f.num*1.0/f.den)>((*this).num*1.0/den)){
        return false;
    }
    return true;
}
fraction fraction::displaybigger(fraction f){
     if ((f.num*1.0/f.den)>(this->num*1.0/den)){
        return f;
    }
    return *this; //*this means the object that calls the function
}
fraction fraction::additon(fraction f)
{
    fraction x;
    x.num=(f.num*(*this).den)+((*this).num*f.den);
    x.den=(den*f.den);
    return x;
    
}
