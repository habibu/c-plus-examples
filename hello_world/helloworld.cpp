#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> msg { "Hello", "C++", "World", "Done by", "Habibu", "and the C++ exntension!"};

    for(const string& word: msg){
        cout << word << " ";
    }
    cout << endl;
}