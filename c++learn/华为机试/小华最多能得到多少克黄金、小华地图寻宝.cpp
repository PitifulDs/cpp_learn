#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 计算坐标数位和
int digitSum(int x)
{
	int sum = 0;
	while (x > 0)
	{
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

// 检查是否可以访问该格子
bool canEnter(int x, int y, int k) {
	return digitSum(x) + digitSum(y) <= k;
}

// 深度优先搜索
void dfsGold(vector<vector<bool>>& visited, int m, int n, int k, int i, int j, int& count)
{
	if (i < 0 || i >= m || j < 0 || j >= n || visited[i][j] || !canEnter(i, j, k))
	{
		return;
	}

	visited[i][j] = true;
	count++;

	// 四个方向遍历
   	dfsGold(visited, m, n, k, i + 1, j, count);
	dfsGold(visited, m, n, k, i - 1, j, count);
   	dfsGold(visited, m, n, k, i, j + 1, count);
	dfsGold(visited, m, n, k, i, j - 1, count);
}

//int main()
//{
//	int m, n, k; // m行n列, i,j的数位之和=k,有1g黄金
//   	cin >> m >> n >> k;
//
//	vector<vector<bool>> visited(m, vector<bool>(n, false));
//	int count = 0;
//
//	dfsGold(visited, m, n, k, 0, 0, count);
//
//	cout<<count<<endl;
//    return 0;
//
//}

























//int main()
//{
//	int m, n, k; // m行n列, k=i+j,有1g黄金
//	cin >> m >> n >> k;
//
//	vector<vector<int>> matrix(m, vector<int>(n, 0));
//
//	int count = 0; // 记录找到的黄金数量
//	int right, bottom;
//	if (m >= n)
//	{
//		right = m;
//		bottom = n;
//	}
//	else {
//        right = n;
//        bottom = m;
//	}
//
//
//	for (int i = 0; i < right; i++)
//	{
//		int tmp = i;
//
//		if (tmp == k)
//		{
//			count++;
//			continue;
//		}
//		else if (tmp > k)
//		{
//			break;
//		}
//		else
//		{
//			for (int j = 0; j < bottom; j++) 
//			{
//				tmp = i + j;
//				if (tmp <= k)
//				{
//					count++;
//					continue;
//				}
//				else {
//                 	break;
//				}
//
//			}
//		}
//	}
//	
//	cout << count << endl;
//
//
//
//}