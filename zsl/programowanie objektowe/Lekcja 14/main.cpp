#include <iostream>
using namespace std;

class Car{
	public: 
		unsigned int id;
		string brand;
		string model;
 
		void getData();
};
 
void Car::getData(){
	cout<<"Id: "<<id<<"\nMarka: "<<brand<<", model: "<<model<<endl;
}
 
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");

	Car fiat {10};
	fiat.getData();
	
	Car fiat1 {10, "Fiat"};
	fiat1.getData();
	
	Car fiat2 {10, "Fiat", "126p"};
	fiat2.getData();

	return 0;
}
