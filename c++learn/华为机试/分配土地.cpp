#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int maxArea(vector<vector<int>>& arr, int row, int col)
{
	unordered_map<int, vector<int>> hashMap;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			int num = arr[i][j];
			if(num>0)
			{
				if (hashMap.count(num) == 0)
				{
					// 初始化边界信息
					hashMap[num] = { i, i, j, j };// {minRow, maxRow, minCol, maxCol}
				}
				else {
					// 更新边界信息
					hashMap[num][0] = min(hashMap[num][0], i);	// 更新最小行
					hashMap[num][1] = max(hashMap[num][1], i);	// 更新最大行
					hashMap[num][2] = min(hashMap[num][2], j);	// 更新最小列
					hashMap[num][3] = max(hashMap[num][3], j);	// 更新最大列
				}
			}
		}
	}

	// 计算最大面积
	int maxSum = 0;
	for (auto& pair : hashMap)
	{
		vector<int>& bounds = pair.second;
		int area = (bounds[1] - bounds[0] + 1) * (bounds[3] - bounds[2] + 1);
		maxSum = max(maxSum, area);
	}


	return maxSum;
}
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	
//	vector<vector<int>> matrix(m, vector<int>(n));
//
//
//	for (int i = 0; i < m; ++i) {
//		for (int j = 0; j < n; ++j) {
//			cin >> matrix[i][j];
//		}
//	}
//
//	int result = maxArea(matrix, m, n);
//	cout << result << endl;
//
//
//
//}