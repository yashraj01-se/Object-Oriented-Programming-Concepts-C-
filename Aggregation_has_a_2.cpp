#include<iostream>
using namespace std;

class airbuds{
public:
      void connected(){
        cout<<"Airpods is connected"<<endl;
      }
};

class phone{
public:
      airbuds * Ab;
      phone(airbuds*a):Ab(a){}; // passing the airbuds to phone...

      void phone_air_connected(){
           Ab->connected();
           cout<<"Ready to use Airbud 300"<<endl; 
      }
};

int main(){
    airbuds a;
    phone*p=new phone(&a);
    p->phone_air_connected();
}