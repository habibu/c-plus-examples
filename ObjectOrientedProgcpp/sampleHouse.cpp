#include <iostream>

using namespace std;


class House {

	private:
		string door;
	public:
		string window;
		string roof;
		string bed;
		string toilet;

	void setDoor(string sDoor){
		door = sDoor;

	}

	string  getDoor(){
		return door;
	}

};
int main() {

	House house1;

	house1.setDoor("Entrance");
	house1.window = "Kitchen";
	house1.roof = "Second floor";
	house1.bed = "King size";
	house1.toilet = "Public";


	cout << house1.getDoor() << endl;

	return 0;

}
