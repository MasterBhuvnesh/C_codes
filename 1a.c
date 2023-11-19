/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>

int main() {
    // Variables for triangle
    double base, height, side1, side2, side3;
    double triangle_perimeter, triangle_area;

    // Variables for circle
    double radius, circle_circumference, circle_area;

    // Input for the triangle
    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);
    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);
    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    // Calculate the perimeter and area of the triangle
    triangle_perimeter = side1 + side2 + side3;
    triangle_area = 0.5 * base * height;

    // Input for the circle
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the circumference and area of the circle 
    circle_circumference = 2 * 3.14 * radius;
    circle_area = 3.14 * radius * radius;

    // Output the results
    printf("\nTriangle Perimeter: %.2lf\n", triangle_perimeter);
    printf("Triangle Area: %.2lf\n", triangle_area);
    printf("Circle Circumference: %.2lf\n", circle_circumference);
    printf("Circle Area: %.2lf\n", circle_area);

    printf("Size of triangle_perimeter: %lu bytes, Size of triangle_area: %lu bytes\n ", sizeof(triangle_perimeter), sizeof(triangle_area));
    printf("Size of circle_circumference: %lu bytes, Size of circle_area: %lu bytes\n", sizeof(circle_circumference), sizeof(circle_area));

    return 0;
}
