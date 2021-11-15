#include <stdio.h>
typedef double Dtype;
// 1 2 1 2
// 3 4 3 4
//二、三阶行列式求解
static Dtype Determinant(int Order, Dtype a[Order][Order])
{
    if (Order < 2)
    {
        puts("Order is too small!");
        return 0;
    }
    if (Order == 2)
        return a[0][0] * a[1][1] - a[0][1] * a[1][0];
    if (Order > 3)
    {
        puts("Order is too big!");
        return 0;
    }
    Dtype Sum = 0, Product = 1;
    int i = 0, j = 0, k = 0;
    // 主对角线系
    for (; k < Order; ++k)
    {
        for (i = 0, j = k, Product = 1; i < Order; ++i, ++j)
        {
            j %= Order;
            Product *= a[i][j];
        }
        Sum += Product;
    }
    // 副对角线系
    for (k = 0; k < Order; ++k)
    {
        for (i = 0, j = k, Product = 1; i < Order; ++i, --j)
        {
            j = (j + Order) % Order;
            Product *= a[i][j];
        }
        Sum -= Product;
    }
    return Sum;
}
#include <stdlib.h>
#define n 4
int main(void)
{
    srand((unsigned)time(NULL));
    Dtype a[n][n];
    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = 0; j < n; ++j)
        {
            a[i][j] = rand() % 10;
            if (j != n - 1)
                printf("%.0lf,", a[i][j]);
            else
                printf("%.0lf", a[i][j]);
        }
        puts("");
    }
    Dtype tmp = Determinant(n, a);
    printf("%.0lf\n", tmp);
    return 0;
}