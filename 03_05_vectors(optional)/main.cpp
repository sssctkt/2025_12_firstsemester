#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a={3, 2, 1};
    sort(a.begin(), a.end());
    //method 1 to go through the vector
    vector<int>::iterator it = a.begin();
    for (it; it!=a.end(); it++){
        //this time we can put it++ at the top because we are not planning to delete anything
        cout<<*it<<" ";
    }
    cout<<endl;
    //method 2 using old notation
    for (int i=0; i<a.size(); i++){
        cout<<a[i];
    }

    return 0;
}
