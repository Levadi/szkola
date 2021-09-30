#include <iostream>
using namespace std;

class School {
	public:
		static string s_school;
		static string s_jobPosition;
		
		string name;
		string surname;
		
		void getData();
		void setFullName(string name, string surname);
		
		static string s_getSchool();
		static void s_setSchool(string pschool) {
			s_school=pschool;
		}
};

void School::getData() {
	cout << "Imiê i nazwisko: " << School::name << " " << School::surname << endl;
}

void School::setFullName(string name, string surname) {
	School::name=name;
	School::surname=surname;
}

string School::s_getSchool() {
	return s_school;	
};

string School::s_school = "CDV";
string School::s_jobPosition = "Student";

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	cout << School::s_school << endl;
	cout << School::s_jobPosition << endl;
	
	School kowal;
	kowal.setFullName("Janusz", "Kowal");
	kowal.getData();
	
	School::s_jobPosition = "Wyk³adowca";
	cout << School::s_jobPosition << endl;
	kowal.s_jobPosition = "Dziekan";
	cout << School::s_jobPosition << endl;
	
	cout << School::s_getSchool();
	
	return 0;
}

