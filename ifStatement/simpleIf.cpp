#include <iostream>

using namespace std;

int main () {

	bool isMale = false;
	bool isTall = true;
	
	if (isMale && isTall){

		cout << "You are a tall male" << endl;

	}else if (isMale && !isTall){

		cout << "You are a short male" << endl;

	}else if(!isMale && isTall) {

		cout << "You are tall but not male" << endl;

	}else {

		cout << "You are not male and mot tall" << endl;
	}


	return 0;
}
