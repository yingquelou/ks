#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//???????????n????????????????
//1 2 3 4 5  6  7  8  9 ????
//1 2 3 5 7 11 13 17  19????
long long sushu(int n)
{
	int i = 1,count=0;
	for (; count<n; ++i)
	{
		int j = 2, flag=1;
		for (;j<=i/2;j++)
		{
			if (i % j == 0)
				flag = 0;
		}
		if (flag == 1)
			count++;
	}
		return i-1;
}
int main()
{
	int n = 1;
	while (n)
	{
		printf("?????????????????n????????????n????????????????????\n");
		printf("?????????????????0??????????????????��???\n");
		scanf("%d", &n);
		
		if(n>0)
		printf("??%d????????????????%lld??\n", n, sushu(n));
	} ;
	return 0;
}
//
//int checkPrimeNumber(int n);
//int main()
//{
//    int n1, n2, i, flag;
//
//    printf("??????????????: ");
//    scanf("%d %d", &n1, &n2);
//    printf("%d ?? %d ????????: ", n1, n2);
//
//    for (i = n1 + 1; i < n2; ++i)
//    {
//        // ?��?????????
//        flag = checkPrimeNumber(i);
//
//        if (flag == 1)
//            printf("%d ", i);
//    }
//    return 0;
//}
//
//// ????????
//int checkPrimeNumber(int n)
//{
//    int j, flag = 1;
//
//    for (j = 2; j <= n / 2; ++j)
//    {
//        if (n % j == 0)
//        {
//            flag = 0;
//            break;
//        }
//    }
//    return flag;
//}
//#include <stdio.h>
//int hcf(int n1, int n2);
//int main()
//{
//    int n1, n2;
//    printf("??????????????: ");
//    scanf("%d %d", &n1, &n2);
//
//    printf("%d ?? %d ????????? %d", n1, n2, hcf(n1, n2));
//    return 0;
//}
//
//int hcf(int n1, int n2)
//{
//    if (n2 != 0)
//        return hcf(n2, n1 % n2);
//    else
//        return n1;
//}
//?????????????????????????????????????????????????????????
//??????????????????????????????????????????????????????????
//????????????????10???????????????????????????????????????????
//9 8 7????1
//1 4 10????n
//#include <stdio.h>
//int main()
//{
//    int n1, n2;
//
//    printf("??????????????????: ");
//    scanf("%d %d", &n1, &n2);
//
//    while (n1 != n2)
//    {
//        if (n1 > n2)
//            n1 -= n2;
//        else
//            n2 -= n1;
//    }
//    printf("GCD = %d", n2);
//
//    return 0;
//}
//int maxgys(int a,int b)
//{
//	if (a > 0 && b > 0)
//	{
//		if (a >= b)
//			a = b;
//		int i = a;
//		for (; i > 0; i--)
//		{
//			if (a % i == 0 && b % i == 0)
//				break;
//		}
//		return i;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int a, b;
//	printf("??????????????????");
//	scanf("%d %d", &a, &b);
//	if(maxgys(a, b)!=0)
//	int c=maxgys(a, b);
//	printf("%d??%d??????????%d??",a,b,c);
//	return 0;
//}
//{
//	int t = 9,s=1;
//	for (; t>=1; t--)
//	{
//		s = (s + 1) * 2;
//		printf("??%d??????????????%d\n",t, s);
//	}
//	return 0;
//}
//int main()
//{
//    int  i, j, m, n, x;
//    for (i = 1; i < 168 / 2 + 1; i++)
//    {
//        if (168 % i == 0)
//        {
//            j = 168 / i;
//            if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//            {
//                m = (i + j) / 2;
//                n = (i - j) / 2;
//                x = n * n - 100;
//                printf("%d + 100 = %d * %d\n", x, n, n);
//                printf("%d + 268 = %d * %d\n", x, m, m);
//            }
//        }
//    }
//    return 0;
//}
//(-1)^S*M*2^E
//#include<string.h>
//int main()
//{
//	//printf("%d", sizeof(double));
//	float a = 0.8;
//	char* p =(char*) &a;
//	printf("%d",*p);
//	//1.1001*2^(-1)
//	//0 (-1)+127 1001
//	//0 01111110 10011001100110011001100
//	return 0;
//}