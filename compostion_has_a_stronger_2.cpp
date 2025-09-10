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
      airbuds  Ab;  // airbuds are create when phone object is created..

      void phone_air_connected(){
           Ab.connected();
           cout<<"Ready to use Airbud 300"<<endl; 
      }
};

int main(){
      phone p;
      p.phone_air_connected();
}