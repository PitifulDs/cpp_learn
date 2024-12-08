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
		// �����ұ���
		for (int i = left; i <=right && currentNumber <= n; i++)
		{
			matrix[top][i] = to_string(currentNumber++);
		}
		top++;
		
		// ���ϵ���
		for (int i = top; i <= bottom && currentNumber <= n; i++)
		{
			matrix[i][right] = to_string(currentNumber++);
		}
		right--;

		// ���ҵ���
		for (int i = right; i >= left && currentNumber <= n; i--)
		{
			matrix[bottom][i] = to_string(currentNumber++);
		}
		bottom--;

		// ���µ���
		for (int i = bottom; i >= top && currentNumber <= n; i--)
		{
			matrix[i][left] = to_string(currentNumber++);
		}
		left++;

	}

	// ��*���ʣ��Ŀ�λ��
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
//	int n;	// ���ָ���
//	int m;	// ��������
//	cin >> n >> m;
//
//	// ��������,����ȡ��
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