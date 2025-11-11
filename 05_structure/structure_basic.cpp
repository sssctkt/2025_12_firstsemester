
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct student{
    //array-->store elements of one type 
    //structure-->store elements of many type
    int grade;
    char lastname[50];
    string firstname;
    int student_number;


};
int main()
{
    student s1[11];
    s1[0].firstname="CT";
    s1[0].student_number=9931;
    s1[0].grade=80;
    strcpy(s1[0].lastname,"Kwan");
    
    
    cout<<s1[0].firstname<<" "<<s1[0].student_number<<endl;
    cout<<s1[0].lastname;
    
    return 0;
}
