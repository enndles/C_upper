#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	char a = 'w';
//	char* p = &a;//字符指针，其类型为char* ，说明是一个指向char类型元素的指针
//	*p = 'b';
//	printf("%c\n", a);//b
//
//
//	char* x = "abcde";//x保存的是字符串的首个字符的地址
//	printf("%s\n", x);//abcde
//	char arr[] = { 'a','b','c','\0'};
//	char arr1[] = "abc";
//	char* p1 = &arr;//数组指针，存放的是整个数组的地址
//	char* p2 = &arr1;
//	printf("%s\n", p1);
//	printf("%s\n", p2);
//	return 0;
//}


//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abc";
//	if (p1 == p2)
//		printf("==");//==,说明p1和p2的值相等
//	return 0;
//}




//指针数组:是一个数组，其元素为指针

//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 2,3,4 };
//	int arr3[] = { 3,4,5 };
//	int* arr[] = { arr1,arr2,arr3 };//指针数组，arr1、arr2、arr3都是数组名，但更是首元素的地址，
//	                               //首元素为int类型，故arr是一个存放三个元素，元素类型为int* 数组                           
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针：指向数组的指针
//int main()
//{
//	int* p1[10];//指针数组
//	int(*p2)[10];//数组指针，指向一个数组，每个元素是int,又是个元素
//	return 0;
//}

//数组名在大多数情况下都是指首元素地址
//有两个例外：
//sizeof(数组名)   和    &数组名 ，在这里，数组名表示整个数组


//函数指针
//&函数名和函数名都是函数的地址，没有区别