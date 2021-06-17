#include <stdio.h>
#include <ctype.h>
#define unit_selling_price 0.2
#define chnum 2
#define A "Please select the price calculation method:\n"
#define B "       1.one-side   2.two-side\n"
#define C "Please enter 1 or 2\n"
#define D "When you enter other characters, you will exit the program!\n"
#define E "Please enter a positive integer!\n"
#define F "You should have just entered a positive integer!\n"
#define G "This option is not developed yet!\n"
void menu(void);
int getnum(void);
int my_choose(void);
double judge(int n);
void Clear_buffer(void);
double Calculate_price1(void);
double Calculate_price2(void);
double Calculate_price1(void)
{
    printf(E);
    int n = getnum();
    Clear_buffer();
    if (n > 0)
    {
        if (n < 11)
            return n * unit_selling_price;
        if (n > 10)
            return judge(n);
    }
    printf(F);
    return 0;
}
double Calculate_price2(void)
{
    printf(E);
    int n = getnum();
    Clear_buffer();
    if (n > 0)
    {
        if (n % 2 > 0)
            n = (n / 2) + 1;
        else
            n /= 2;
        if (n < 11)
            return n * unit_selling_price;
        if (n > 10)
            return judge(n);
    }
    printf(F);
    return 0;
}
void Clear_buffer(void)
{
    while (isprint(getchar()))
        continue;
    return;
}
double judge(int n)
{
    int i = n % 50, j = n / 50;
    if (i >= 0)
    {
        if (i == 0)
            --j;
        return n * unit_selling_price * (0.95 - 0.05 * j);
    }
}
int my_choose(void)
{
    menu();
    int c = getnum();
    if (c > 0 && c <= chnum)
        return c;
    return 0;
}
int getnum(void)
{
    int c;
    if (1 == scanf("%d", &c))
        return c;
    return 0;
}
void menu(void)
{
    printf(A B C D);
    return;
}