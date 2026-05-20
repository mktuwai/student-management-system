#include <iostream>
using namespace std;

// Base Class
class Person
{
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a)
    {
        name = n;
        age = a;
    }

    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class (nheritance)
class Student : public Person
{
private:
    string regNo;
    string course;
    float marks;

public:
    void setStudentDetails(string r, string c, float m)
    {
        regNo = r;
        course = c;
        marks = m;
    }

    // Function overriding (Polymorphism)
    void display() override
    {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Registration Number: " << regNo << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.setPersonDetails("Mallon Tuwai", 24);
    s1.setStudentDetails(
        "ENE211-0038/2021",
        "Electrical and Electronic Engineering",
        85.5
    );

    cout << "===== STUDENT DETAILS =====" << endl;

    s1.display();

    return 0;
}