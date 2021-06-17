#include <iostream>
int main(void)
{
    FILE *fp = fopen("../test.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2)
            fprintf(fp, "%d是奇数\n", i);
        else
            fprintf(fp, "%d是偶数\n", i);
    }

    return 0;
}