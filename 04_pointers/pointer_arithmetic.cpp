
#include <iostream>
using namespace std;

int main()
{
    //today's lesson 
    //pointer, array, pointer arithmetic 
    
    //pointer arithmetic-->you can use + and - with pointer to move through the array 
    
    int a[]={1000, 100, 10, 1};
    int *p, *q=&a[3];
    p=a;
    //you can mix up pointer and array notation
    //pointer-->array notation
    cout<<p[0]<<endl; //pointer-->array notation
    cout<<p[1]<<endl; //pointer-->array notation
    cout<<*p<<endl; //pointer-->pointer notation
    cout<<*(p+1)<<endl; //pointer-->pointer notation
    
    //array-->pointer notation
    cout<<*a<<endl;  //array-->pointer notation
    cout<<*(a+1)<<endl; //array-->pointer notation
    cout<<a[0]<<endl; //array-->array notation
    cout<<a[1]<<endl; //array-->array notation
    
    //for pointer, we can even do this 
    p++;
    cout<<*p<<endl;
    cout<<p[0]<<endl;
    
    //a++; pointer is pointer and array is array
    cout<<"iterate the array...old way"<<endl;
    for (int i=0; i<4; i++){
        cout<<a[i]<<endl;
    }
    cout<<"iterate the array...new way"<<endl;
    for(p=a; p<a+4; p++){
        cout<<*p<<endl;
    }
    return 0;
}
