#include <iostream> //for cout/cin 
using namespace std;

/*
Function prototypes: 
-sumOfArr calculates the total sum of the numbers in the array.
-printNumsAndSum displays each number of the array and the total sum
*/
int sumOfArr(int a[], int size);
void printNumsAndSum(int a[], int size);

int main(){
  int myNums_size(10), number;
  int myNums[myNums_size];

  for (int i=0; i < myNums_size; i++){
    cout << "Enter #" << i+1 << " "; //to allow user to keep track of the total numbers they have inputted while inputing 
    cin >> number;
    myNums[i] = number;
  }
  printNumsAndSum(myNums, myNums_size);

  return 0;
}

//Function Definition
int sumOfArr(int a[], int size){
  int sum(0);

  for (int i=0; i < size; i++)
    sum += a[i];

  return sum;
}

//Function Definition 
void printNumsAndSum(int a[], int size){
  for (int i=0; i < size; i++)
    cout << "Number " << i+1 << ": " << a[i] << endl;

  cout << "Total sum: " << sumOfArr(a, size) << endl;
}
