//this won't be on test 

#include <iostream>
using namespace std;
void function(int arr[][3], int row, int column);
void function2(int **p, int row, int column);
int main(){
    
    int arr[2][3];
    int row=2, column=3;
    //function(arr, row, column );
    int **p; //pointer of a pointer, you are storing the address of a pointer
    p=new int*[row];
    for (int a=0; a<row; a++){
        p[a]=new int[column];
        
    }
    function2(p, row, column );
}

void function(int arr[][3], int row, int column){
    for (int a=0; a<row; a++){
        for (int b=0; b<column; b++){
            cin>>arr[a][b];
        }
    }
    for (int a=0; a<row; a++){
        for (int b=0; b<column; b++){
            cout<<arr[a][b]<<" ";
        }
        cout<<endl;
    }
}

void function2(int **arr, int row, int column){
    for (int a=0; a<row; a++){
        for (int b=0; b<column; b++){
            cin>>arr[a][b];
        }
    }
    for (int a=0; a<row; a++){
        for (int b=0; b<column; b++){
            cout<<arr[a][b]<<" ";
        }
        cout<<endl;
    }
}
