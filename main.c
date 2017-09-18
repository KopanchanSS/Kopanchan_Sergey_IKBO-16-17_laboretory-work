#include <stdio.h>

int main()
{
    float t;
    char c;

    printf ("$ tconvert");
    scanf_s ("%f", &t);
    while (getchar() != '\n') c = getchar();

    switch (c) {
    case 'C' :
        printf ("%.2f%c%c\n", ((9.0/5.0)*t +32.0), ' ', 'F');
        if (t >= -273.15) {
            printf ("%.2f%c%c\n", t+273.15, ' ', 'K');
        }
        break;
    case 'K' :
        if (t >= 0) {
            printf ("%.2f%c%c\n", (t-273.15), ' ', 'C');
            printf ("%.2f%c%c\n", ((9.0/5.0)*(t-273.15)+32.0), ' ', 'F');
        }
        else {
            printf ("invalid temperature value");
        }
        break;
    case 'F' :
        printf ("%.2f%c%c\n", ((5.0/9.0)*(t-32)), ' ', 'C');
        if (t >= - 434.07) {
            printf ("%.2f%c%c\n", ((5.0/9.0)*(t-32)+273.15), ' ', 'K');
        }
        break;
    default :
        printf ("%f%c%c\n", t, ' ', 'C');
        printf ("%.2f%c%c\n", ((9.0/5.0)*t+32.0), ' ', 'F');
       if (t >= -273.15){
            printf ("%.2f%c%c\n", t+273.15, ' ', 'K');
        }
        printf ("\n%f%c%c\n", t, ' ', 'F');
        printf ("%.2f%c%c\n", ((5.0/9.0)*(t-32)), ' ', 'C');
        if (t >= - 434.07) {
            printf ("%.2f%c%c\n", ((5.0/9.0)*(t-32)+273.15), ' ', 'K');
        }
        printf ("\n%f%c%c\n", t, ' ', 'K');
        if (t >= 0) {
            printf ("%.2f%c%c\n", (t-273.15), ' ', 'C');
            printf ("%.2f%c%c\n", ((9.0/5.0)*(t-273.15)+32.0), ' ', 'F');
        }
        else {
            printf ("this value of temperature does not exist\n");
        }
        break;
    }

    return 0;
}
