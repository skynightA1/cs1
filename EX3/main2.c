#include <stdio.h>

int main()
{
    double pi = 0.0;
    double term = 1.0;
    int n = 0;
    int sign = 1;
    
    while (term >= 0.000001){
        term = 4.0 / (2.0*n +1);
        pi += sign * term;
        sign = -sign;
        n++;
    }
    
    printf("pi = %.5f\n", pi);
    return 0;
}