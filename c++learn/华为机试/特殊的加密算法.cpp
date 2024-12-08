#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
//
//int drx[4] = {-1, 1, 0, 0};	// x��
//int dry[4] = {0, 0, -1, 1};	// y��
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
//		{ // �����Ƚ�˳��
//			bestPath = curPath;
//		}
//		return;
//	}
//
//	// ����Χ���ֽ��д���, ���ң��£���
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
//			// ����
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
//			// �����������������
//			if (matrix[i][j] == data[0])
//			{
//				// ���visited
//				visited[i][j] = true;
//				// ��ӵ�curPath
//				curPath = to_string(i) + " " + to_string(j) + " ";
//				// ��ȱ���
//				int index = 1; // data��һ�����ֵ�����
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




//// �ĸ�������ƶ����ϡ��¡�����
//int dx[4] = { -1, 1, 0, 0 };
//int dy[4] = { 0, 0, -1, 1 };
//
//// ��������Ƿ��ھ�����
//bool isValid(int x, int y, int m) {
//	return x >= 0 && x < m && y >= 0 && y < m;
//}
//
//// �����������
//void dfs(vector<vector<int>>& matrix, vector<int>& data, vector<vector<bool>>& visited,
//	string& currentPath, string& bestPath, int index, int x, int y)
//{
//	// ����Ѿ�ƥ�䵽���ĵ����һ���ַ�
//	if (index == data.size())
//	{
//		// �����ֵ���С��
//		if (bestPath.empty() || currentPath < bestPath)
//		{
//			bestPath = currentPath;
//		}
//		return;
//	}
//
//	// ���ĸ��������dfs����,˳��Ϊ���ң��ϣ���
//	for (int dir = 0; dir < 4; dir++)
//	{
//		int newX = x + dx[dir];
//		int newY = y + dy[dir];
//		
//		if (isValid(newX, newY, matrix.size()) && !visited[newX][newY] && matrix[newX][newY] == data[index])
//		{
//			visited[newX][newY] = true; // ��Ƿ���
//			currentPath += to_string(newX) + " " + to_string(newY) + " ";
//			dfs(matrix, data, visited, currentPath, bestPath, index + 1, newX, newY);
//			// �Ƴ� currentPath �������ӵ� ���� �С� �ַ���, �� �ո� �� �ո�
//			currentPath.erase(currentPath.end() - 4, currentPath.end()); // ����
//			visited[newX][newY] = false;	// ȡ�����
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
//	// ����ÿ����ʼ��
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			// �����ʼ����������������ַ�ƥ��
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