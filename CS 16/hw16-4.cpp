#include <iostream>
#include <cmath> 
using namespace std;

int arithmeticSeq(int n) {
  int i(0);

  if (n == 1) 
    return 3;
  else {
    i++;
    return arithmeticSeq(n) + pow(2, 3+(i-1));
  }
}

int main() {
  int n, num;

  cout << "Which element of the sequence would you like to know?\n";
  cin >> n;
  num = n;

  cout << "Element number " << num << " in the sequence is ";
  cout << arithmeticSeq(n) << ".\n";
  
  return 0;
}

  
