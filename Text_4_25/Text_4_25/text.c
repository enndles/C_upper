#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//
//
////qsort库函数的使用
// void qsort(void* base,//要排序的数据的起始位置
//           size_t num,//待排序的数据元素的个数
//	       size_t width,//待排序的数据元素的大小(单位是字节)
//	       int(*cmp)(const void* e1, const void* e2));//函数指针-交换函数 
//
// //函数指针完成冒泡排序
//
// struct Stu
// {
//	 char name[10];
//	 int age;
// };
//
// void swap(char* e1, char* e2,int width)
// {
//	 int i = 0;
//	 for (i = 0; i < width; i++)
//	 {
//		 char tmp = *e1;
//		 *e1 = *e2;
//		 *e2 = tmp;
//		 e1++;
//		 e2++;
//	 }
// }
//
// //普通整数型
// int cmp(const void* e1, const void* e2)
// {
//	 return (*(int*)e1 - *(int*)e2);
// }
//
//
// //结构体类型
// //以名字比较
// int cmp_name(const void* e1, const void* e2)
// {
//	 return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
// }
// void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
// {
//	 int i = 0;
//	 int j = 0;
//	 int flag = 1;
//	 for (i = 0; i < sz -1; i++)
//	 {
//		 for (j = 0; j < sz - i - 1; j++)
//		 {
//			 if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			 {
//				 swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				 flag = 0;
//			 }
//		 }
//		 if (flag == 1)
//		 {
//			 break;
//		 }
//	 }
// }
//
//
//
// //数字排序
// void test1()
// {
//	 int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	 int sz = sizeof(arr) / sizeof(arr[0]);
//	 int width = sizeof(arr[0]);
//	 bubble_sort(arr, sz, width, cmp);
//	 int i = 0;
//	 for (i = 0; i < sz; i++)
//	 {
//		 printf("%d ", arr[i]);
//	 }
// }
// //结构体排序
// void test2()
// {
//	 struct Stu s[] = { {"zhangsai",18},{"lisi",29},{"wangwu",22} };
//	 int sz = sizeof(s) / sizeof(s[0]);
//	 int width = sizeof(s[0]);
//	 bubble_sort(s, sz, width, cmp_name);
// }
// 
// int main()
// {
//	 test2();
//	 return 0;
// }



int main()
{


	return 0;
}