#include <iostream>
using namespace std;

int main()
{
	//先打印所有三位数
	int num = 100;
	
	do
	{
		//从所有三位数字中找到水仙花数
		int a = num % 10;//个位
		int b = num / 10 % 10;//十位
		int c = num / 100;//百位
		if (a * a * a + b * b * b + c * c * c == num) //如果是水仙花数，才打印
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	return 0;
}