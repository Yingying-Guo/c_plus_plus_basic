#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//ϵͳ���������
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;

	//��ҽ��в²�
	int val;

	while(1)
	{ 
		cin >> val;

		//�ж���ҵĲ²�

		//�´�   ��ʾ�µĽ�� �����ǹ�С   ���·��ص�2��
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			//�¶�   �˳���Ϸ
			cout << "��ϲ���¶���" << endl;
			break;
		}
	}
	
	
	return 0;
}