#include <stdio.h>
typedef struct {
    float real;
    float imag;
} complex;
complex add(complex a, complex b) {
    complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}
complex subtract(complex a, complex b) {
    complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}
complex multiply(complex a, complex b) {
    complex c;
    c.real = a.real * b.real - a.imag * b.imag;
    c.imag = a.real * b.imag + a.imag * b.real;
    return c;
}
complex divide(complex a, complex b) {
    complex c;
    float denominator = b.real * b.real + b.imag * b.imag;
    c.real = (a.real * b.real + a.imag * b.imag) / denominator;
    c.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return c;
}

int main() {
    complex a, b, c;
    printf("Enter first complex number (real and imaginary part): ");
    scanf("%f %f", &a.real, &a.imag);
    printf("Enter second complex number (real and imaginary part): ");
    scanf("%f %f", &b.real, &b.imag);
    c = add(a, b);
    printf("Sum = %.2f + %.2fi\n", c.real, c.imag);
    c = subtract(a, b);
    printf("Difference = %.2f + %.2fi\n", c.real, c.imag);
    c = multiply(a, b);
    printf("Product = %.2f + %.2fi\n", c.real, c.imag);
    c = divide(a, b);
    printf("Quotient = %.2f + %.2fi\n", c.real, c.imag);

    return 0;
}

