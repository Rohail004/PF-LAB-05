
int main() {
    double radius, area, circumference, sqrtRadius;
    float PI = 3.142;

    printf("Enter the radius of the water tank: ");
    scanf("%lf", &radius);

    area = PI * radius*radius;
    circumference = 2 * PI * radius;
    sqrtRadius = sqrt(radius);

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    printf("Square Root of Radius: %.2f\n", sqrtRadius);

    return 0;
}
