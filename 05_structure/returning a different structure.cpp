#include <iostream>
using namespace std;
struct student_info{
    string name;
    int top_six[6];
};
struct acceptance{
  bool accept;  
};
acceptance passing_info(student_info a);

int main()
{
    student_info s1;
    acceptance u_wa;
    s1.name="kwan";
    for (int i=0; i<6; i++){
        cout<<"Enter mark "<<i+1<<":";
        cin>>s1.top_six[i];
    }
    u_wa=passing_info(s1);
    cout<<u_wa.accept;
    return 0;
}
acceptance passing_info(student_info a){
    acceptance result;
    int score;
    score=(a.top_six[0]+a.top_six[1]+a.top_six[2]+a.top_six[3]+a.top_six[4]+a.top_six[5])/6;
    if (a.name=="kwan"){
        result.accept=true;
    }
    else if (score>97){
        result.accept=true;
    }
    else{
        result.accept=false;
    }
    return result;
    
}
