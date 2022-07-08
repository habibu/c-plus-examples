#include <iostream>
#include <cmath>

using namespace std;

int main (){

	string color, pluralNoun, femous;

	cout << "Enter a color ";
	getline(cin, color);

	cout << "Enter a pluralNoun ";
	getline(cin, pluralNoun);

	cout << "Enter a femous name ";
	getline(cin, femous);

	cout << "Roses are "<< color << endl;
	cout << pluralNoun<<" are blue" << endl;
	cout << "I love  "<< femous << endl;

	return 0;
}
