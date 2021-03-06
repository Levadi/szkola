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
    
    cout << "Dane użytkownika:" 
    << "\nNazwa użytkownika: " << user.login << endl 
    << "Hasło: " << user.password << endl 
    << "Status: " << user.status << endl
    << "Rodzaj konta: " << user.account << endl
    << "ID użytkownika: " << user.id << endl
    << "Data utworzenia konta: " << user.creationDate.dd << "-" 
    << user.creationDate.mm << "-" << user.creationDate.yyyy << endl;
    return 0;
}

