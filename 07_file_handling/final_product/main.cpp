//what does this program do?
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
    ifstream fin;
    
    ofstream fout;
    string file_input=argv[1];
    
    char choice=argv[2][0]; //string character conversion
    
    
    
    string file_output=argv[3];
    
    char letter;
    
    int count=0;
    if (argc!=4){
       cout<<"filename inputfile letter outputfile"<<endl;
       
    }
    fin.open(file_input);
    if (!fin.is_open()){ //how to trigger this line?
        cout<<"file cannot be opened";
    }
    else{
        while(true){
            fin.get(letter);
            if (letter==choice){
                count+=1;
            }
            if (fin.eof())break;
        }
    }
    fin.close();
    fout.open(file_output); //why we don't need something like fout.is_open()?
    fout<<count;
    fout.close();
    return 0;
}
