#include <iostream>
using namespace std;

class StudentClass
{
private:
    int age;

public:
    void setage(int age)
    {
        this->age = age;
    }

    int getage()
    {
        return age;
    }

protected:
    int rollno;

public:
    string name;

    StudentClass(string n)
    {
        this->name = n;
    }
};

class studentdata : public StudentClass
{
public:
    studentdata(string s) : StudentClass(s) {};

    void display_roll()
    {
        rollno = 101;
        cout << "Student roll no: " << rollno << endl;
    }
};

int main()
{
    StudentClass *s1 = new StudentClass("yash");
    s1->setage(30);
    int student_age = s1->getage();
    cout << "Student age: " << student_age << endl;
    cout << "Stdeent name: " << s1->name << endl;

    studentdata *s2 = new studentdata("YASH");
    s2->display_roll();

    delete s1;
    delete s2;
}