#include <stdio.h>

int main()
{
    float t;
    char c;

    printf ("$ tconvert ");
    scanf_s ("%f", &t);

    while (getchar() != '\n') c = getchar();
        if (c == 'C') {
            printf ("%.2f%c%c\n", ((9.0/5.0)*t+32.0), ' ', 'F');
            printf ("%.2f%c%c\n", (t+273.15),' ','K');
        }
        else if (c == 'K') {
             printf ("%.2f%c%c\n", (t-273.15), ' ', 'C');
             printf ("%.2f%c%c\n", ((t-273.15)*(9.0/5.0)+32), ' ', 'F');
        }
        else if (c == 'F') {
            printf ("%.2f%c%c\n", ((5.0/9.0)*(t-32)), ' ', 'C');
            printf ("%.2f%c%c\n", ((5.0/9.0)*(t-32)+273.15), ' ', 'K');
        }
        else if ((c != 'C') && (c != 'K') && (c != 'F')) {
        printf ("%f%c%c\n", t, ' ', 'C');
        printf ("%.2f%c%c\n", ((9.0/5.0)*t+32.0), ' ', 'F');
        printf ("%.2f%c%c\n", (t+273.15),' ','K');
        printf ("\n%f%c%c\n", t, ' ', 'F');
        printf ("%.2f%c%c\n", ((5.0/9.0)*(t-32)), ' ', 'C');
        printf ("%.2f%c%c\n", ((5.0/9.0)*(t-32)+273.15), ' ', 'K');
        printf ("\n%f%c%c\n", t, ' ', 'K');
        printf ("%.2f%c%c\n", (t-273.15), ' ', 'C');
        printf ("%.2f%c%c\n", ((t-273.15)*(9.0/5.0)+32), ' ', 'F');
    }

    return 0;
}
