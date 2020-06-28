#include <iostream>
using namespace std;

int main(){
  int codes[] = {44, 66, 83, 973, -977};

  for (int count : codes) {
    if ( (count/2) < 50 )
      cout << count << endl;
    else 
      cout << "invalid" << endl; }

  return 0;
}
