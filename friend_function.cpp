#include <iostream>
using namespace std;

class Studentclass
{
private:
    int age;

public:
    Studentclass(int age)
    {
        this->age = age;
    }
    // Friend function Declaration:
    friend void displayage(Studentclass s);
};

// Friend function Definition:
void displayage(Studentclass s)
{
    cout << "Student age:" << s.age << endl; // accessing private member of the class.
}

int main()
{
    Studentclass s1(30);
    displayage(s1);
}