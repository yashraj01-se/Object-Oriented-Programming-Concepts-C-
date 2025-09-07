#include <iostream>
using namespace std;

class studentdata
{
private:
    int age;
    int rollno;

public:
    studentdata(int age, int rollno)
    {
        this->age = age;
        this->rollno = rollno;
    }
    friend class student;
};
class student
{
public:
    void display_student_data(studentdata s)
    {
        cout << "student age: " << s.age << endl;
        cout << "Student rollno: " << s.rollno << endl;
    }
};

int main()
{
    studentdata s1(20, 101);
    student s2;
    s2.display_student_data(s1);
}