#include "class.h"
#include <iostream>
using namespace std;
//constructor
fraction::fraction(){
    
}
fraction::fraction(int n, int d){
    num=n;
    den=d;
}
fraction::~fraction(){
    
}

//class-member function
void fraction::setvalue(int n, int d){
    //the object that calls the function, its value CAN be changed
    num=n;
    den=d;
}
void fraction::getvalue(){
    simplify();
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
fraction fraction::addition(fraction f)
{
    fraction x;
    x.num=(f.num*(*this).den)+((*this).num*f.den);
    x.den=(den*f.den);
    return x;
    
}
fraction fraction::operator+(fraction f){
    fraction x;
    x.num=(f.num*(*this).den)+((*this).num*f.den);
    x.den=(den*f.den);
    return x;
}

fraction fraction::operator+(int y){
    fraction x;
    x.num=(y*(*this).den)+((*this).num);
    x.den=(den);
    return x;
}

//friend
fraction operator+(int y, fraction f){
    fraction x;
    x.num=(y*(f).den)+((f).num);
    x.den=(f.den);
    return x;
}

void fraction::simplify(){
    int answer, divider;
    if (abs(num)<abs(den)){
        answer=abs(num);
    }
    else{
        answer=abs(den);
    }
    for (divider=answer; divider>=1; divider--){
        if ((num%divider==0) && (den%divider==0))break;
    }
    num=num/divider;
    den=den/divider;
}
fraction fraction::operator-(fraction f){
    fraction x;
    x.num=((*this).num*f.den)-(f.num*(*this).den);
    x.den=(den*f.den);
    return x;
}
