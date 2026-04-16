//array input of five values and output the average of those values
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    double numbers[SIZE];
    double sum = 0.0;

    cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
        sum += numbers[i]; // accumulate the sum
    }

    double average = sum / SIZE; // calculate the average
    cout << "The average is: " << average << endl;

    return 0;
}