#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;


//// 本题实际考试时会核心代码模式，无需处理输入输出，只需要写出merge方法实现即可
//vector<vector<int>> merge(vector<vector<int>>& roomTimes) {
//    // 将各个会议按照开始时间升序
//    sort(roomTimes.begin(), roomTimes.end(), [](vector<int>& a, vector<int>& b) {
//        return a[0] < b[0];
//        });
//
//    // 记录合并后的会议室占用时间段
//    vector<vector<int>> res;
//
//    // 上一个会议占用时间段
//    vector<int> pre = roomTimes[0];
//
//    for (int i = 1; i < roomTimes.size(); i++) {
//        // 当前会议占用时间段
//        vector<int> cur = roomTimes[i];
//
//        if (cur[0] <= pre[1]) {
//            // 当前会议开始时间 <= 上一个会议结束时间，则两个会议时间重叠，可以合并
//            // 注意合并时，结束时间取两个时间段中较大的结束时间
//            pre[1] = max(pre[1], cur[1]);
//        }
//        else {
//            // 否则不可以合并
//            res.emplace_back(pre);
//            pre = cur;
//        }
//    }
//
//    res.emplace_back(pre);
//
//    return res;
//}
//
//// 输入输出处理
//int main() {
//    int n;
//    cin >> n;
//
//    vector<vector<int>> roomTimes;
//    for (int i = 0; i < n; i++) {
//        vector<int> roomTime;
//
//        int start, end;
//        cin >> start >> end;
//
//        roomTime.emplace_back(start);
//        roomTime.emplace_back(end);
//
//        roomTimes.emplace_back(roomTime);
//    }
//
//    vector<vector<int>> res = merge(roomTimes);
//    for (const auto& item : res) {
//        cout << item[0] << " " << item[1] << endl;
//    }
//
//    return 0;
//}