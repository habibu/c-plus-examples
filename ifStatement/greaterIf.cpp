#include <iostream>

using namespace std;

int getMax(int number1, int number2, int number3) {
	int result;

	if(number1 >= number2 && number1 >= number3) {
	
		result = number1;
	
	}else if(number2 >= number1 && number2 >= number3){
		
		result = number2;
	}else {

		result = number3;
	}

	return result;
}
int main() {

	cout << getMax(3,6,1) << endl;

	return 0;
}
