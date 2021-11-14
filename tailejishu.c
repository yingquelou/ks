#include <stdio.h>
#include <math.h>
// π的泰勒级数测试
typedef double mytype;
mytype tongxiang(unsigned count);
#define test 1e8
int main(void)
{
    // printf("%lf", log(M_E));
    double tal = 0;
    for (unsigned i = 1; i < test; ++i)
    {
        tal += tongxiang(i);
    }
    // sincos(M_PI / 6, &s, &c);
    printf("%.20lf\n", tal * 4);
    return 0;
}
mytype tongxiang(unsigned count)
{
    if (count)
        return pow(-1, count - 1) / (2 * count - 1);
    return 0;
}