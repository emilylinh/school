#include <iostream> //for cout/cin
#include <cmath> //for exponents
using namespace std;

/* Function Prototypes:
-aver: Calculated the averages of the numbers in the array 
-stddev: Used the average from above and the numbers in the arrays to find the standard deviation 
 */
double aver(double a[], int length);
void stdDev(double a[], int length);

int main(){
  int size(7);
  double nums[]={1.0, 3.2, 4.0, 4.0, 5.5, 9.0, 9.1};

  stdDev(nums, size); //Function call 

  return 0;
}

//Function Definiton 
double aver(double a[], int length){
  double sum(0), aver;

  for (int i=0; i < length; i++)
    sum += a[i];

  aver = sum/length;

  return aver;
}

//Function Definition 
void stdDev(double a[], int length){
  double sumOfSquared(0), stddev;
  const double av = aver(a, length); //function call 

  //formatting to 4 decimal points  
  cout.setf(ios::fixed); 
  cout.setf(ios::showpoint);
  cout.precision(4);

  for (int i=0; i < length; i++)
    sumOfSquared += pow((a[i] - av),2);
  
  stddev = pow((sumOfSquared/(length - 1)), 0.5);
  cout << "The standard deviation of the array nums is " << stddev << endl;
}
