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
//	// ��index��ʼ�ݹ��ѡ���ѡ��ǰ���
//	for (int i = index; i < players.size(); i++) {
//		backTrace(players, i + 1, groupSum + players[i], minDiff, totalSum, selectedCount + 1);
//	}
//}
// 
//int theMinValue(vector<int>& players)
//{
//	int totalSum = accumulate(players.begin(), players.end(), 0);
//	int minDiff = INT_MAX; // ��ʼ����С��ֵΪ���ֵ
//	backTrace(players, 0, 0, minDiff, totalSum, 0); // �ӵ�һ��Ԫ�ؿ�ʼ�ݹ�
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

