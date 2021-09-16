#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;
	
};

struct Student {
	string name, surname;
	unsigned int id;
	Date birthdate;
	unsigned short int informaticsGrades[5];
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Student student {"Adrian", "Lewandowski", 9, {11, 5, 2005}, {1, 2, 3, 4, 5, }};
	cout << "Imiê: " << student.name << endl
	<< "Nazwisko: " <<  student.surname << endl
	<< "ID: " << student.id << endl
	<< "Data urodzenia: " << student.birthdate.dd << "-" << student.birthdate.mm << "-" << student.birthdate.yyyy << endl
	<< "Pierwsza ocena: " << student.informaticsGrades[0] << endl
	<< "Druga ocena: " << student.informaticsGrades[1] << endl
	<< "Trzecia ocena: " << student.informaticsGrades[2] << endl
	<< "Czwarta ocena: " << student.informaticsGrades[3] << endl
	<< "Pi¹ta ocena: " << student.informaticsGrades[4] << endl;
	return 0;
}

