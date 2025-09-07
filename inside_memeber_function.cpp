#include <iostream>
using namespace std;

class studentclass
{
private:
    int age;

public:
    studentclass(int age)
    {
        this->age = age;
    }
    void displayage()
    {
        cout << "student age: " << age << endl;
    }
};
int main()
{
    studentclass s1(30);
    s1.displayage();
}