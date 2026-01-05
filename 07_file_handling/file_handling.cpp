
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //what is file handling??
    //It allows you to interact with .txt file
    
    //we want to read the file and we want to write the file
    //read the file, we need
    ifstream fin;  //similiar to cin 
    fin.open("input.txt"); //how you open a file
    string line;
    getline(fin, line);
    cout<<line;
    fin.close();
    return 0;
}
