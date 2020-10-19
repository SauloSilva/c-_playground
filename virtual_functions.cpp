#include <iostream>

using namespace std;

class Person {
public:
  int ID;
  string Name;

  void virtual Display() {
    cout << "ID: " << ID << endl;
    cout << "Name: " << Name << endl;
  }

  void InputName(string pName) {
    Name = pName;
  }
};

class Student:public Person {
public:

  void InputName(string pName) {
    Name = pName;
  }

  void Display() {
    cout << "ID: " << ID << endl;
    cout << "Student Name: " << Name << endl;
  }
};

int main() {
  Student stud1;
  Person *per1;

  stud1.ID = 1;
  stud1.InputName("Jhon");
  stud1.Display();

  per1 = &stud1;
  per1 -> Display();

  return 0;
}
