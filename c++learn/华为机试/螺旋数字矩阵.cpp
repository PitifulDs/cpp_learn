#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void spiralMatrix(int rows, int cols, vector<vector<string>>& matrix, int n)
{
	int left = 0, right = cols - 1, top = 0, bottom = rows - 1;
	int currentNumber = 1;

	while (left <= right && top <= bottom)
	{
		// 从左到右遍历
		for (int i = left; i <=right && currentNumber <= n; i++)
		{
			matrix[top][i] = to_string(currentNumber++);
		}
		top++;
		
		// 从上到下
		for (int i = top; i <= bottom && currentNumber <= n; i++)
		{
			matrix[i][right] = to_string(currentNumber++);
		}
		right--;

		// 从右到左
		for (int i = right; i >= left && currentNumber <= n; i--)
		{
			matrix[bottom][i] = to_string(currentNumber++);
		}
		bottom--;

		// 从下到上
		for (int i = bottom; i >= top && currentNumber <= n; i--)
		{
			matrix[i][left] = to_string(currentNumber++);
		}
		left++;

	}

	// 用*填充剩余的空位置
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (matrix[i][j] == "")
			{
				matrix[i][j] = "*";
			}
		}
	}


}

//int main()
//{
//	int n;	// 数字个数
//	int m;	// 矩阵行数
//	cin >> n >> m;
//
//	// 计算列数,向上取整
//	int cols = (m + n - 1) / m; 
//	cout << cols << endl;
//	vector<vector<string>> matrix(m, vector<string>(cols, ""));
//
//	spiralMatrix(m, cols, matrix, n);
//
//	for (auto& row : matrix)
//	{
//		for (auto& str : row)
//		{
//			cout << setw(2) << str << " ";
//		}
//		cout << endl;
//	}
//
//
//}