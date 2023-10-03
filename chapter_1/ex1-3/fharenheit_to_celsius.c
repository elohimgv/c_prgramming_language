#include <stdio.h>

/* Print fharenheit to Celsius table 
    for fhar = 0, 20, ... 300 */

int main() 
{
    float fhar, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* uppper limit */
    step = 20; /* step size */

    printf("Fharenheit to Celsius table\n");
    fhar = lower;
    while (fhar <= upper) {
        celsius = (5.0/9.0) * (fhar-32.0) ; /* formula */
        printf("%3.0f\t%6.1f\n", fhar, celsius);
        fhar = fhar + step;
    }
}