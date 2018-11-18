/**
 * @author Luisangel Marcia (lotus_zero)
 * @date Saturday November 17 2018
 * @time 16:43 pm
 * @brief Calculations of multiples circles with check
 */

#include <iostream>

#define PI 3.14159

float process(float radius);

int main() {
    float radius, area;
    int n;

    std::cout << "# of circles? " << std::endl;
    std::cin >> n ;

    for (int i = 0; i < n; ++i) {
        std::cout << "Circle #" << i << "Radius = ?" << std::endl;
        std::cin >> radius;

        if(radius < 0)
            area = 0;
        else
            area = process(radius);

        std::cout << "Area = " << area << std::endl;

    }

    return 0;
}

float process (float radius) {
    return PI * radius * radius;
}