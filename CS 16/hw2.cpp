#include <iostream> 
#include <string> 
using namespace std; 
int main() 
{
  int num, result; 
  string name; 
  cout<< "enter your name:\n"; 
  cin>> name; 
  cout<< "enter your fav num:\n"; 
  cin>> num; 
  result = num* 5; 
  result = result*5; 
  result = result*5;
  cout<< result; 
  return 0;
} 
