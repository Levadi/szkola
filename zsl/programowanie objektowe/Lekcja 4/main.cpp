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
		
		void setId(unsigned int id, string name, string surname, short unsigned int dd, short unsigned int mm, short unsigned int yyyy) {
			Worker::id=id;
			Worker::name=name;
			Worker::surname=surname;
			Worker::birthdate.dd=dd;
			Worker::birthdate.mm=mm;
			Worker::birthdate.yyyy=yyyy;
		};
};

void Worker::showData() {
			cout << "Dane pracownika:" << endl << "ID: " << id << "Imie i nazwisko: " << name << " " << surname << endl << "Data urodzenia: " << birthdate.dd << "-" << birthdate.mm << "-" << birthdate.yyyy << endl;
	};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	pracownik.setId(100, "Janusz", "Nowak", 16, 9, 2021);
	pracownik.showData();
	return 0;
}
