#include <iostream>
using namespace std;

class Student {
	public:
		static string s_class, s_profession;
		string name, surname;
		void showClassAndProfession() {
			cout << s_class << " " << s_profession << endl;
		}
		void setFullName(string name, string surname) {
			Student::name=name;
			Student::surname=surname;
			cout << Student::name << " " << Student::surname;
		}		
};

string Student::s_class = "2pT";
string Student::s_profession = "Programista";


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Student jendzej;
	jendzej.setFullName("Jêdrzej", "Natkowski");
	jendzej.showClassAndProfession();
	return 0;
}
