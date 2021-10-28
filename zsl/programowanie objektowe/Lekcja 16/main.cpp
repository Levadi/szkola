#include <iostream>
using namespace std;

class Rectangle {
	private:
		double sideA;
		double sideB;
		
	public:
		Rectangle();
		Rectangle(double sideA, double sideB);
		Rectangle(const Rectangle&);
		
		void catchSides(double&, double&);
		void setSides(double, double);
		double area();
		double circuit();
};

Rectangle::Rectangle() {
	cout << "\nKonstruktor Domyœlny" <<endl;
}
Rectangle::Rectangle(double pSideA, double pSideB) {
	sideA = pSideA;
	sideB = pSideB;
	cout << "\nKonstruktor Parametryczny" << endl;	
}
Rectangle::Rectangle(const Rectangle& model) {
	sideA = model.sideA;
	sideB = model.sideB;
	cout << "\nKonstruktor Kopiuj¹cy" << endl;	
}
		
void Rectangle::catchSides(double&pSideA, double&pSideB) {
	sideA = pSideA;
	sideB = pSideB;
}
void Rectangle::setSides(double pSideA, double pSideB) {
	pSideA = sideA;
	pSideB = sideB;
}
double Rectangle::area() {
	return sideA*sideB;
}
double Rectangle::circuit() {
	return 2*sideA+2*sideB;;
}

Rectangle copyRectangle(Rectangle rectangle) {
	return rectangle;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	double a, b;
	
	cout << "\nPierwszy prostok¹t: " << endl;
	Rectangle prostokat1(2, 4);
	prostokat1.catchSides(a, b);
	
	cout << "\nBok a:" << a;
	cout << "\nBok b:" << b;
	
	cout << "\nDrugi prostok¹t: " << endl;
	Rectangle prostokat2=prostokat1;
	prostokat2.catchSides(a, b);
	
	cout << "\nBok a:" << a;
	cout << "\nBok b:" << b;
	
	cout << "\nTrzeci prostok¹t: " << endl;
	Rectangle prostokat3(prostokat1);
	prostokat3.catchSides(a, b);
	
	cout << "\nBok a:" << a;
	cout << "\nBok b:" << b;
	
	cout << "\nCzwarty prostok¹t: " << endl;
	Rectangle prostokat4;
	prostokat4 = copyRectangle(prostokat1);
	prostokat4.catchSides(a, b);
	
	cout << "\nBok a:" << a;
	cout << "\nBok b:" << b;
	
	return 0;
}
