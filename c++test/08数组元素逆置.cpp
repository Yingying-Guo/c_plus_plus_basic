#include<iostream>
using namespace std;

int main()
{
	//ʵ������Ԫ������
	//��������
	int arr[5] = { 1, 3, 2, 5, 4 };
	cout << "��������ǰ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//ʵ������
	//��¼��ʼ�±�λ��
	//��¼�����±�λ��
	//��ʼ�±�������±��Ԫ�غ���
	//��ʼλ��++  ����λ��--
	//ѭ��ִ�м�¼��ʼ�±�λ�ã�ֱ����ʼλ�� >= ����λ��
	int start = 0; //��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1; //�����±�

	while (start < end)
	{
		//ʵ��Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//�°����
		start++;
		end--;
	}
	
	//��ӡ���ú������
	cout << "�������ú�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}