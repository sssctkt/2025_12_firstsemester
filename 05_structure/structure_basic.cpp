
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct student{
    //array-->store elements of one type 
    //structure-->store elements of many type
    int grade;
    char lastname[50]; //array
    string firstname;
    int student_number;

};
int main()
{
    student s1, s2, *s3;
    s1.firstname="CT";
    s1.student_number=9931;
    s1.grade=80;
    strcpy(s1.lastname,"Kwan");
    //for structure, they want to treat it like a regular variable
    //EVEN if you have array inside a structrue
    s2=s1;
    s3=&s1;
    strcpy(s1.lastname, "Quan");
    s1.grade=20;
    cout<<s1.firstname<<" "<<s1.student_number<<endl;
    cout<<s1.lastname<<" "<<s1.grade<<endl;
    cout<<s2.firstname<<" "<<s2.student_number<<endl;
    cout<<s2.lastname<<" "<<s2.grade<<endl;
    cout<<s3->firstname<<" "<<s3->student_number<<endl;
    cout<<s3->lastname<<" "<<s3->grade<<endl;
    return 0;
}
