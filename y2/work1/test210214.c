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
//1 2 3 4 5 6 7 8 9 10 11����
//1 1 1 1 1 1 1 1 1 1  1����
//�����һ����ֵ(��Ϊ��)��ֳɶ���������ĺ͵Ŀ������ж��٣�
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
			printf("������Ϊ%lld\n", qzh(x));
		}
		else
		{
			printf("���볬���ɼ��㷶Χ��1��12�������������룺\n");
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
	//int n = 9;//n��¥��
	////int x = 0;//����������
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
	//		//���1��·��
	//	{   
	//		int sjs = ((rand()) % 2) + 1;
	//		sjsh = sjsh + sjs;
	//	}
	//	knz++;
	//	break;
	//}
	//printf("%d", knz);
//}