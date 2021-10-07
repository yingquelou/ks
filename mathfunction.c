#include <stdio.h>
#include <math.h>
int main(void)
{
    // printf("%lf", log(M_E));
    double s, c;
    sincos(M_PI/6, &s, &c);
    printf("%lf\n%lf\n", s, c);
    return 0;
}