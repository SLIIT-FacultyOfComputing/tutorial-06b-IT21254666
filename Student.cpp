#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int pStudentId, char pName[]) {
  studentId = pStudentId;
  strcpy(name,pName);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID: " << studentId << endl;
  cout << "Student name: ";
  for(int i = 0; i < strlen(name) ; i++)
    {
      cout << name[i];
    }
}
