#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  const int DIM1 = 10, DIM2 = 5;
  int arr[DIM1][DIM2], number, ind1(0), ind2(0);
  srand(time(NULL));

  for (int i = 0; i < DIM1; i++) {
    for (int j = 0; j < DIM2; j++) {
      arr[i][j] = rand() % 50;
    }}

  cout << "Please enter a number between 0 and 49: " << endl;
  cin >> number; 

  for (int i = 0; i < DIM1; i++) {
    for (int j = 0; j <DIM2; j++) {
      if (arr[i][j] == number) {
	ind1 = i;
	ind2 = j; }
    }}

  if ((ind1 != 0) && (ind2 != 0)) 
    cout << ind1 << " " << ind2 << endl; 
  else 
    cout << "I did not find this number." << endl;

  return 0;
}
