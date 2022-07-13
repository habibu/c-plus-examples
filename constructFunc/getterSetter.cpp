#include <iostream>

using namespace std;

class Movie {
	private:
		string rating;
	public:
		string title;
		string production;

		Movie(string cTitle, string cProduction, string cRating){
		
			title = cTitle;
			production = cProduction;
			setRating(cRating);

		}
		void setRating(string sRating){
			
			if(sRating == "G" || sRating == "PG" || sRating == "PG-13" || sRating == "R"){

				rating = sRating;
			}else{
				rating = "NR";
				
			}
		}

		string getRating(){ return rating;}


};

int main(){

	Movie matrix("Reloaded", "HBO", "G");

	matrix.setRating("Blue fill");

	cout << matrix.getRating() << endl;

	return 0;
}
