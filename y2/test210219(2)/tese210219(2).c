#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
int main()
{
	int n = 9;
	float* p = (float*)&n;
	printf("%d\n", n);
	printf("%f\n", *p);
	*p = 9.0;
	printf("%f\n", *p);
	return 0;
}