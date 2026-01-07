#include <iostream>
using namespace std;
//what does this program do?
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
   for (int i=argc-1; i>=1; i--){
      cout<<argv[i]<<" ";
    }
    return 0;
}
