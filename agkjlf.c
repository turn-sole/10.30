#include<stdio.h>
//ʵ��һ����������ӡ�˷��ھ���
//void print(int i, int j,int m)
//{
//	for (j = 1; j <= i; j++)
//	{
//		for (m = 1; m <= j; m++)
//		{
//			printf("%d*%d=%d  ", m, j, m * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	scanf_s("%d", &i);/*������һ������*/
//	print(i, j, m);
//	return 0;
//}
//������������
//void swap(int* x, int* y)
//{
//	int m = 0;
//	m = *x;
//	*x = *y;
//	*y = m;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	scanf_s("%d%d", &i, &j);
//	swap(&i, &j);
//	printf("%d %d", i, j);
//	return 0;
//}
//ʵ�ֺ����ж�year�ǲ������ꡣ
//void judge(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		printf("%d is leap year\n", i);
//	else
//		printf("%d is not leap year\n", i);
//}
//int main()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	judge(i);
//	return 0;
//}
//��ӡ100��200֮���������
#include<math.h>
void print(int i,int j)
{
	for (i = 100; i < 201; i++)
	{
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", i);
	}
}
int main()
{
	int i = 0;
	int j = 0;
	print(i,j);
	return 0;
}