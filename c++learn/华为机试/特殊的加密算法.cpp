#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
//
//int drx[4] = {-1, 1, 0, 0};	// x轴
//int dry[4] = {0, 0, -1, 1};	// y轴
//
//bool isValid(int x, int y, int m)
//{
//	return x >= 0 && x < m && y >= 0 && y < m;
//}
//
//
//void dfs(vector<int>& data, vector<vector<int>>& matrix, vector<vector<bool>> visited,string& bestPath, string& curPath,int index, int x, int y)
//{
//	if (index == data.size())
//	{
//		if (bestPath == "error" || curPath < bestPath)
//		{ // 纠正比较顺序
//			bestPath = curPath;
//		}
//		return;
//	}
//
//	// 对周围数字进行处理, 左，右，下，上
//	for (int i = 0; i < 4; i++)
//	{
//		int newX = x + drx[i];
//		int newY = y + dry[i];
//
//		if (isValid(newX, newY, matrix.size()) && !visited[newX][newY] && data[index] == matrix[newX][newY])
//		{
//			visited[newX][newY] = true;
//			curPath += to_string(newX) + " " + to_string(newY) + " ";
//			dfs(data, matrix, visited, bestPath, curPath, index + 1, newX, newY);
//			// 回溯
//			curPath.erase(curPath.end() - 4, curPath.end());
//			visited[newX][newY] = false;
//		}
//	}
//
//
//}
//
//
//string encryptPass(vector<int>& data, vector<vector<int>>& matrix)
//{
//	int m = matrix.size();
//	int n = data.size();
//	string bestPath = "error";
//	vector<string> curRes;
//	string curPath;
//	vector<vector<bool>> visited(m, vector<bool>(m, false));
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			// 密文与明文首数相等
//			if (matrix[i][j] == data[0])
//			{
//				// 标记visited
//				visited[i][j] = true;
//				// 添加到curPath
//				curPath = to_string(i) + " " + to_string(j) + " ";
//				// 深度遍历
//				int index = 1; // data下一个数字的坐标
//				dfs(data, matrix, visited,bestPath, curPath, index, i, j);
//
//			}
//
//		}
//	}
//	return bestPath;
//
//}
//
//int main()
//{
//	int m, n;
//	cin >> n;
//
//	vector<int> data(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> data[i];
//	}
//
//	cin >> m;
//	vector<vector<int>> matrix(m, vector<int>(m));
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//
//	string result = encryptPass(data, matrix);
//	cout << result << endl;
//
//}




//// 四个方向的移动：上、下、左、右
//int dx[4] = { -1, 1, 0, 0 };
//int dy[4] = { 0, 0, -1, 1 };
//
//// 检查坐标是否在矩阵内
//bool isValid(int x, int y, int m) {
//	return x >= 0 && x < m && y >= 0 && y < m;
//}
//
//// 深度优先搜索
//void dfs(vector<vector<int>>& matrix, vector<int>& data, vector<vector<bool>>& visited,
//	string& currentPath, string& bestPath, int index, int x, int y)
//{
//	// 如果已经匹配到明文的最后一个字符
//	if (index == data.size())
//	{
//		// 更新字典最小序
//		if (bestPath.empty() || currentPath < bestPath)
//		{
//			bestPath = currentPath;
//		}
//		return;
//	}
//
//	// 从四个方向进行dfs搜索,顺序为左，右，上，下
//	for (int dir = 0; dir < 4; dir++)
//	{
//		int newX = x + dx[dir];
//		int newY = y + dy[dir];
//		
//		if (isValid(newX, newY, matrix.size()) && !visited[newX][newY] && matrix[newX][newY] == data[index])
//		{
//			visited[newX][newY] = true; // 标记访问
//			currentPath += to_string(newX) + " " + to_string(newY) + " ";
//			dfs(matrix, data, visited, currentPath, bestPath, index + 1, newX, newY);
//			// 移除 currentPath 中最近添加的 “行 列” 字符串, 行 空格 列 空格
//			currentPath.erase(currentPath.end() - 4, currentPath.end()); // 回溯
//			visited[newX][newY] = false;	// 取消标记
//		}
//
//	}
//
//
//}
//
//string encryptPass(vector<int>& data, vector<vector<int>>& matrix)
//{
//	int n = data.size();
//	int m = matrix.size();
//	string bestPath = "error";
//	string curPath;
//	vector<vector<bool>> visited(m, vector<bool>(m, false));
//
//	// 遍历每个起始点
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			// 如果起始点的数字与明文首字符匹配
//			if (matrix[i][j] == data[0])
//			{
//				visited[i][j] = true;
//				curPath = to_string(i) + " " + to_string(j) + " ";
//				dfs(matrix, data, visited, curPath, bestPath, 1, i, j);
//
//			}
//
//		}
//	}
//
//	return bestPath;
//
//}
//
//int main()
//{
//	int m, n;
//	cin >> n;
//	cin.ignore();
//
//	vector<int> data(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> data[i];
//	}
//
//	cin >> m;
//	vector<vector<int>> matrix(m, vector<int>(m));
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//
//	string result = encryptPass(data, matrix);
//	cout << result << endl;
//
//}