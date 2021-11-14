#include <stdio.h>
#include <math.h>
typedef double mytype;
#define T 1e6
static mytype fun(mytype lim);
int main(void)
{
    printf("%lf\n", fun(T));
    return 0;
}
mytype fun(mytype lim)
{
    mytype i = 1.0, tal = 0;
    while (i <= lim)
    {
        tal += pow(i, 1 / i);
        ++i;
    }
    return tal / lim;
}