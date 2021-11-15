#include<iostream>
#include"11函数的分文件编写.h"
using namespace std;

//函数的分文件编写
//实现两个数字进行交换的函数

//函数的定义
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main()
{
	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}