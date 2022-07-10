#include <iostream>

using namespace std;

double cubeNum(double number) {

	return number * number * number;

	cout << "Out of scope of the function aka will not execute" << endl;
}
int main() {

	cout << cubeNum(7.0) << endl;

	return 0; 	

}
