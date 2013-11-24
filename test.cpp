#include <iostream> 
#include <cstdlib> 
using namespace std;

int main(int argc, char* argv[]) { 
// second version

   for(int i = 1; i < argc; i++) 
      cout << atoi(argv[i]) << endl; 
   return 0; 



}
