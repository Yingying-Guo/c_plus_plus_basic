#include<iostream>
#include<string>
using namespace std;

int main()
{
	//��ά���鰸�� - ���Գɼ�ͳ��
	//������ά����
	int scores[3][3] =
	{
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};

	string names[3] = { "����", "����", "����" };

	//ͳ��ÿ���˵��ܺͷ���
	for (int i = 0; i < 3; i++)
	{
		int sum = 0; //ͳ�Ʒ����ܺ�
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << names[i] <<  "���ܷ�Ϊ��" << sum << endl;
	}
	system("pause");
	return 0;
}