#include <iostream>
#include <string>
#include <vector>

using namespace std;

//int main()
//{
//	int N, E;	// 有N条指令, 机器运行的横坐标终点值E
//	cin >> N >> E;
//
//	vector<pair<int, int>> instructions(N);
//	
//	for (int i = 0; i < N; i++)
//	{
//		cin >> instructions[i].first >> instructions[i].second;
//	}
//
//	int prevX = 0;
//	int prevY = 0;
//	int curSum = 0;
//	
//	for (int i = 0; i < N; i++)
//	{
//		int curX = instructions[i].first;
//		int curY = prevY + instructions[i].second;
//
//		// 计算矩形面积并累加
//		curSum += (curX - prevX) * abs(prevY); // Y可能为负数
//		
//		// 更新当前节点为下一个起点
//		prevX = curX;
//		prevY = curY;
//	}
//
//	// 处理最后一个点到终点E的部分
//	curSum += (E - prevX) * abs(prevY);
//
//	cout << curSum << endl;
//
//}


