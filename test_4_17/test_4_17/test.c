#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int test(char* arr)
//{
//	printf("hehe\n");
//	return 0;
//}
//����ָ��->ָ������ָ��



//int main()
//{
//	////printf("%p\n", test);//00007FF6CFB21159
//	////printf("%p\n", &test);//00007FF6CFB21159
//	//int (*p)(char*) = test;
//	//(*p)("abc");//hehe
//	//test("abc");//hehe
//	//p("abc");//hehe
//	//int len = sizeof(&test);
//	////int len = sizeof(test);//����sizeof�Ĳ����������Ǻ���
//	//printf("%d\n", len);
//
//	return 0;
//}

//
//typedef void(*pf_t)(int);
//int main()
//{
//	void (* signal(int, void(*)(int)))(int);//����һ����������:signal(int��void(*)(int))
//	//�䷵��ֵΪvoid(*)(int)����
//	//���Լ�Ϊ��
//	pf_t(signal(int, pf_t));
//	return 0;
//}





//ʵ�ּ��׼����
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
//		printf("������>");
//		scanf("%d", &input);
//		printf("����������>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
\



//����ָ��ʵ�ּ��׼����

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
//	printf("����������>");
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
//		printf("������>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//




//����ָ������ʵ�ּ��׼����
// ���������Ӻ����������
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
//		printf("������>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("����������>");
//			scanf("%d %d", &i, &j);
//			ret = arr[input](i, j);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}
//ָ����ָ�������ָ��
//int main()
//{
//	int (*arr[5])(int, int);//����ָ������
//	int (*(*p)[5])(int, int);//����ָ�������ָ�룬p��ָ�������[5]����pָ��һ������5��Ԫ�ص����飬�������Ԫ�ص�����Ϊint (*) (int, int),������ָ��
//	return 0;
//}





//��ð������

//void Bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for(i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//���������Ѿ��ź���
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag = 0;//����������˵�������ź��򣬽�flag��Ϊ0
//			}
//		}
//		if (flag == 1)
//		{
//			break;//�ź���Ž���ѭ��
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



//qsort�⺯����ʹ��
//void qsort(void* base,//Ҫ��������ݵ���ʼλ��
//           size_t num,//�����������Ԫ�صĸ���
//	       size_t width,//�����������Ԫ�صĴ�С(��λ���ֽ�)
//	       int(*cmp)(const void* e1, const void* e2));//����ָ��-�������� 
//
//int main()
//{
//
//	return 0;
//}