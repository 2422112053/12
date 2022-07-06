#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("(are you ok??)");
//	printf("\n/a/a/a");
//	return 0;
//	
//}
//int main()
//{
//	int line = 0;
//	while (line < 3000)//while循环
//	{
//		printf("写代码;%d\n", line);
//		line++;
//	}
//	if (line = 3000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	scanf("%d%d", &a, &b);
//	//int sum = a + b;
//
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[1]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[1])); \
//	int x = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", x);
//	return 0;
//}
//int main()
//{
//	int a = 9;
//	printf("%d\n", ~a);
//	return 0;
//}
//int main()
//{
	//int a = 10;
	//int b = ++a;
	//printf("%d\n", b);
	//printf("%d\n", a);
	//return 0;
	/*int a = 0;
	int b = 5;
	int max = 0;
	max = a > b ? a : b;
	printf("%d\n", max);
	return 0;*/
	//int brr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n", brr[3]);
	//return 0;
	/*printf("hehe\n");
	printf("%d");*/
	
	
//}
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num = 100;
//	printf("%d\n", num);
//	return 0;
//}
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//宏
//#define add(x,y) ((x)+(y))
//int main()
//{
//	int a = 10;
//	//printf("%d\n", 2*add(14, 13));
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	*pa = 200;//*解引用操作符
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	return 0;
//}
//struct stu
//{
//	char name[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu m = { "帅比",21,95.0 };//结构体创建和初始化
//	printf("%s %d %lf\n", m.name, m.age, m.score);
//	//结构体变量.成员变量（.操作符）
//	return 0;
//}
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = max(a, b);
//	printf("%d\n", m);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//		return a;
//	else
//		return b;
//	printf("%d %d", (a),(b));//自己写的，差点意思
//	return 0;
//在主函数外写一个函数来做，参考143-157行
//}
//写一个被5整除的函数，输入一个1-100000的整数m，整除YES，否则NO
#include <stdio.h>

int main()
{
	int M = 0;
	scanf("%d", &M);
	if (M % 5 == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}