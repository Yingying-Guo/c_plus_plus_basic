#include<iostream>
#include"11�����ķ��ļ���д.h"
using namespace std;

//�����ķ��ļ���д
//ʵ���������ֽ��н����ĺ���

//�����Ķ���
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