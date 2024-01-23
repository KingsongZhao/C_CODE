#define _CRT_SECURE_NO_WARNINGS		//scanf报错时，看错误提示发现要用这个加在源文件的第一行，必须放第一行
//在VS的安装路径下有一个文件：newc++file.cpp的文件，在VS工程中创建新的.c或者.cpp文件的时候，都是拷贝newc++file.cpp这个文件！

#include<stdio.h>
#include<string.h>
//#include <stdio.h>
////std-标准 i-input o-output .h头文件
//int main()
////int-整型 main函数是程序的入口，有且仅有一个
//{
//	//printf("hehe\n");
//	//printf是一个库函数，专门用来打印数据
//
//	return 0;
//	//0-整数 习惯 正常返回0 异常返回非零 Ctrl+k+c注释 ctrl+k+u取消注释
//}

//#include<stdio.h>
//
//int main()
//{
//	//"%zu"返回sizeof返回的无符号整形
//	//计算机中的单位：
//	/*bit -比特位
//	byte -	字节 1byte=8bit 1kb=1024byte 1mb=1024kb 1gb=1024mb 1tb=1024gb 1pb=1024tb
//	kb	-	mb	-	gb	-	tb	-	pb*/
//	printf("%zu\n", sizeof(char));		//1个字节	8bit
//	printf("%zu\n", sizeof(short));		//2个字节	16bit
//	printf("%zu\n", sizeof(int));		//4个字节	32bit
//	printf("%zu\n", sizeof(long));		//4个字节	C语言规定：sizeof(long)>=sizeof(int)
//	printf("%zu\n", sizeof(long long));	//8个字节
//	printf("%zu\n", sizeof(float));		//4个字节
//	printf("%zu\n", sizeof(double));	//8个字节
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	return 0;
//}

//变量&常量
//全局变量：{}外的是全局变量
//局部变量：{}里的是局部变量
//建议不要把全局变量和局部变量名字写成一样
//#include<stdio.h>
//int a = 100;		//全局变量
//int main()
//{
//	int a = 10;		//局部变量
//	printf("a = %d", a);	//当全局变量和局部变量冲突的情况下 局部优先
//	return 0;
//}

//写一个代码计算两个整数的和
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;//初始化，否则编译器会自己随机给数或警报
//	/*a = 12;
//	b = 24;*/
//	scanf("%d %d",&a ,&b);//scanf是输入函数
//	int sum = a + b;
//	printf("a+b=%d\n",sum);
//	return 0;
//
//}

//变量的作用域
// 1.局部变量
// 局部变量的作用域是变量所在的局部范围
// 
// 2.全局变量
// 全局变量的作用域是整个工程
// 
//变量的生命周期
// 1.局部变量
// 进入作用域生命周期开始，出作用域生命周期结束
// 2.全局变量
//整个程序的生命周期

//#include<stdio.h>
//
////extern int a;
//////extern 声明符号来自外部
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


//常量
//
// 1.字面常量
//	30,3.14，'a'(字符)，"abc"(字符串)
// 2.const 修饰的常变量(可以使变量不可修改)
	//int main()
	//{
	//	const int a = 10;	在C语言中CONST修饰的a，本质是变量，但不能直接修改，有常量的属性
	//	
	//	{
	//		printf("a=%d\n", a);
	//	}
	//	printf("a=%d\n", a);
	//	return 0;
	//}
//3.define 定义的标识符常量(无类型的)(习惯写大写)
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
//4.枚举常量(习惯写大写)
	//enum Color
	//{
	//	//枚举常量
	//	RED,
	//	GREEN,
	//	BLUE
	//};
	//int main()
	//{
	//	//三原色
	//	enum Color c = RED;
	//	return 0;
	//}

//字符串	以“\0”结束，是字符串的结束标志
	//#include<stdio.h>
	//#include<string.h>
	//int main()

	//{
	//	char arr1[10] = "abcdefg";
	//	char arr2[] = "'a','b','c','d','e'";
	//	printf("%s\n", arr1);
	//	printf("%s\n", arr2);
	//	int len = strlen(arr2);//strlen 求字符串长度的一个函数，string length 需要头文件string.h
	//	printf("%d\n", len);
	//	return 0;
	//}

//转义字符：转变原来字符的意思
//\n 换行 \0字符串结束标志
//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float
//%lf - 打印double
//%zu - 打印sizeof返回值

//		\ddd-三位八进制数字(0-7超过的不算) \xdd-两位十六进制数字  转10进制后按照ASCII编码
//#include<stdio.h>
//#include<string.h>
//int main()
//{
////	printf("\130 = %c\n", '\130');
////	printf("\x63 = %c\n", '\x63');
//	//printf("%d\n",strlen("ab cde"));
//	//printf("%d\n",strlen("c:\test\628\test.c"));//\ddd都是八进制数字，8不是八进制数字，所以解析\62为一个转义字符
//	return 0;
//}
//



//C++注释风格
/*C注释风格 */
//1.注释可以梳理思路
//2.注释可以对复杂的代码进行解释
//3.写代码时写注释是帮助自己帮助别人
//int main()
//{
//	//创建指针变量p，并赋值为NULL
//	int* p = NULL;
//	return 0;
//}

//选择
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


//循环
//int main() 
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	printf("offer");
//	return 0;
//}


//函数
//ADD(int x, int y)
//{
//	int Z = x + y;
//	return Z;
//}
//int main ()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	int sum = 0;
//	//求和
//	/*sum = n1 + n2;*/
//	sum = ADD(n1, n2);
//	//输出
//	printf("%d", sum);
// 	return 0;
//
//}


//数组
//一组相同类型元素的集合
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