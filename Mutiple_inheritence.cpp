#include<iostream>
using namespace std;     //////////Will Cause ambiguity///////////

class car{
public:
     void display(){
        cout<<"I am a car"<<endl;
     }
};

class fly{
public:
      void display(){
        cout<<"I can fly"<<endl;
      }
};

class flyingcar: public car,public fly{
public:
      void show(){
        cout<<"I am a flying car"<<endl;
      }   
};

int main(){
    flyingcar f;
    f.car::display();  // in simple case use scope resilution operator...
    f.fly::display();
}