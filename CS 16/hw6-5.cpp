/* By Emily Lu, inspired by Ziad Matni
   (who was inspired by Phill Conrad) */


#include <string> 
#include <iostream> 
#include <cstdlib> 
using namespace std; 

string lineOfStars(int width); 
string boxOfStars(int width, int height); 
//function declarations 

string lineOfStars(int width){ 
  string line =""; 
  for (int k=0; k<width; i++) {
    line += "*"; 
  }
  return line; 
}

string boxOfStars(int width, int height){ 
  string box="";  
  for (int i=0; i<height; i++){ 
    box += lineOfStars(width)+"\n";   
  } 
  return box; 
} 
//function definitions 

int main(){ 
  int width, height; 
  cout<<"Enter a width and height: ";
  cin>>width>>height; 
  cout<<boxOfStars(width, height); //function call  
  return 0; 
}  
