#include <iostream>
#include <string>
#include <vector>

using namespace std;

//int main()
//{
//	int N, E;	// ��N��ָ��, �������еĺ������յ�ֵE
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
//		// �������������ۼ�
//		curSum += (curX - prevX) * abs(prevY); // Y����Ϊ����
//		
//		// ���µ�ǰ�ڵ�Ϊ��һ�����
//		prevX = curX;
//		prevY = curY;
//	}
//
//	// �������һ���㵽�յ�E�Ĳ���
//	curSum += (E - prevX) * abs(prevY);
//
//	cout << curSum << endl;
//
//}


