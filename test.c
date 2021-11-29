#include <stdio.h>
// 等值演算
int main(void)
{
    printf("A B C\n");
    for (size_t A = 0; A < 2; ++A)
    {
        for (size_t B = 0; B < 2; ++B)
        {
            for (size_t C = 0; C < 2; ++C)
            {
                printf("%d\n",
                       //    (!(((!(A && C)) || (B && C)) && ((!(B && C)) || (A && C)))) || (((!A) || B) && ((!B) || A))

                       (!(((!(A || C)) || (B || C)) && ((!(B || C)) || (A || C)))) || (((!A) || B) && ((!B) || A)));
                if (
                    // (!(((!(A && C)) || (B && C)) && ((!(B && C)) || (A && C)))) || (((!A) || B) && ((!B) || A)))
                    (!(((!(A || C)) || (B || C)) && ((!(B || C)) || (A || C)))) || (((!A) || B) && ((!B) || A)))
                {
                    ;
                }
                else
                    printf("%d %d %d\n", A, B, C);
            }
            /* unsigned tmp = (!((A || (!B)) && (B || (!A)))) || (((!A) || B) && ((!B) || A));
            if (tmp)
                printf("%d %d %d\n", A, B,tmp); */
        }
    }
    puts("");
    return 0;
}