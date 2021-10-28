#include <iostream>
using namespace std;

class Car{
	public: 
		unsigned int id;
		string brand;
		string model;
 
		void getData();
		
		Car();
		Car(unsigned int id, string brand, string model);
};

Car::Car():
	id {0},
	brand {"MARKA"},
	model {"MODEL"}	 
{
	cout << "Konstruktor domyœlny" << endl;
}

Car::Car(unsigned int pId, string pBrand, string pModel):
	id {pId},
	brand {pBrand},
	model {pModel}	
{}
 
void Car::getData(){
	cout<<"Id: "<<id<<"\nMarka: "<<brand<<", model: "<<model<<endl;
}
 
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");

	Car fiat;
	fiat.getData();
	
	
	Car fiat1(0, "Fiat", "Panda");
	fiat1.getData();
	
	return 0;
}
