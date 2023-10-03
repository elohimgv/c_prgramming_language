#include <stdio.h>

/* Print Celsius to Fharenheit table 
    for Celsius = 0, 20, ... 300 */

int main() 
{
    float celsius, fhar;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* uppper limit */
    step = 20; /* step size */

    printf("Celsius to Fharenheit table\n");
    celsius = lower;
    while (celsius <= upper) {
        fhar = (celsius * 1.8) + 32;
        printf("%3.0f\t%6.1f\n", celsius, fhar);
        celsius = celsius + step;
    }
}
