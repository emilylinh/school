#include <iostream> 
#include <fstream>

int main(){
  using namespace std;
  ofstream out_stream;
  int x=55, y=66;

  out_stream.open("myData.txt");
  for (int i=0; i<5; i++)
    out_stream << x << y << endl;
  out_stream.close();

  cout<< "File is written";
  return 0;
}
