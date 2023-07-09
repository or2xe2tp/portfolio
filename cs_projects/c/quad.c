#include <stdio.h>
#include <math.h>
/*here ax^2 + bx + c = 0 ; and roots are (root1, root2)
author: or2xe2tp */

void solveQuad(double a, double b, double c) {
    double d, root1, root2;
    
    d = b * b - 4 * a * c; //d determines the type of roots 

    if (d > 0) {
        //both are real  
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        
        printf("Two distinct real roots exist:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (d == 0) {
        
        root1 = root2 = -b / (2 * a);//both are real and same
        
        printf("Two equal and real roots exist:\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        //imaginary roots 
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-d) / (2 * a);
        
        printf("Two complex roots exist:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;
    
    printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("Enter coefficient a: ");
    scanf("%lf", &a);
    printf("Enter coefficient b: ");
    scanf("%lf", &b);
    printf("Enter coefficient c: ");
    scanf("%lf", &c);
    solveQuad(a, b, c); //calls the function

    return 0;
}