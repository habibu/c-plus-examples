#include <iostream>

using namespace std;

int powerCube(int baseNumber, int powerNumber);

int main() {

	cout << powerCube(4,0) << endl;

	return 0;
}

int powerCube(int baseNumber, int powerNumber) {
	
	int result = 1;
	
	if(powerNumber > 0) {

		for(int indx = 0; indx < powerNumber; indx++){
			result = result * baseNumber;
		}
	}else{
		cout << "Invalid power number" << endl;
	}

	return result;

}
