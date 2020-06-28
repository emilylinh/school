#include <iostream> // for cin, cout
#include <fstream>  // for ifstream
#include <cstdlib>  // for exit
using namespace std;

int main() { 
  ifstream fin;
  fin.open("myinput.txt");
  if (fin.fail()) {
    cerr << "Input file opening failed.\n";
    exit(1);
  }
    
  //
  // getline as used with file input, ifstream
  //
  cout << "I will now read all the lines inside the input file, myinput.txt\n";
  string line = "";
  while (!fin.eof()) {
    getline(fin, line);
    if (line != "")
      cout << line << endl;
  }
  fin.close();

  return 0;
}
