#include <iostream> 
#include <fstream> 
using namespace std;

int main(){
  ifstream tin;
  tin.open("t.txt");
  char c = ' ';
  tin.get(c);
  while (!tin.eof()) {
    if ( (c != 'e') && (c != 'a') ) 
      cout << c;
    tin.get(c); }  // end while
  return 0;
}
