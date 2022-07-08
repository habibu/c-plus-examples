#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double num1, num2;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	if (num1 > num2){
		cout << "The sum of the numbers are: " << num1 + num2 << endl ;
	}else{
		cout << "The multiplication of the numbers are: " << num1*num2 << endl; 
	}


	return 0;
}
