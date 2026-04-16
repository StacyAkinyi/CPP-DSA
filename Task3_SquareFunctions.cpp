//functions for area and perimeter of a square
//area = side ^ 2
//perimeter = 4 * side
#include <iostream>
#include <cmath> // to calculate the power 2 or pow ()
using namespace std;
double calcArea(double side){
    return pow(side, 2);
}
double calcPerimeter(double side){
    return 4 * side;
}

int main(){
    double side, area, perimeter;
    cout << "Enter the side length of the square: ";
    cin >> side;
    area = calcArea(side);
    perimeter = calcPerimeter(side);
    cout << "The area of the square is: " << area << endl;
    cout << "The perimeter of the square is: " << perimeter << endl;
    return 0;
    
}