#include<iostream>
using namespace std;

int main()
{
	//����5ֻС�����ص�����
	int arr[5] = { 300, 350, 200, 400, 250 };
	//���������ҵ����ֵ
	int max = arr[0]; //���϶�һ�����ֵΪ0
	for (int i = 0; i < 5; i++)
	{
		//������ʵ������е�Ԫ�ر����϶������ֵ���󣬸������ֵ
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	//��ӡ���ֵ
	cout << "���ص�С������Ϊ��" << max << endl;
	system("pause");
	return 0;
}