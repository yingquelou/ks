#include <stdio.h>
#include <time.h>
#include <stdlib.h>
typedef double Dtype;
#define n 80
#define y 0
static Dtype n_Determinant(int Order, Dtype a[Order][Order]);
int main(void)
{
    srand((unsigned)time(NULL));
    Dtype a[n][n];
    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = 0; j < n; ++j)
        {
            /*  if (j == i)
                a[i][i] = 0;
            else */
            a[i][j] = rand() % 100 + 1;
            if (j != n - 1)
                printf("%.*lf,", y, a[i][j]);
            else
                printf("%.*lf", y, a[i][j]);
        }
        puts("");
    }
    puts("");
    for (size_t i = 0; i < n; ++i)
    {
        printf("[");
        for (size_t j = 0; j < n; ++j)
        {
            if (j != n - 1)
                printf("%.*lf,", y, a[i][j]);
            else
                printf("%.*lf", y, a[i][j]);
        }
        printf("]");
        if (i != n - 1)
            puts(",");
    }
    puts("");
    n_Determinant(n, a);
    Dtype tmp = n_Determinant(n, a);
    printf("%e\n", tmp);
    return 0;
}
Dtype n_Determinant(int Order, Dtype a[Order][Order])
// 行列式转换为上三角,然后再求值
// 暂未解决主对角线有零的情况
{
    int i = 0, j = 0, l = 0;
    Dtype k = 0;
    for (; j < Order - 1; ++j)
    {
        if (a[j][j])
        {
            for (i = j + 1; i < Order; ++i)
            {
                k = -a[i][j] / a[j][j];
                if (k)
                {
                    a[i][j] = 0;
                    for (l = j + 1; l < Order; ++l)
                    {
                        a[i][l] += k * a[j][l];
                    }
                }
            }
        }
        /* else
        // 对角线有零的情况
        {
        } */
    }
    Dtype Product = 1;
    for (l = 0; l < Order; ++l)
    {
        Product *= a[l][l];
    }
    return Product;
}