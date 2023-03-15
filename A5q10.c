#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
void main()
{
    int n, x1;
    float accuracy, term, denominator, x, sinx, sinval;
 
    printf("Enter the value of x (in radians) \n");
    scanf("%f", &x);
    sinval = sin(x);
    printf("The accuracy for the result is +-0.000001 \n");
    accuracy=0.000001;
    term = x;
    sinx = term;
    n = 1;
    do
    {
        denominator = 2 * n * (2 * n + 1);
        term = -term * x * x / denominator;
        sinx = sinx + term;
        n = n + 1;
    } while (accuracy <= fabs(sinval - sinx));
    printf("Sum of the sine series = %f \n", sinx);
    printf("Using Library function sin(%d) = %f\n", x1, sin(x));
}