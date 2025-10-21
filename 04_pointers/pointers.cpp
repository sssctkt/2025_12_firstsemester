
#include <iostream>
using namespace std;
int main()
{
    int x=3, y=62;
    int *b, *c=&y;

    b=&x;
    *b=*c;
    *c=100;
    cout<<*b<<endl;
    cout<<*c<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
   

    return 0;
}
