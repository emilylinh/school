#include <iostream>
using namespace std;

int main() {
  int array_size = 4, *a ;
  
  a = new int[array_size];

  int *p = a;

  for(int i=0; i< array_size; i++) {
    *(a+i) = 2*i;
    p[0] = 10;
    for(int i=0; i< array_size; i++){
      cout<<a[i]<<" ";
      cout<<endl;
    }
  }
 
  return 0;
}
