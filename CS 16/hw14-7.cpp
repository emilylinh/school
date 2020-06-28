#include <iostream> 
using namespace std; 

int main() { 
  int x(2), y(8), *p, *q; 
  p = &x;
  q = &y;  

  cout << "The address of x and the value of x is "; 
  cout << &x << " and " << x << endl; 

  cout << "The value of p and the value of *p is ";
  cout << p << " and " << *p << endl; 

  cout << "The address of y and the value of y is "; 
  cout << &y << " and " << y << endl; 

  cout << "The value of q and the value of *q is " ; 
  cout << q << " and " << *q << endl; 

  cout << "The address of p (not its contents!) is "; 
  cout << " &p" << endl; 

  cout << "The address of q (not its contents!() is "; 
  cout << "&q" << endl; 

  return 0; 
} 





 The address of x and the value of x is 0x7fff5a2e1b08 and 2
The value of p and the value of *p is 0x7fff5a2e1b08 and 2
The address of y and the value of y is 0x7fff5a2e1b04 and 8
The value of q and the value of *q is 0x7fff5a2e1b04 and 8
The address of p (not its contents!) is  &p
The address of q (not its contents!() is &q