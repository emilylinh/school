#include <iostream>
using namespace std;

int main(){
  int arr[7];

  for (int i = 0; i <= 10; i++){
    if (i < 3) 
      arr[i] = 'a';
    else
      arr[i] = 'z';
    cout << arr[i] << endl; }

  return 0;
} 
