#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int mincostTickets(vector<int>& days, vector<int>& costs)
{
    int n = days.size();
    int lastDay = days[n - 1];
    vector<int> dp(lastDay + 1, 0);
    unordered_set<int> daySet(days.begin(), days.end());

    for (int i = 0; i <= lastDay; i++)
    {
        // �����ǰ���ڲ������������У�����Ҫ������Ʊ��������ǰһ����ͬ
        if (daySet.count(i) == 0)
        {
            dp[i] = dp[i - 1];
        }
        else {
            dp[i] = dp[i-1]+costs[0];   // ����һ��Ʊ
            dp[i] = min(dp[i], dp[max(0, i - 3)] + costs[1]); // ��������Ʊ
            dp[i] = min(dp[i], dp[max(0, i - 7)] + costs[2]); // ������Ʊ
            dp[i] = min(dp[i], dp[max(0, i - 30)] + costs[3]); // ������Ʊ
        }


    }

    return dp[lastDay];
}



//int main()
//{
//    vector<int> costs(4); // ��Ʊ�۸�����,˳��Ϊһ��Ʊ������Ʊ����Ʊ����Ʊ
//    for (int i = 0; i < 4; i++)
//    {
//        cin >> costs[i];
//    }
//
//    vector<int> days; // ������������, Ĭ������
//    int day;
//    while (cin >> day)
//    {
//        days.push_back(day);
//    }
//
//    int result = mincostTickets(days, costs);
//    cout << result << endl;
//
//}