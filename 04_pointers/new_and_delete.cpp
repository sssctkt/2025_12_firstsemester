
#include <iostream>
#include <algorithm>
using namespace std;
int *return_pointer();
int main()
{   
    
    int *p;
    
    p=return_pointer();
    cout<<*p<<endl;
    delete p;
    return 0;
}
int *return_pointer(){
    int *q;
    q=new int(243);
    return q;
}
