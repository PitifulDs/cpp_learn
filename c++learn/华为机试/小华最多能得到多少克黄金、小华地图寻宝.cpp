#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ����������λ��
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

// ����Ƿ���Է��ʸø���
bool canEnter(int x, int y, int k) {
	return digitSum(x) + digitSum(y) <= k;
}

// �����������
void dfsGold(vector<vector<bool>>& visited, int m, int n, int k, int i, int j, int& count)
{
	if (i < 0 || i >= m || j < 0 || j >= n || visited[i][j] || !canEnter(i, j, k))
	{
		return;
	}

	visited[i][j] = true;
	count++;

	// �ĸ��������
   	dfsGold(visited, m, n, k, i + 1, j, count);
	dfsGold(visited, m, n, k, i - 1, j, count);
   	dfsGold(visited, m, n, k, i, j + 1, count);
	dfsGold(visited, m, n, k, i, j - 1, count);
}

//int main()
//{
//	int m, n, k; // m��n��, i,j����λ֮��=k,��1g�ƽ�
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
//	int m, n, k; // m��n��, k=i+j,��1g�ƽ�
//	cin >> m >> n >> k;
//
//	vector<vector<int>> matrix(m, vector<int>(n, 0));
//
//	int count = 0; // ��¼�ҵ��Ļƽ�����
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