#include <stdio.h>
// 真值表
int main(void)
{
    int P, Q, R;
    for (P = 0; P < 2; ++P)
    {
        for (Q = 0; Q < 2; ++Q)
        {
            for (R = 0; R < 2; ++R)
            {
                size_t tmp = (P || (!Q)) || R;
                printf("%d %d %d %d\n", P, Q, R, tmp);
            }
        }
    }
    getchar();
    return 0;
}
