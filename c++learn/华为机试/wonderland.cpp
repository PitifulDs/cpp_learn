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
        // 如果当前日期不在游玩日期中，则不需要购买门票，花费与前一天相同
        if (daySet.count(i) == 0)
        {
            dp[i] = dp[i - 1];
        }
        else {
            dp[i] = dp[i-1]+costs[0];   // 购买一日票
            dp[i] = min(dp[i], dp[max(0, i - 3)] + costs[1]); // 购买三日票
            dp[i] = min(dp[i], dp[max(0, i - 7)] + costs[2]); // 购买周票
            dp[i] = min(dp[i], dp[max(0, i - 30)] + costs[3]); // 购买月票
        }


    }

    return dp[lastDay];
}



//int main()
//{
//    vector<int> costs(4); // 售票价格数组,顺序为一日票、三日票、周票和月票
//    for (int i = 0; i < 4; i++)
//    {
//        cin >> costs[i];
//    }
//
//    vector<int> days; // 游玩日期数组, 默认升序
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