#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

//// 使用优先队列来贪心选择最大收益
//int maxEarnings(int t, int n, vector<int>& times, vector<int>& M, vector<int>& D)
//{
//   
//
//
//}
//int main() {
//    int t, n; // t总天数，n经过的城市
//    cin >> t >> n;
//    vector<int> times(n + 1);
//    int sumTimes = 0;
//    for (int i = 0; i <= n; i++) {
//        cin >> times[i];
//        sumTimes += times[i];
//    }
//    if (sumTimes > t) return 0;
//
//    vector<int> M(n), D(n);
//    for (int i = 0; i < n; i++) {
//        cin >> M[i] >> D[i];
//    }
//    int result = maxEarnings(t, n, times, M, D);
//    cout << result << endl;
//   
//}
