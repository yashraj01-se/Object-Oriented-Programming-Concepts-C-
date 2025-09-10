#include<iostream>
using namespace std;

class outter{
public:
     class inner{
      public:
            void display(){
                cout<<"I am a inner class inside another class"<<endl;
            }
     };
};

int main(){
    outter::inner obj;
    obj.display();
    return 0;
}