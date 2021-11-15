#include <iostream>
using namespace std;

int main() 
{
	//3只小猪称体重，判断哪只最重
	//创建3只小猪的体重变量
	double a, b, c;

	//让用户输入3只小猪的重量
	cout << "请输入a的体重" << endl;
	cin >> a;
	cout << "请输入b的体重" << endl;
	cin >> b; 
	cout << "请输入c的体重" << endl;
	cin >> c;
	//判断那只最重
	if (a >= b) 
	{
		if (a >= c)
		{
			cout << "a最重" << endl;
		}
		else
		{
			cout << "c最重" << endl;
		}
	}
	else 
	{
		if (b >= c)
		{
			cout << "b最重" << endl;
		}
		else
		{
			cout << "c最重" << endl;
		}
	}

}