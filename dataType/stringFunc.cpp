#include <iostream>

using namespace std;

int main() {

    string pharse = "Habibu Abdullahi";
    pharse[3] = '1';
    string substring = pharse.substr(6, 15);
    
    cout << pharse << endl;
    cout << pharse.length() << endl;
    cout << pharse.find("hi", 0) << endl;
    cout << substring << endl;

    return 0;
}
