#include<iostream>
using namespace std;

class vehicle{
public:
      static void display(){
        cout<<"Base method called"<<endl;
      }
      void dispaly_without_static(){
        cout<<"Without static"<<endl;
      }
};

class car:public vehicle{
public:
      void display(){
        cout<<"Dereived method called"<<endl;
      }
};

int main(){
    vehicle::display(); // without Creating the object of Base class , we were able to class the base class method because of..
    //class name and scope resolution operator...
   // vehicle::dispaly_without_static(); cannot be called..
    return 0; 
}