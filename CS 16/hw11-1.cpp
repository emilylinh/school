#include <iostream> 
#include <string> 
using namespace std;

int main(){
  string name = "Jeffery Tambor";

  cout << "NAME = " + name << endl;
  cout << name.length() << endl;

  name.erase(8, 6);
  cout << name << endl;
  name.append("Dean WD Morgan");
  cout << name << endl;

  name.insert(22, "@TWD");
  cout << name << endl;
  name.replace(23, 3, "The WD");
  cout << name << endl;

  cout << name.find("WD") << endl;
  cout << name.rfind("WD") << endl;
  cout << name.rfind("fery") << endl;

  for (int i = name.length(); i > 20; i--)
    cout << name[i-1];
  cout << endl;

  return 0;
}
