#include <iostream> 
#include <string>
using namespace std; 

struct UndergradStudents 
{
  int ID;
  string firstName;
  string lastName;
  string major;
  double gpa1, gpa2, gpa3, gp4;
};

double averGPA(double numbers[]);

int main() {

  UndergradStudents records[3] = {“Joe”, "Shmoe”, "EE" {3.8, 3.0, 2.4, 1.9}},{“Macy”, “Chen”, “CS”,{3.9, 3.9, 4.0, 4.0}}, {“Patrick”,”Sadface”,”ME”,{3.8, 3.3, 3.4, 3.9}}; 

double avg[3];
for (int i =0; i <3, i++) {
avg[i] = records[i].gpa1 + records[i].gpa2 + records[i].gpa3 + records[i].gpa4; }
avg[i]/=4; 

  cout << "These are the student records:\n";
  for (int i = 0; i < 3; i++) {
    cout << "ID# " << records[i].ID << ", " << records[i].lastName << ", ";
    cout << records[i].firstName << ", Major: " << records[i].major;
    cout << ", Average GPA: " << avg[i] << endl;
  }

  return 0;
}

