#include <iostream>
using namespace std;
int linearsearch(int a[],int length, int item);
int main(){
    int item, answer;
    int a[]={5, 7, 8, 9, 1};
    int length=sizeof(a)/sizeof(a[0]);
    
    cout<<"Which number do you want to search";
    cin>>item;
    answer=linearsearch(a,length,item);
    
    if (answer!=-1){
        cout<<"it is at index: "<<answer;
    }
    else{
        cout<<"The item doesn't exist";
    }
    return 0;
}

int linearsearch(int a[],int length, int item){
    //for the next test, you are expected to be able to complete
    //linear search
    for (int i=0; i<length; i++){
        if (a[i]==item){
            return i;
        }
    }
    return -1;
}
