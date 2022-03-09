#include<iostream>
using namespace std;

class Vehicle{
	public:
		Vehicle(){
			cout<<"This is a Vehicle";
		}
};

class fourWheeler{
	public:
		fourWheeler(){
			cout<<"This is a four wheeler vehicle";
		}
};

class Car : public Vehicle, public fourWheeler{
	public:
		Car(){
			cout<<"This is a Car";
		}
};

int main(){
	Car c;
}
