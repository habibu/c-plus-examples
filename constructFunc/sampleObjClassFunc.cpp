#include <iostream>

using namespace std;


class Student {
	public:
		string name;
		string subject;
		double gpa;

	Student(string cName, string cSubject, double cGpa){
		
			name = cName;
			subject = cSubject;
			gpa = cGpa;
		
		}

	bool hasHonor(){

		if(gpa > 4.0) {

			return true;
		}
		return false;
	}

};

int main() {

	Student stud1("Sambo dan Auta", "Makaranta Kosai", 3.9);
	Student studA("Dan Aji daya", "Kwakwalwar Komfuta", 5.0);

	cout << studA.hasHonor() << endl;

	return 0;
}
