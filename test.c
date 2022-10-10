#include <stdio.h>
int main(void)
{
    FILE *pf = fopen("test.c", "a+");
    char arr[10];
    fgets(arr, 10,pf);
    puts(arr);
    fclose(pf);
    return 0;
}