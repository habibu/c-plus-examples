#include <iostream>

using namespace std;


class House {

	public:
		string door;
		string window;
		string roof;
		string bed;
		string toilet;

};
int main() {

	House house1;

	house1.door = "Entrance";
	house1.window = "Kitchen";
	house1.roof = "Second floor";
	house1.bed = "King size";
	house1.toilet = "Public";


	cout << house1.roof << endl;

	return 0;

}
