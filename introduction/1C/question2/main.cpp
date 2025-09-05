/****
 Write a program that asks the user to enter their age in years. The program should then calculate and display the approximate age in days.
Use two functions:
One to get the age from the user (returns int, the argument should be none)
One to calculate days (returns int, the argument should be one integer value)
Sample Output:
Enter your age in years: 20
You are approximately 7300 days old.
(Assume 365 days per year – ignore leap years)
**/
#include <iostream>
#include "header.h"
using namespace std;



int main(){
    
    int x, d;
    
    x = age();
    
    d = calc(x);
    cout<<"You are approximately "<<d<<" days old.\n";
    return 0;
}
