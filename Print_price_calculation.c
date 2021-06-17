#include "Print_price_calculation.h"
#define mofen 0.2
int main(void)
{
    double c;
    //Clear_buffer();
    while (c = my_choose())
        switch ((int)c)
        {
        case 1:
            c = Calculate_price1();
            printf("%lf\n", c*(1+mofen));
            break;
        case 2:
            c = Calculate_price2();
            printf("%lf\n", c*(1+2*mofen));
            break;
        default:
            printf(G);
            break;
        }
    return 0;
}