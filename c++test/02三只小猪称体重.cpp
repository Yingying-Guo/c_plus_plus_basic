#include <iostream>
using namespace std;

int main() 
{
	//3ֻС������أ��ж���ֻ����
	//����3ֻС������ر���
	double a, b, c;

	//���û�����3ֻС�������
	cout << "������a������" << endl;
	cin >> a;
	cout << "������b������" << endl;
	cin >> b; 
	cout << "������c������" << endl;
	cin >> c;
	//�ж���ֻ����
	if (a >= b) 
	{
		if (a >= c)
		{
			cout << "a����" << endl;
		}
		else
		{
			cout << "c����" << endl;
		}
	}
	else 
	{
		if (b >= c)
		{
			cout << "b����" << endl;
		}
		else
		{
			cout << "c����" << endl;
		}
	}

}