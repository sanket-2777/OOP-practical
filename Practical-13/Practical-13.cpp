#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int roll;
    string name;
    float marks;

    ofstream file("student.txt", ios::app);

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Student Name: ";
    cin >> ws;
    getline(cin, name);

    cout << "Enter Marks: ";
    cin >> marks;

    file << roll << endl;
    file << name << endl;
    file << marks << endl;

    file.close();

    cout << "\nStudent record saved successfully!" << endl;

    ifstream readFile("student.txt");

    cout << "\nStudent Records:" << endl;

    while (readFile >> roll)
    {
        readFile >> ws;
        getline(readFile, name);
        readFile >> marks;

        cout << "Roll Number: " << roll << endl;
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }

    readFile.close();

    return 0;
}
