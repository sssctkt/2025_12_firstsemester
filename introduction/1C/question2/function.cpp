#include "header.h"
#include <iostream>
int age(){
   int x;
   std::cout<<"Enter age. \n";
    
    std::cin>>x;
    return x;
}
int calc(int y){
    y = y*365;
    return y;
}
