#include <iostream>
using namespace std;

struct studentstruct
{
    int age;
    void display()
    {
        cout << " Student age: " << age << endl;
    }
};

class Student
{
    int age;

public:
    void setage(int a)
    {
        age = a;
    }
    void display()
    {
        cout << " Student age: " << age << endl;
    }
};

int main()
{
    studentstruct s1;
    // s1.age can be directly accessed because the default access specifier of struct is public.
    s1.age = 20;
    s1.display();

    Student s2;
    // s2.age cant be accessed because the default access specifier of class is private.
    s2.setage(30);
    s2.display();
}
