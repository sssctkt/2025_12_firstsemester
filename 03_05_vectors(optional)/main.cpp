#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void doesitchange(vector<int> a);
//for vector, it will behave like a regular variable
//change it in the function will not affect the main
int main()
{
    vector<int> a={3, 2, 1};
    doesitchange(a);
    cout<<a[0]<<endl;
    return 0;
}
void doesitchange(vector<int> a){
    a[0]=1000;
    cout<<a[0]<<endl;
}
