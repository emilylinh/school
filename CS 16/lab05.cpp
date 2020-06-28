#include <iostream> 
#include <cstdlib>
#include <string> 
#include <cstring> 
#include <cmath> 
using namespace std; 


const int num=3;
string code="";

void GenerateBinaryCode(string str,unsigned int n){
  if(n==0){
    cout<<str<<endl;
  }
  else{
    str[num-n]='0';
    GenerateBinaryCode(str,  n-1);
    str[num-n]='1';
    GenerateBinaryCode(str, n-1);
  }
}
int main(){
  for(int i=0; i<num; i++)
    code+="x";

  GenerateBinaryCode(code,num);
  return 0;

}
