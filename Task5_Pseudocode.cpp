//code logic breakdown for task 5
//repeat until - loop 
#include <iostream>

int main(){
    //initialize variables x and y
    double x = 0, y = 20;
    //begin loop
    do {
        //subtract 4 from y
        y -= 4;

        //add 2/y to x
        x += 2.0 / y;

    }while (y >= 6);

    std::cout << "Final value of x: " << x << std::endl;

    return 0;

}