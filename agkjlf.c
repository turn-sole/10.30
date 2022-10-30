#include<stdio.h>
//实现一个函数，打印乘法口诀表
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
//	scanf_s("%d", &i);/*请输入一个数字*/
//	print(i, j, m);
//	return 0;
//}
//交换两个整数
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
//实现函数判断year是不是润年。
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
//打印100到200之间的素数。
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