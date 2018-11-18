/**
 * @author Luisangel_Marcia (lotus_zero)
 * @date thursday, november 15
 * @time 22:42 pm
 * @brief A program to calculate a circle area
 */

#include <iostream>

#define PI 3.14159

float process(float radius); /* prototype of a function */

int main() {

    float radius, area;

    std::cout << "Radius = ?" << std::endl;
    std::cin >> radius;

    area = process(radius);

    std::cout << "Area = " << area;

    return 0;
}

/**
 *
 * @param radius the value given by the user to calculate de circle
 * @return total area of the circle
 */
float process(float radius) {
    float a;

    a = PI * radius * radius;
    return (a);

}