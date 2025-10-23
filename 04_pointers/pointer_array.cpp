
#include <iostream>
using namespace std;
int main()
{
    
    int b[3]={1, 2, 3};
    
    int *p;
    p=&b[1];//p=&b[0];//p=b;
    cout<<*p<<endl;
    
    //preview
    cout<<p[1]<<endl;
    cout<<*(p+1)<<endl;
    
    
    return 0;
}
