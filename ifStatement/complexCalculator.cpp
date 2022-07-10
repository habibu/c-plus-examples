#include <iostream>

using namespace std;

int main() {

	int first, second;
	char operators;
	int result = 0;

	cout << "Enter the first number: ";
	cin >> first;
	cout << "Enter the operator: ";
	cin >> operators;
	cout << "Enter second number: ";
	cin >> second;


	if(operators == '+'){

		result = first + second;
		cout << "You choose plus operations and the result: "<< result << endl;

	}else if(operators == '-'){
		
		result = first - second;
		cout << "You choose minus operations and the result: " << result << endl;

	}else if(operators == '*'){
	
		result = first * second;
		cout << "You chose multiply operations and the result: " << result << endl;
	
	}else if(operators == '/'){

		result = first / second;
		cout << "You choose division operations and the result: " << result << endl;
	}else {

		cout << "You type invalide operator" << endl;
	}

	return 0;

}
