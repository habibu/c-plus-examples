#include <iostream>

using namespace std;


int main() {

	int age = 34;
	int *pAge = &age;

	double gpa = 5.5;
	double *pGpa = &gpa;

	string name = "Habibu";
	string *pName = &name;

	cout << "List the memory address aka pointer" << endl;
	cout << pAge << endl;
	cout << pGpa << endl;
	cout << pName << endl;

	cout << "De_reference aka get the value stored" << endl;
	cout << *pAge << endl;
	cout << *pGpa << endl;
	cout << *&name << endl;
	
	return 0;

}
