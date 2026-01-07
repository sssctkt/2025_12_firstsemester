//what does this program do?
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    string file_input;
    cout<<"Enter the file input name: ";
    getline(cin, file_input);
    char choice;
    cout<<"Enter the letter you want to count: ";
    cin.get(choice);
    cout<<"Enter the file output name: ";
    cin.ignore();
    string file_output;
    getline(cin, file_output);
    char letter;
    
    int count=0;
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
