#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
int rollNumber;
string name;
string course;

public:


Student(int rollNumber,string name,string course)
{
this->rollNumber=rollNumber;
this->name=name;
this->course=course;
}

void displayDetails()
{
cout << "Student Details" << endl;
cout << "Roll Number: " << rollNumber << endl;
cout << "Name: " << name << endl;
cout << "Course: " << course << endl;
}
};
int main()
{

Student s1(47, "Sanket", "Computer Science");
s1.displayDetails();
return 0;
}
