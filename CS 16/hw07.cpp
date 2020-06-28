#include <iostream>
#include <string> 
using namespace std; 

void stringsTimesN(int& n, string& s);

void stringsTimesN(int& n, string& s)
{
  string output; 
  for (int i = 0; i< n; i++)
    output += s; 
  cout<<output<<endl; 
}

int main(){
  int n; 
  string s; 
  cin>> n;
  cin >> s;  
  stringsTimesN(n, s);
  cout<<endl; 
  return 0; 
} 

 
