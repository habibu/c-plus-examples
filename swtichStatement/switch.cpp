#include <iostream>

using namespace std;

string getDayofWeek(int dayNumber);

int main() {
	int dayNumber;
	
	cout << "Enter a number between 0-6: ";
	cin >> dayNumber;

	cout << getDayofWeek(dayNumber) << endl;

	return 0;
}
string  getDayofWeek(int dayNumber) {
	string dayName;

	switch(dayNumber){
		case 0:
			dayName = "Friday";
			break;
		case 1:
			dayName = "Saturday";
			break;
		case 2:
			dayName = "Sunday";
			break;
		case 3:
			dayName = "Monday";
			break;
		case 4:
			dayName = "Tuesday";
			break;
		case 5:
			dayName = "Wednesday";
			break;

		case 6:
			dayName = "Thursday";
			break;
		default:
			dayName = " You enter invalid day number";

	}
	
	return dayName;
	
}
