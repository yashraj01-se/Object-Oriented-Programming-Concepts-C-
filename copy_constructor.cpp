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
   // shallow copy constructor
   student(const student &s)
   {
      cout << "Copy Constructor called" << endl;
      age = s.age;
      cout << age;
   }
   // Deep copy constructor
   //  Student(const Student &s) {
   //      age = new int(*s.age);  // allocate new memory and copy value dynamically
   //  }
};
int main()
{
   student s1(30);
   student s2 = s1;
}