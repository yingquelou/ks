#include "zidingyi.h"
//long long sdjc(int x)
//{
//	int z = 1;
//	int i = 0;
//	for (i = 1; i <= x; i++)
//	{
//		z *= i;
//	}
//	return z;
//}
//1 2 3 4 5 6 7 8 9 10 11……
//1 1 1 1 1 1 1 1 1 1  1……
//计算把一个定值(不为零)拆分成多个正整数的和的可能性有多少？
//long long tnjtj (int n)
//{
//	int i = 0;
//	long long knx = 0;
//	for (i = 1; i <= n; i++)
//	{
//		knx += sdjc(i);
//	}
//	return knx;
//}
int main()
{
	int x=24;
	//printf("%d",'x');
	do
	{
		angine:
		scanf("%d", &x);
		if (x > 0 && x <= 12)
		{
			printf("可能性为%lld\n", qzh(x));
		}
		else
		{
			printf("输入超出可计算范围（1到12），请重新输入：\n");
			goto angine;
		}
	} while (x>0 && x<=12);
	system()
		return 0;
}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%lld\n", tnjtj(n));
//	printf("%d",sizeof(long long));
//	return 0;
//}
	//int n = 9;//n级楼梯
	////int x = 0;//最大可跳阶数
	//int i = 0;
	//int j = 0;
	//int knz = 0;
	//int sjsh = 0;
	//srand((unsigned)time(NULL));
	//for (i = 1, i <= 2, i++)
	//{
	//	for (j = 1; j <= 2; j++)
	//	{
	//		i + j;
	//	}
	//}
	//while (n>=2)
	//{
	//	for (i = 1; sjsh <= n; i++)
	//		//算出1条路线
	//	{   
	//		int sjs = ((rand()) % 2) + 1;
	//		sjsh = sjsh + sjs;
	//	}
	//	knz++;
	//	break;
	//}
	//printf("%d", knz);
//}