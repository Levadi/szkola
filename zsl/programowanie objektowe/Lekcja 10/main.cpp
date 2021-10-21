#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;
};

class Car {
	public:
	unsigned int id;
	string brand="nieznana", model, color;
	unsigned short int power;
	float price;
	Date productionDate;
	
	getData();
	Car(unsigned int pId) {
		id = pId;
	};
	Car(unsigned int pId, string pBrand);
	Car(unsigned int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pProductionDate);
};

Car::Car(unsigned int pId, string pBrand) {
	id = pId;
	brand = pBrand;
};

Car::Car(unsigned int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pProductionDate) {
	id = pId;
	brand = pBrand;
	model = pModel;
	color = pColor;
	power = pPower;
	price = pPrice;
	productionDate = pProductionDate;
};

Car::getData() {
	cout << "Identyfikator " 
	<< id << "\nMarka " 
	<< brand << "\nModel " 
	<< model << "\nKolor " 
	<< color << "\nMoc " 
	<< power << "\nCena " 
	<< price << "\nData produkcji "
	<< productionDate.yyyy << endl;
	
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Car opel(10);
	Car fiat(11, "Fiat");
	Car porsche(0, "Porsche", "Panamera", "Czarny", 500, 1500000, {1, 10, 2021});
	//opel.getData();
	//fiat.getData();
	porsche.getData();
	return 0;
}
