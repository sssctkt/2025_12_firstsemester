
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //what is file handling??
    //It allows you to interact with .txt file
    
    //we want to read the file and we want to write the file
    //read the file, we need
    //next step, I want to output this in a file
    ifstream fin;  //similiar to cin 
    ofstream fout;
    fin.open("input.txt"); //how you open a file
    string line;
    int answer=0, item;
    while(true){
    fin>>item;
    answer+=item;
    if (fin.eof()) break;
    }
    
    fin.close();
    fout.open("output.txt",ios::app);
    fout<<answer;
    fout.close();
    return 0;
}
