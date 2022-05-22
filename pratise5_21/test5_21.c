#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'h';
//	printf("%c", ch);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	const char* pstr = "hello world";
//		printf("%s", pstr);
//		return 0;
//#include <stdio.h>
//int main() 
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	char* str3 = "hello world";
//	char* str4 = "hello world";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}
//#include <stdio.h>
// void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}
//	}
//	printf("\n");
//}
// void  print_arr2(int(*arr)[5], int row, int col)
//{
//	 int i = 0;
//	 for (i = 0; i < row; i++)
//	 {
//		 int j = 0;
//		 for(j=0;j<col;j++)
//		 {
//			 printf("%d ", arr[i][j]);
//		 }
//	 }
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);
//	print_arr2(&arr, 3, 5);
//	return 0;
//}
//
//#include <stdio.h>
//void test(int **p1)
//{
//	printf("%d", **p1);
//}
//int main() 
//{
//	int n = 10;
//	int* p = &n;
//	int** p1 = &p;
//	test(p1);
//	test(&p);
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* prr[] = { arr1,arr2,arr3, };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(prr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//char *(*pf)(char *,const char*)
//char*(*pfarr[4])(char *,const char*)
//计算器
//#include <stdio.h>
//void menu()
//{
//	printf("##################################\n");
//	printf("##### 1.add            2.sub #####\n");
//	printf("##### 3.mul            4.div #####\n");
//	printf("##### 0.exit######################\n");
//}
//int add(int x, int y) 
//{
//	 return x + y;
//}
//int sub(int x, int y)
// {
//	 return x - y;
// }
//int mul(int x, int y)
//{
//	return x*y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*pfarr[])(int x,int y) = { 0, add,sub,mul,div };
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//			printf("退出\n");
//		else
//			printf("选择错误\n");
//	} while (input);
//	return 0;
//
//}
