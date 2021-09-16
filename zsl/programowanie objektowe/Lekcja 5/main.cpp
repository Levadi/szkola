#include <iostream>
using namespace std;

struct Date {
    unsigned short int dd, mm, yyyy;
};

struct User {
    string login, password, status, account;
    unsigned int id;
    Date creationDate;
};

int main() {
    setlocale(LC_CTYPE, "polish");
    
    User user {
        "jnowak2021", "qwerty123", "aktywny", "user", 2137, {16, 9, 2021}
    };
    
    cout << "Dane u¿ytkownika:" 
    << "\nNazwa u¿ytkownika: " << user.login << endl 
    << "Has³o: " << user.password << endl 
    << "Status: " << user.status << endl
    << "Rodzaj konta: " << user.account << endl
    << "ID u¿ytkownika: " << user.id << endl
    << "Data utworzenia konta: " << user.creationDate.dd << "-" 
    << user.creationDate.mm << "-" << user.creationDate.yyyy << endl;
    return 0;
}

