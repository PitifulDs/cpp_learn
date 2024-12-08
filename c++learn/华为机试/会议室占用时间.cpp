#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;


//// ����ʵ�ʿ���ʱ����Ĵ���ģʽ�����账�����������ֻ��Ҫд��merge����ʵ�ּ���
//vector<vector<int>> merge(vector<vector<int>>& roomTimes) {
//    // ���������鰴�տ�ʼʱ������
//    sort(roomTimes.begin(), roomTimes.end(), [](vector<int>& a, vector<int>& b) {
//        return a[0] < b[0];
//        });
//
//    // ��¼�ϲ���Ļ�����ռ��ʱ���
//    vector<vector<int>> res;
//
//    // ��һ������ռ��ʱ���
//    vector<int> pre = roomTimes[0];
//
//    for (int i = 1; i < roomTimes.size(); i++) {
//        // ��ǰ����ռ��ʱ���
//        vector<int> cur = roomTimes[i];
//
//        if (cur[0] <= pre[1]) {
//            // ��ǰ���鿪ʼʱ�� <= ��һ���������ʱ�䣬����������ʱ���ص������Ժϲ�
//            // ע��ϲ�ʱ������ʱ��ȡ����ʱ����нϴ�Ľ���ʱ��
//            pre[1] = max(pre[1], cur[1]);
//        }
//        else {
//            // ���򲻿��Ժϲ�
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
//// �����������
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