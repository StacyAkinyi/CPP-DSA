//168327 Akinyi Stacy Mary
//prompt number of days. 1 day = 24 hours, 1 hour = 60 minutes, 1 minute = 60 seconds. Calculate the number of seconds in the given number of days.
#include <iostream>
using namespace std;

int main() {
    int days; // Variable to store the number of days
    cout << "Enter the number of days: ";
    cin >> days;

    // Calculate the number of seconds in the given number of days
    long long seconds = static_cast<long long>(days) * 24 * 60 * 60;
    //*24 coverts days to hours, *60 converts hours to minutes, *60 converts minutes to seconds
    //static_cast<long long> is used to ensure that the calculation can handle large numbers of seconds without overflow from the jump.

    cout << "The number of seconds in " << days << " days is: " << seconds << endl;

    return 0;
}