#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;
};

class Worker {
	public:
		unsigned int id {};
		string name {}, surname {};
		Date birthdate {};

		void showData();
		
		void setId(unsigned int id1, string name1, string surname1, short unsigned int birthdate1, short unsigned int birthdate2, short unsigned int birthdate3) {
			id=id1;
			name=name1;
			surname=surname1;
			birthdate.dd=birthdate1;
			birthdate.mm=birthdate2;
			birthdate.yyyy=birthdate3;
		};
};

void Worker::showData() {
			cout << "Dane pracownika:" << endl << "ID: " << id << "Imiê i nazwisko: " << name << " " << surname << endl << "Data urodzenia: " << birthdate.dd << "-" << birthdate.mm << "-" << birthdate.yyyy << endl;
	};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	pracownik.setId(100, "Janusz", "Nowak", 16, 9, 2021);
	pracownik.showData();
	return 0;
}
