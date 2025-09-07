#include <iostream>
using namespace std;

struct Studentstruct
{
    int age;
    Studentstruct(int a)
    {
        this->age = a;
    }
    void display()
    {
        cout << "Student age(StudentStruct): " << age << endl;
    }

    ~Studentstruct()
    {
        cout << "Struct constructor is destroyed" << endl;
    }
};

class StudentClass
{
    int age;

public:
    StudentClass(int a)
    {
        this->age = a;
    }

    void display()
    {
        cout << "Student age(strudentClass): " << age << endl;
    }

    ~StudentClass()
    {
        cout << "Class Constructor is destroyed" << endl;
    }
};

int main()
{
    Studentstruct s1(25);
    s1.display();

    StudentClass s2(30);
    s2.display();

    return 0;
}