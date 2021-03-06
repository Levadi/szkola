#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;
};

class Car {
	public:
	unsigned int id=8;
	string brand="nieznana", model, color;
	unsigned short int power;
	float price;
	Date productionDate;
	
	getData();
	Car(unsigned int pId, string pBrand);
};

Car::Car(unsigned int pId=3, string pBrand="MARKA") {
	id = pId;
	brand = pBrand;
};

Car::getData() {
	cout << "Identyfikator " << id << "\nMarka " << brand << endl;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Car opel;
	opel.getData();
	Car fiat(15, "Fiat");
	fiat.getData();
	Car bmw = Car(12);
	Car *wsk;
	wsk=&bmw;
	wsk->getData();
	wsk->brand="BMW";
	wsk->getData();
	return 0;
}

