#include <iostream>
#include <string>
#include <cmath>

using namespace std;
// 连续正整数之和:n=a+(a+1)+(a+2)+...+(a+m−1)=m(2a+m-1)/2
// a = ((2n / m) - m + 1) / 2
string minNumSum(long& n)
{
	string res;
	// 遍历可能的 m 值，从 2 开始到 sqrt(2 * n) 为止
	for (int m = 2; m <= sqrt(2 * n); m++) // m的范围
	{
		// 检查 (2 * n) 是否可以被 m 整除
		if ((2 * n) % m == 0)
		{
			// 计算 temp = (2 * n) / m - m + 1
			int temp = (2 * n) / m - m + 1;
			// 检查 temp 是否是偶数，这样才能确保 2a 是整数
			if (temp % 2 == 0)
			{
				int a = temp / 2;
				if (a > 0)
				{
					res = to_string(n) + "=";
					for (int i = 0; i < m; i++)
					{
						if (i > 0) res += "+";
						res += to_string(a + i);
					}
					return res;
				}
			}
		}
	}

	return "N";
}
//
//
//int main()
//{
//	long n;
//	cin >> n; // 输入正整数
//	
//	string result = minNumSum(n);
//
//	cout << result << endl;
//
//}