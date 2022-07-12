#include <iostream>

using namespace std;

int main() {

	int numMatrix[3][2] = {{1,2}, {4,3}, {7,5}};

	for(int col = 0; col < 3; col++) {
		for(int row = 0; row < 2 ; row++){
			cout << numMatrix[col][row];
		}
		cout << endl;
	}
	return 0;
}
