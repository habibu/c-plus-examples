#include <iostream>


using namespace std;

int main() {

	int secretNumber = 7;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	bool outofGuess = false;

	while(secretNumber != guess && !outofGuess) {

		if(guessCount < guessLimit){
			cout << "Guess a number: ";
			cin >> guess;
			guessCount ++;
		}else{
			outofGuess = true;
		}
		
	}

	if(outofGuess) {
		cout << "You lose!" << endl;
	}else {
		cout << "You win!" << endl;
	}

	return 0;
}
