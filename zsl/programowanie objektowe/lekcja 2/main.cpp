#include <iostream>
using namespace std;

class rectangle {
	public:
		float a;
		float b;
		
		float circumference() {
			return a*2 + b*2;
		}
		float surfaceArea() {
			return a*b;
		}
		void showValues(float circumference, float surfaceArea) {
			cout << "Obw�d prostok�tu to " << circumference << " a jego pole powierzchni to " << surfaceArea << endl;
		}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	
	float side1;
	float side2;
	
	cout << "podaj d�ugo�� pierwszego boku" << endl;
	cin >> side1;
	cout << "podaj d�ugo�� drugiego boku" << endl;
	cin >> side2;
	
	rectangle obj;
	obj.a = side1;
	obj.b = side2;
	
	obj.showValues(obj.circumference(), obj.surfaceArea());
	
	return 0;
}
