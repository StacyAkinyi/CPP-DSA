//volume of a spher after inputing the radius
//formula of volume of a sphere is 4/3*PI*R^3
#include <iostream>
#include <cmath> // to calculate the power 3 or pow ()
using namespace std;

int main(){
    double radius, volume;
    const double PI = 3.14159; // constant value of PI

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calculate the volume 
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}