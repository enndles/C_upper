#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	char a = 'w';
//	char* p = &a;//�ַ�ָ�룬������Ϊchar* ��˵����һ��ָ��char����Ԫ�ص�ָ��
//	*p = 'b';
//	printf("%c\n", a);//b
//
//
//	char* x = "abcde";//x��������ַ������׸��ַ��ĵ�ַ
//	printf("%s\n", x);//abcde
//	char arr[] = { 'a','b','c','\0'};
//	char arr1[] = "abc";
//	char* p1 = &arr;//����ָ�룬��ŵ�����������ĵ�ַ
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
//		printf("==");//==,˵��p1��p2��ֵ���
//	return 0;
//}




//ָ������:��һ�����飬��Ԫ��Ϊָ��

//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 2,3,4 };
//	int arr3[] = { 3,4,5 };
//	int* arr[] = { arr1,arr2,arr3 };//ָ�����飬arr1��arr2��arr3��������������������Ԫ�صĵ�ַ��
//	                               //��Ԫ��Ϊint���ͣ���arr��һ���������Ԫ�أ�Ԫ������Ϊint* ����                           
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


//����ָ�룺ָ�������ָ��
//int main()
//{
//	int* p1[10];//ָ������
//	int(*p2)[10];//����ָ�룬ָ��һ�����飬ÿ��Ԫ����int,���Ǹ�Ԫ��
//	return 0;
//}

//�������ڴ��������¶���ָ��Ԫ�ص�ַ
//���������⣺
//sizeof(������)   ��    &������ ���������������ʾ��������


//����ָ��
//&�������ͺ��������Ǻ����ĵ�ַ��û������