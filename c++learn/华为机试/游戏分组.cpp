#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>
#include <numeric>
#include <limits.h>
using namespace std;

//void backTrace(vector<int>& players, int index, int groupSum, 
//	int& minDiff, int totalSum, int selectedCount)
//{
//	if (selectedCount == 5)
//	{
//		int otherGroupSum = totalSum - groupSum;
//		minDiff = min(minDiff, abs(groupSum - otherGroupSum));
//		return;
//	}
//	// 从index开始递归地选择或不选择当前玩家
//	for (int i = index; i < players.size(); i++) {
//		backTrace(players, i + 1, groupSum + players[i], minDiff, totalSum, selectedCount + 1);
//	}
//}
// 
//int theMinValue(vector<int>& players)
//{
//	int totalSum = accumulate(players.begin(), players.end(), 0);
//	int minDiff = INT_MAX; // 初始化最小差值为最大值
//	backTrace(players, 0, 0, minDiff, totalSum, 0); // 从第一个元素开始递归
//
//
//
//	return minDiff;
//}
//
//int main()
//{
//	string line;
//	getline(cin, line);
//	stringstream ss(line);
//	string temp;
//	vector<int> players;
//	while (getline(ss, temp, ' '))
//	{
//		players.push_back(stoi(temp));
//	}
//
//
//	int result = theMinValue(players);
//
//	cout << result << endl;
//
//
//
//}

