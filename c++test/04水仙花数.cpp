#include <iostream>
using namespace std;

int main()
{
	//�ȴ�ӡ������λ��
	int num = 100;
	
	do
	{
		//��������λ�������ҵ�ˮ�ɻ���
		int a = num % 10;//��λ
		int b = num / 10 % 10;//ʮλ
		int c = num / 100;//��λ
		if (a * a * a + b * b * b + c * c * c == num) //�����ˮ�ɻ������Ŵ�ӡ
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	return 0;
}