#define _CRT_SECURE_NO_WARNINGS		//scanf����ʱ����������ʾ����Ҫ���������Դ�ļ��ĵ�һ�У�����ŵ�һ��
//��VS�İ�װ·������һ���ļ���newc++file.cpp���ļ�����VS�����д����µ�.c����.cpp�ļ���ʱ�򣬶��ǿ���newc++file.cpp����ļ���

#include<stdio.h>
#include<string.h>
//#include <stdio.h>
////std-��׼ i-input o-output .hͷ�ļ�
//int main()
////int-���� main�����ǳ������ڣ����ҽ���һ��
//{
//	//printf("hehe\n");
//	//printf��һ���⺯����ר��������ӡ����
//
//	return 0;
//	//0-���� ϰ�� ��������0 �쳣���ط��� Ctrl+k+cע�� ctrl+k+uȡ��ע��
//}

//#include<stdio.h>
//
//int main()
//{
//	//"%zu"����sizeof���ص��޷�������
//	//������еĵ�λ��
//	/*bit -����λ
//	byte -	�ֽ� 1byte=8bit 1kb=1024byte 1mb=1024kb 1gb=1024mb 1tb=1024gb 1pb=1024tb
//	kb	-	mb	-	gb	-	tb	-	pb*/
//	printf("%zu\n", sizeof(char));		//1���ֽ�	8bit
//	printf("%zu\n", sizeof(short));		//2���ֽ�	16bit
//	printf("%zu\n", sizeof(int));		//4���ֽ�	32bit
//	printf("%zu\n", sizeof(long));		//4���ֽ�	C���Թ涨��sizeof(long)>=sizeof(int)
//	printf("%zu\n", sizeof(long long));	//8���ֽ�
//	printf("%zu\n", sizeof(float));		//4���ֽ�
//	printf("%zu\n", sizeof(double));	//8���ֽ�
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	return 0;
//}

//����&����
//ȫ�ֱ�����{}�����ȫ�ֱ���
//�ֲ�������{}����Ǿֲ�����
//���鲻Ҫ��ȫ�ֱ����;ֲ���������д��һ��
//#include<stdio.h>
//int a = 100;		//ȫ�ֱ���
//int main()
//{
//	int a = 10;		//�ֲ�����
//	printf("a = %d", a);	//��ȫ�ֱ����;ֲ�������ͻ������� �ֲ�����
//	return 0;
//}

//дһ������������������ĺ�
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;//��ʼ����������������Լ���������򾯱�
//	/*a = 12;
//	b = 24;*/
//	scanf("%d %d",&a ,&b);//scanf�����뺯��
//	int sum = a + b;
//	printf("a+b=%d\n",sum);
//	return 0;
//
//}

//������������
// 1.�ֲ�����
// �ֲ��������������Ǳ������ڵľֲ���Χ
// 
// 2.ȫ�ֱ���
// ȫ�ֱ���������������������
// 
//��������������
// 1.�ֲ�����
// �����������������ڿ�ʼ�����������������ڽ���
// 2.ȫ�ֱ���
//�����������������

//#include<stdio.h>
//
////extern int a;
//////extern �������������ⲿ
//
//int main()
//{
//	int a = 10;
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}


//����
//
// 1.���泣��
//	30,3.14��'a'(�ַ�)��"abc"(�ַ���)
// 2.const ���εĳ�����(����ʹ���������޸�)
	//int main()
	//{
	//	const int a = 10;	��C������CONST���ε�a�������Ǳ�����������ֱ���޸ģ��г���������
	//	
	//	{
	//		printf("a=%d\n", a);
	//	}
	//	printf("a=%d\n", a);
	//	return 0;
	//}
//3.define ����ı�ʶ������(�����͵�)(ϰ��д��д)
	/*
	#define MAX 100

	int main()
	{
		int a = MAX;
		{
			printf("a=%d\n", a);
		}
		printf("a=%d\n", a);
		return 0;
	}*/
//4.ö�ٳ���(ϰ��д��д)
	//enum Color
	//{
	//	//ö�ٳ���
	//	RED,
	//	GREEN,
	//	BLUE
	//};
	//int main()
	//{
	//	//��ԭɫ
	//	enum Color c = RED;
	//	return 0;
	//}

//�ַ���	�ԡ�\0�����������ַ����Ľ�����־
	//#include<stdio.h>
	//#include<string.h>
	//int main()

	//{
	//	char arr1[10] = "abcdefg";
	//	char arr2[] = "'a','b','c','d','e'";
	//	printf("%s\n", arr1);
	//	printf("%s\n", arr2);
	//	int len = strlen(arr2);//strlen ���ַ������ȵ�һ��������string length ��Ҫͷ�ļ�string.h
	//	printf("%d\n", len);
	//	return 0;
	//}

//ת���ַ���ת��ԭ���ַ�����˼
//\n ���� \0�ַ���������־
//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%s - ��ӡ�ַ���
//%f - ��ӡfloat
//%lf - ��ӡdouble
//%zu - ��ӡsizeof����ֵ

//		\ddd-��λ�˽�������(0-7�����Ĳ���) \xdd-��λʮ����������  ת10���ƺ���ASCII����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
////	printf("\130 = %c\n", '\130');
////	printf("\x63 = %c\n", '\x63');
//	//printf("%d\n",strlen("ab cde"));
//	//printf("%d\n",strlen("c:\test\628\test.c"));//\ddd���ǰ˽������֣�8���ǰ˽������֣����Խ���\62Ϊһ��ת���ַ�
//	return 0;
//}
//



//C++ע�ͷ��
/*Cע�ͷ�� */
//1.ע�Ϳ�������˼·
//2.ע�Ϳ��ԶԸ��ӵĴ�����н���
//3.д����ʱдע���ǰ����Լ���������
//int main()
//{
//	//����ָ�����p������ֵΪNULL
//	int* p = NULL;
//	return 0;
//}

//ѡ��
// if()else;switch
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("yeyyey");
//	}
//	else {
//		printf("wuwuuwuwu");
//	}
//	return 0;
//}


//ѭ��
//int main() 
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("д���룺%d\n", line);
//		line++;
//	}
//	printf("offer");
//	return 0;
//}


//����
//ADD(int x, int y)
//{
//	int Z = x + y;
//	return Z;
//}
//int main ()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	scanf("%d %d", &n1, &n2);
//	int sum = 0;
//	//���
//	/*sum = n1 + n2;*/
//	sum = ADD(n1, n2);
//	//���
//	printf("%d", sum);
// 	return 0;
//
//}


//����
//һ����ͬ����Ԫ�صļ���
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	/*printf("%d", arr[8]);*/
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}