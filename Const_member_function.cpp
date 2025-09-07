#include <iostream>
using namespace std;

class student
{
private:
    int age;

public:
    student(int age)
    {
        this->age = age;
    }
    void display_age() const
    {
        cout << "Student age: " << age << endl;
        //age=35; Cannot be modified inside this function as declared const
    }
};

int main()
{
    student s1(20);
    s1.display_age();
}