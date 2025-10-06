#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> res={3, 1, 2, 3, 3, 3,};
    //in vector we have something called iterator to go through the vector
    vector<int>::iterator it = res.begin(); //beginning of the vector
    for(it ; it != res.end(); )//end means the end of the vector
    {
        if (*it==3){ //we need * to show the element
        it = res.erase(it);
            //this is pretty complicated, but using erase will return the next valid
            //iterator
        }
       else{
           it++; //it will go to the next iterator
       }
       //the reason why we can't use it++ at the beginner of the for loop is that
       //we can't go beyond the end of the vectors
       //since it++ at the control mechanism of the for loop means it will do ++ regardless
    }
    //put out the outcome
    it=res.begin();
    for (it; it!=res.end(); it++){
        //this time we can put it++ at the top because we are not planning to delete anything
        cout<<*it<<" ";
    }
}
