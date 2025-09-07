#include <iostream>
using namespace std;

class studentclass
{
private:
    int age;

public:
    void setage(int age);
    void displayage();
};
void studentclass::setage(int age)
{
    this->age = age;
}
void studentclass::displayage()
{
    cout << "Student Age: " << age << endl;
}
int main()
{
    studentclass s1;
    s1.setage(30);
    s1.displayage();
}