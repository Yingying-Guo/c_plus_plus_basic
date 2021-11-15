#include<iostream>
using namespace std;

int main()
{
	//实现数组元素逆置
	//创建数组
	int arr[5] = { 1, 3, 2, 5, 4 };
	cout << "数组逆置前：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//实现逆置
	//记录起始下标位置
	//记录结束下标位置
	//起始下标与结束下标的元素呼唤
	//起始位置++  结束位置--
	//循环执行记录起始下标位置，直到起始位置 >= 结束位置
	int start = 0; //起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1; //结束下标

	while (start < end)
	{
		//实现元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//下班更新
		start++;
		end--;
	}
	
	//打印逆置后的数组
	cout << "数组逆置后：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}