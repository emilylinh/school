#include <iostream> 
using namespace std; 
int main() { 
  int x(12); 
  while (x>=1){ 
    cout<< x<< " "; 
    if (!(x%3)){
      cout<< "Buzz! "; 
      if ((x%2)==0) cout<<"Fizz!"; 
    }
    else cout<<"..."; 
    cout<<endl; 
    x--;
  }
  return 0; 
} 
