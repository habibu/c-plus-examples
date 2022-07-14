#include <iostream>

using namespace std;

int main() {
	int luckyNumbers[] = {2, 3, 4, 7, 15};
	int num = 6;
	
	for(int i=0; i < num; i++) {

		if (luckyNumbers[i] == 7){
			
			luckyNumbers[i] = luckyNumbers[i] + 1;
			cout << "Incremented array element: ";	
			cout << luckyNumbers[i] << endl;
		}
	
	}


	return 0;
}
