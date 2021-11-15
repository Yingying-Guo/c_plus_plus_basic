#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//系统生成随机数
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;

	//玩家进行猜测
	int val;

	while(1)
	{ 
		cin >> val;

		//判断玩家的猜测

		//猜错   提示猜的结果 过大还是过小   重新返回第2步
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			//猜对   退出游戏
			cout << "恭喜您猜对了" << endl;
			break;
		}
	}
	
	
	return 0;
}