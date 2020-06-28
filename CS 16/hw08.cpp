#include <iostream> 
using namespace std; 

int main(){
  int sum(0), count(0);
  while (count < 6)
    {
      sum += (count*2 + 1);
      cout<<"current sum is: "<<sum<<endl; 
      count++; 
      cout<<"current count is "<<count<<endl; 
    }
  cout<<"sum = "<<sum<<endl;
  return 0;
}
