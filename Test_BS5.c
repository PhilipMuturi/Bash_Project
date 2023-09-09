This c code converts recurring decimal into a simplified fraction:

  #include <stdio.h>
  #include <math.h>

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    double decimal = 0.11111;  // Replace with your recurring decimal
    int precision = 5;  // Number of decimal places

    // Convert the recurring decimal to an integer by multiplying by 10^precision
    int numerator = decimal * pow(10, precision);
    int denominator = pow(10, precision);

    // Simplify the fraction by finding the greatest common divisor (GCD)
    int common_divisor = gcd(numerator, denominator);

    // Divide both numerator and denominator by the common divisor
    numerator /= common_divisor;
    denominator /= common_divisor;

    // Print the simplified fraction
    printf("Simplified Fraction: %d/%d\n", numerator, denominator);

    return 0;
}

