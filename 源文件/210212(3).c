#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char arr[] ="a";
//	printf("%d",arr[0]);
//}
int susu(int x)
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
	//if (x >= 1 && x <= 2)
	//{
	//	return 1;
	//}
	//else if (x > 2)
	//{
		/*{
			for (; x % i != 0;i)
			{
				return 1;
			};
			for (; x % i != 0;)
			{
				return 0;
			};
		};*/
	/*else
	{
		printf("请输入非零自然数\n");
	}*/
int main()
{
	do
	{
		long long k = 0;
		scanf("%lld", &k);
		switch (susu(k))
		{
		case 1:
			printf("%d是质数\n",k);
			break;
		case 0:
			printf("%d不是质数\n", k);
			break;
		}
	} 
	while(1);
}