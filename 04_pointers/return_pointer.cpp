
#include <iostream>
#include <algorithm>
using namespace std;
//you can actually return a pointer!!!
int *maximum(int *arr, int length);
int main()
{   
    //goal: I want to find the maximum value in an array
    int b[]={1, 6, 7, 2, 90, 21, 63, 82, 19};
    int size=sizeof(b)/sizeof(b[0]);
    int *p;
    
    p=maximum(b,size ); //similar to p=&x;
    cout<<*p<<endl;
    return 0;
}
int *maximum(int *arr, int length){
    sort(arr, arr+length); //sort the array
    return &arr[length-1];
}
