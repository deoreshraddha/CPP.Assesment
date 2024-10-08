#include<iostream>
using namespace std;

//Base class vehicle 
class vehicle{
    public:
    void Vehicle(){
        cout<<"I am a vehicle "<<endl;
    }
};

//Derived class Twowheeler (inherits from vehicle )
class Twowheeler : public vehicle{
    public :
    void twowheeler(){
        cout<<"I have two wheels"<<endl;
    }
};

//Derived class Bike(inherits from twowheeler)
class bike: public Twowheeler {
    public:
    void Bike(){
        cout<<"I am a bike"<<endl;
    }
};

int main (){
    //Create an object of class bike
    bike myBike;
    
    //Call methods of bike,twowheeler,and vehicle through bike object 
    myBike.Bike();    //Bikes method 
    myBike.twowheeler(); //Twowheelers method
    myBike.Vehicle(); //vehicles method 
    
    return 0;
}
    
 
