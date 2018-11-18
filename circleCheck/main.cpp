/**
 * @author Luisangel_Marcia (lotus_zero)
 * @date saturday, november 17
 * @time 15:55 pm
 * @brief A program to calculate a circle area with check
 */


#include <iostream>

#define PI 3.14159

float process (float radius);

int main() {

    float radius = 0.0, area;

    std::cout << "Radius = ?" << std::endl;
    std::cin >> radius;

    if (radius < 0)
        area = 0.0;
    else
        area = process(radius);

    std::cout << "Area = " << area;

    return 0;
}

/**
 *
 * @param radius the value given by the user to calculate de circle
 * @return total area of the circle
 */
 float process (float radius) {
     return PI * radius * radius;
 }