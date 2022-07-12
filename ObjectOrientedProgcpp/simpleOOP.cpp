#include <iostream>

using namespace std;

class Book {
	public:
		string title;
		string author;
		int pages;

};

int main() {

	Book book1;
	book1.title = "Al Quran";
	book1.author = " ";
	book1.pages = 6666;

	Book book2;
	book2.title = "Sahihul Bukhari";
	book2.author = "Buhari";
	book2.pages = 101010;

	cout << book1.title << endl;
	
	
	return 0;
}
