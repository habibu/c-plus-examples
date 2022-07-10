#include <iostream>

using namespace std;


void introMessage(string name, int age) {
	cout << "Hello " << name << " you are " << age << endl; 
}
int main() {

	string name;
	int age;
	
	cout << "Type your name: ";
	getline(cin, name);
	cout << "Type your age: ";
	cin >> age;
	
	introMessage(name, age);
	
	return 0;
}
