#include <iostream>
#include <string>
#include <vector>

using namespace std;

int maxGems(vector<int> gemsPrices, int money)
{
	if (gemsPrices.size() == 0) return 0;

	int count = 0; // ��ʯ����
	int left = 0 , right = 0; // ����ָ��
	int curSum = 0; // ��ǰ�����ڵı�ʯ�۸��ܺ�
	while (right < gemsPrices.size())
	{
		// �����ұ߽磬�������󴰿�
		if (curSum + gemsPrices[right] <= money)
		{
         	curSum += gemsPrices[right];
			right++;
		}
		else {
			// �������ֵ������������߽�
			count = max(count, right - left);
			curSum -= gemsPrices[left];
			left++;
		}

	}

	// ����ٸ���һ�����ֵ
	count = max(count, right - left);


	return count;
}

//int main()
//{
//	int n; // ��ʯ����
//	cin >> n;
//
//	vector<int> gemsPrices(n); // ��ʯ�۸�
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> gemsPrices[i];
//	}
//		
//	int money; // �˿�Ǯ��
//	cin >> money;
//
//	int result = maxGems(gemsPrices, money);
//	cout << result << endl;
//
//}


//int maxGems(vector<int> gemsPrices, int money)
//{
//	vector<int> dp(money + 1, 0); // dp[i]��ʾ�˿�Ǯ��Ϊiʱ����ܹ���ı�ʯ����
//	for (int i = 0; i < gemsPrices.size(); i++)
//	{
//		for (int j = money; j >= gemsPrices[i]; j--)
//		{
//   			dp[j] = max(dp[j], dp[j - gemsPrices[i]] + 1);
//			
//		}
//	
//	}
//	return dp[money];
//}