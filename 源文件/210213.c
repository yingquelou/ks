#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void ss(int n, int m)
{
	for (; n < m; n++)
	{
		int i = 1;
		int c = 0;
		for (i=2;i<n;i++)
		{
			if ((n % i) == 0)
				c++;
		}
		if(c==0)
		printf("%d\n", n);
	}
}
int main()
{
	int n =1, m =1000;
	scanf("%d %d", &n, &m);
	ss(n,m);
	return 0;
}
//void ss()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int j = 1;
//		if (i <= 2)
//		{
//			printf("%d\n", i);
//		}
//		else
//		{
//			for (j = 2; j < i; j++)
//			{
//				if ((i % j) != 0)
//					printf("%d\n", i);
//			}
//		}
//	}
//}
 
//int main()
//{
//	int n = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//	int x = 0;
//		
//}
//1 1 2 3 5 8 13
//  a b c
//int main()
//{
//	char arr[] = "We Are Happy";
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == '\0')
//			strcpy_s("\0", "%20");
//	}
//	return 0;
//}
