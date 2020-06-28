#include <iostream> 
#include <cmath> 
using namespace std; 

int main(){ 
  double s(0.0); 
  int k(0); 
  cout<< "Enter k: "; 
  cin>> k; 
  for (int i=0; i<=k; i++) 
    {
      s = s + (pow(2, i)/pow(3, i));}
  cout <<"Series converges to: "<< s <<endl; 
  return 0; 
} 
