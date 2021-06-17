#include <stdio.h>
int main(void)
{
    int arr[] = {45, 2, 4, 32, 12, 21, 23, 1};
    int i, j, size, mid;
    size = sizeof arr / sizeof arr[0];
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    for (i = size; i > 1; i--)
        for (j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                mid = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = mid;
            }
        }
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}