#include <iostream>


using namespace std;

class Chef{
	public:
		void makeTuwo(){

			cout << "Ya iya yin tuwon masara" << endl;
		}
		
		void makeKunu(){

			cout << "Kunun geiro yafi na dawa" << endl;
		}

		void makeDanwake(){

			cout << "Danwaken fulawa na da dadi" << endl;	
		}

};

class DanBauchiChef : public Chef {

	public:
		void makeMasa(){
			
			cout << "Masa yar Bauchi" << endl;
		}
		void makeDanwake(){

			cout << "Danwake gidan zuwaira" << endl;
		}

};

int main() {

	Chef chef;
	chef.makeTuwo();
	chef.makeDanwake();

	DanBauchiChef bhChef;
	bhChef.makeMasa();
	bhChef.makeDanwake();


	return 0;

}
