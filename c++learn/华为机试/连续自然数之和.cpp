#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second; // 按字符串长度升序排序
}
vector<pair<string, int>> oddSum(int T)
{
    vector<pair<string, int>> res;
    int left = 1, right = 1;
    int windowSum = 1; // 滑动窗口的左右边界
    while (left <= T / 2 + 1)
    {
        if (windowSum < T)
        {
            right++;
            windowSum += right;
        }
        else if (windowSum > T)
        {
            windowSum -= left;
            left++;
        }
        else {
            string temp = to_string(T) + "=";
            int count = 0;
            for (int i = left; i <= right; i++)
            {
                temp += to_string(i) + "+";
                count++;
            }
            res.push_back(make_pair(temp, count));

            // 移动左边界，继续寻找下一个可能的窗口
            windowSum -= left;
            left++;
        }
    }

    // 特殊情况
    res.push_back(make_pair(to_string(T) + "=" + to_string(T), 1));

    // 按自然数个数最少排序
    sort(res.begin(), res.end(), compare);
    return res;

}


//int main()
//{
//    int T;
//    cin >> T;
//
//    vector<pair<string, int>> result = oddSum(T);
//
//
//    for (auto& pair : result)
//    {
//        string str = pair.first;
//        if (str.back() == '+')
//        {
//            str.pop_back();
//        }
//        cout << str << endl;
//
//    }
//    cout << "Result:" << result.size() << endl;
//
//}
//void oddNumsSum(int T)
//{
//    vector<pair<int, string>> results; // 用于存储每个表达式及其长度
//    int left = 1, right = 1; // 滑动窗口的左右边界
//    int windowSum = 1; // 当前窗口内自然数的和
//
//    while (left <= T / 2 + 1) {
//        if (windowSum < T) {
//            right++;
//            windowSum += right;
//        }
//        else if (windowSum > T) {
//            windowSum -= left;
//            left++;
//        }
//        else {
//            // 找到符合条件的表达式
//            string res = to_string(T) + " = " + to_string(left);
//            for (int i = left + 1; i <= right; i++) {
//                res += " + " + to_string(i);
//            }
//            results.push_back({ right - left + 1, res });
//
//            // 移动左边界，继续寻找下一个可能的窗口
//            windowSum -= left;
//            left++;
//        }
//    }
//
//    // 添加 T = T 的情况
//    results.push_back({ 1, to_string(T) + " = " + to_string(T) });
//
//    // 按自然数个数最少排序
//    sort(results.begin(), results.end());
//
//    // 输出结果
//    for (const auto& result : results) {
//        cout << result.second << endl;
//    }
//    cout << "Result: " << results.size() << endl;
//}
//
//void oddNumsSum2(int T)
//{
//    // 连续正整数之和:T=a+(a+1)+(a+2)+...+(a+n−1)= n*a + (n*(n-1))/2 =n(2a+n-1)/2
//    // a = T - n*(n-1)/2 / n
//    vector<pair<int, string>> results; // 用于存储每个表达式及其长度
//    string res;
//    /* n* (n + 1) / 2 <= T：这个条件确保 n 个最小的连续自然数的和不会超过 T。
//    这是因为连续自然数从 1 开始时，n 个数的最小和是 1 + 2 + ... + n，即 n * (n + 1) / 2。*/
//    for (int n = 1; n * (n + 1) / 2 <= T; n++)
//    {
//        int numerator = T - n * (n - 1) / 2;
//
//        // 判断分子能够整除n
//        if (numerator % n == 0)
//        {
//            int a = numerator / n;
//            if (a > 0)
//            {
//                res = to_string(T) + " = " + to_string(a);
//                for (int i = 1; i < n; i++)
//                {
//                    res += "+" + to_string(a + i);
//
//                }
//                results.push_back({ n, res });
//            }
//        }
//
//    }
//    // 按自然数个数最少排序
//    sort(results.begin(), results.end());
//
//    // 输出结果
//    for (const auto& result : results) {
//        cout << result.second << endl;
//    }
//    cout << "Result: " << results.size() << endl;
//   
//}
//


//int main()
//{
//    int T; // 目标整数
//    cin >> T;
//    if (T >= 1 && T <= 1000) {
//        // oddNumsSum(T);
//        oddNumsSum2(T);
//    }
//
//    return 0;
//}
