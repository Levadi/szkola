#include <iostream>
using namespace std;

class worker {
	public:
		string firstName;
		string lastName;
		string nationality;
		unsigned short int birthYear;
		float height;
		char gender;
		void fullName() {
			cout << "imi� i nazwisko: " << firstName + " " + lastName << endl;
		};
		void showAllData();
			
};
void worker::showAllData() {
	fullName();
	cout << "narodowo��: " << nationality << endl << "rok urodzenia: " << birthYear
	<< endl << "wzrost: " << height << endl;
	switch(gender){
		case 'm':
			cout << "p�e�: m�czyzna";
			break;
		case 'w':
			cout << "p�e�: kobieta";
			break;
		default:
			cout << "p�e�: -";
			break;
	}
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	worker pracownik;
	pracownik.firstName = "Jan";
	pracownik.lastName = "Kowalski";
	pracownik.nationality = "Polak";
	pracownik.birthYear = 1988;
	pracownik.height = 1.8;
	pracownik.gender = 'm';
	pracownik.showAllData();
	return 0;
}
