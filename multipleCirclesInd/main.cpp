/**
 * @author Luisangel Marcia (lotus_zero)
 * @date Saturday November 17 2018
 * @time 17:25 pm
 * @brief Calculations of indeterminated # of circles with check
 */

#include <iostream>

#define PI 3.14159

float process (float radius);

int main() {
    float radius, area;

    std::cout << "TO STOP THE PROGRAM, ENTER 0 IN THE RADIUS VALUE" << std::endl;
    std::cout << "Radius = ?\n";

    for (int i = 1; radius != 0; i++) {
        if(radius < 0)
            area = 0;
        else
            area = process(radius);

        std::cout << "Area = " << area << std::endl;

        std::cout << "Radius = ?\n";
        std::cin >> radius;
    }

    return 0;
}

float process(float radius) {
    return PI * radius * radius;
}