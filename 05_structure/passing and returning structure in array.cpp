#include <iostream>
using namespace std;
struct student_info{
    string name;
    int top_six[6];
};
student_info passing_info(student_info *a);
int main()
{
    student_info s1[1], s2;
    s1[0].name="kwan";
    for (int i=0; i<6; i++){
        cout<<"Enter mark "<<i+1<<":";
        cin>>s1[0].top_six[i];
    }
    s2=passing_info(s1); //&s1[0]
    cout<<s1[0].name<<endl;
    for (int i=0; i<6; i++){
        cout<<s1[0].top_six[i]<<" ";
    }
    cout<<endl;
    cout<<s2.name<<endl;
    for (int i=0; i<6; i++){
        cout<<s2.top_six[i]<<" ";
    }
    cout<<endl;
    //when you send structure as an array, changing inside the function 
    //will be changed in main, even if you have regular variable
    return 0;
}
student_info passing_info(student_info a[]){
    a->name="CT";
    for (int i=0; i<6; i++){
        a[0].top_six[i]=100;
    }
    return a[0];
}
