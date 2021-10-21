#include <iostream>
using namespace std;

class Book {
	public:
	string title, authors;
	
	Book(string pTitle, string pAuthors);
	getTitle(string pTitle);
	getAuthors(string pAuthors);
	addAuthor(string pAuthor);
};

Book::Book(string pTitle, string pAuthors) {
	title = pTitle;
	authors = pAuthors;
};

Book::getTitle(string pTitle) {
	title = pTitle;
};

Book::getAuthors(string pAuthors) {
	authors = pAuthors;
};

Book::addAuthor(string pAuthor) {
	authors = authors + pAuthor;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Book hobbit("Hobbit", "JRRT");
	
	return 0;
}
