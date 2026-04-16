//determining if input is uppercase or lowercase
#include <iostream>
#include <cctype> // for isupper() and islower() functions
using namespace std;

void checkCharacterCase(char inputChar) {
    if (isupper(inputChar)) {
        cout << inputChar << " is an uppercase letter." << endl;
    } 
    else if (islower(inputChar)) {
        cout << inputChar << " is a lowercase letter." << endl;
    } 
    else {
        cout << inputChar << " is not an alphabetic letter." << endl;
    }
}

int main() {
    char inputChar;

    cout << "Enter a single character: ";
    cin >> inputChar;

    checkCharacterCase(inputChar);

    return 0;
}