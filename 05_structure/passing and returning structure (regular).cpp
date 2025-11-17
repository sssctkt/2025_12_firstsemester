#include <iostream>
using namespace std;
struct student_info{
    string name;
    int top_six[6];
};
student_info passing_info(student_info a);
int main()
{
    student_info s1, s2;
    s1.name="kwan";
    for (int i=0; i<6; i++){
        cout<<"Enter mark "<<i+1<<":";
        cin>>s1.top_six[i];
    }
    s2=passing_info(s1);
    cout<<s1.name<<endl;
    for (int i=0; i<6; i++){
        cout<<s1.top_six[i]<<" ";
    }
    cout<<endl;
    cout<<s2.name<<endl;
    for (int i=0; i<6; i++){
        cout<<s2.top_six[i]<<" ";
    }
    cout<<endl;
    //structure is treated like a regular variable even if it has 
    //array inside
    return 0;
}
student_info passing_info(student_info a){
    a.name="CT";
    for (int i=0; i<6; i++){
        a.top_six[i]=100;
    }
    return a;
}
