#include <stdio.h>
int main(void)
{
    FILE *pf = fopen("test.c", "a+");
    //for (int i = 0; i<10; i++)
        //fputs("/\/hello world!\n", pf);
    char arr[10];
    fgets(arr, 10,pf);
    puts(arr);
    fclose(pf);
    printf();
    return 0;
}