#include <iostream>
using namespace std;
class Student{
private:
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;
    
    void updateCGPA()
    { cout << "Enter new CGPA: ";
        cin >> CurrentCGPA;}

    void updateHostel()
    {cout << "Enter new Hostel: ";
        cin >> Hostel; }

public:
    void addDetails()
       {cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Roll No: ";
        cin >> RollNo;
        cout << "Enter Degree: ";
        cin >> Degree;
        cout << "Enter Hostel: ";
        cin >> Hostel;
        cout << "Enter Current CGPA: ";
        cin >> CurrentCGPA;}

    void updateDetails()
        {cout << "Enter updated Name: ";
        cin >> Name;
        cout << "Enter updated Roll No: ";
        cin >> RollNo;
        cout << "Enter updated Degree: ";
        cin >> Degree;}

    void displayDetails()
        {cout << "\nStudent Details" << endl;
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Degree: " << Degree << endl;
        cout << "Hostel: " << Hostel << endl;
        cout << "Current CGPA: " << CurrentCGPA << endl;}
    
    void updateStudent()
       {updateCGPA();
        updateHostel();}};

int main()
{
    Student s;

    s.addDetails();

    cout << "\nInitial Details:";
    s.displayDetails();
    s.updateDetails();
    s.updateStudent();
    cout << "\nUpdated Details:";
    s.displayDetails();

    return 0;
