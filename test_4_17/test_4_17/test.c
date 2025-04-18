#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int test(char* arr)
//{
//	printf("hehe\n");
//	return 0;
//}
//函数指针->指向函数的指针



//int main()
//{
//	////printf("%p\n", test);//00007FF6CFB21159
//	////printf("%p\n", &test);//00007FF6CFB21159
//	//int (*p)(char*) = test;
//	//(*p)("abc");//hehe
//	//test("abc");//hehe
//	//p("abc");//hehe
//	//int len = sizeof(&test);
//	////int len = sizeof(test);//报错，sizeof的操作数不能是函数
//	//printf("%d\n", len);
//
//	return 0;
//}

//
//typedef void(*pf_t)(int);
//int main()
//{
//	void (* signal(int, void(*)(int)))(int);//这是一个函数声明:signal(int，void(*)(int))
//	//其返回值为void(*)(int)类型
//	//可以简化为：
//	pf_t(signal(int, pf_t));
//	return 0;
//}





//实现简易计算机
//int Add(int i, int j)
//{
//	return i + j;
//}
//int Sub(int i, int j)
//{
//	return i - j;
//}
//int Mul(int i, int j)
//{
//	return i * j;
//}
//int Div(int i, int j)
//{
//	return i / j;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("*******1 Add    2 Sub*****\n");
//	printf("*******3 Mul    4 Div*****\n");
//	printf("******** 0  exit *********\n");
//
//}
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请输入>");
//		scanf("%d", &input);
//		printf("请输入数字>");
//		scanf("%d %d", &i, &j);
//		switch (input)
//		{
//		case 1:
//			ret = Add(i, j);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			ret = Sub(i, j);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			ret = Mul(i, j);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			ret = Div(i, j);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
\



//函数指针实现简易计算机

//
//int Add(int i, int j)
//{
//	return i + j;
//}
//int Sub(int i, int j)
//{
//	return i - j;
//}
//int Mul(int i, int j)
//{
//	return i * j;
//}
//int Div(int i, int j)
//{
//	return i / j;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("*******1 Add    2 Sub*****\n");
//	printf("*******3 Mul    4 Div*****\n");
//	printf("******** 0  exit *********\n");
//
//}
//
//void colc(int (*pr)(int, int))
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	printf("请输入数字>");
//	scanf("%d %d", &i, &j);
//	ret = pr(i, j);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请输入>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			colc(Add);
//			break;
//		case 2:
//			colc(Sub);
//			break;
//		case 3:
//			colc(Mul);
//			break;
//		case 4:
//			colc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//




//函数指针数组实现简易计算机
// 更易于增加函数，更灵活
//
//int Add(int i, int j)
//{
//	return i + j;
//}
//int Sub(int i, int j)
//{
//	return i - j;
//}
//int Mul(int i, int j)
//{
//	return i * j;
//}
//int Div(int i, int j)
//{
//	return i / j;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("*******1 Add    2 Sub*****\n");
//	printf("*******3 Mul    4 Div*****\n");
//	printf("******** 0  exit *********\n");
//
//}
// 
//int main()
//{
//
//	int (*arr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	int input = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请输入>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入数字>");
//			scanf("%d %d", &i, &j);
//			ret = arr[input](i, j);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while (input);
//	return 0;
//}
//指向函数指针数组的指针
//int main()
//{
//	int (*arr[5])(int, int);//函数指针数组
//	int (*(*p)[5])(int, int);//函数指针数组的指针，p是指针变量，[5]代表p指向一个含有5个元素的数组，这个数组元素的类型为int (*) (int, int),即函数指针
//	return 0;
//}





//简单冒泡排序

//void Bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for(i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组已经排好序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag = 0;//发生交换则说明并非排好序，将flag置为0
//			}
//		}
//		if (flag == 1)
//		{
//			break;//排好序才结束循环
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//qsort库函数的使用
//void qsort(void* base,//要排序的数据的起始位置
//           size_t num,//待排序的数据元素的个数
//	       size_t width,//待排序的数据元素的大小(单位是字节)
//	       int(*cmp)(const void* e1, const void* e2));//函数指针-交换函数 
//
//int main()
//{
//
//	return 0;
//}