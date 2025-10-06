//today's lesson vectors
//vectors will not be on any evaluations 
//however, during evaluations, if you think vectors are easier
//you can use them on any evaluations
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    //what is a vector??
    //In C++, vectors are dynamic arrays that can change its size during program execution, unlike fixed-size arrays. 
    //While learning vectors in C++ is not mandatory, they offer advantages over arrays due to their dynamic resizing capability. 
    
    //how to add elements
    numbers.push_back(4);
    cout<<numbers[0];
    //the size of the vectors
    cout<<endl<<numbers.size();
    
    //add another element
    numbers.push_back(5);
    cout<<endl<<numbers[1];
    //and the size changes
    cout<<endl<<numbers.size()<<endl;
    
    //to print everything in the vectors
    for (int i=0; i<numbers.size(); i++){
        cout<<numbers[i]<<" ";
    }
    return 0;
}
