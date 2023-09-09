#include <stdio.h>
#include <math.h>

int main() {
    double radius;
    double circumference;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the circumference using the approximation 22/7 for π
    circumference = 2 * (22.0 / 7.0) * radius;

    // Display the result
    printf("The circumference of the circle is: %.2lf\n", circumference);

    return 0;
}
