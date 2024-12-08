#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>
#include <climits>

using namespace std;

struct Path {
    int start;
    int end;
    int time;
};

struct Node {
    int computer;
    int time;

    // �������ȶ��еıȽ�����ʱ��Խ�����ȼ�Խ��
    bool operator>(const Node& other) const {
        return time > other.time;
    }
};

int theTimes(vector<int>& computerNums, vector<Path>& paths, int firstComputer) {
    int n = computerNums.size();

    // ͼ���ڽӱ��ʾ
    vector<vector<pair<int, int>>> graph(n);

    for (auto& p : paths) {
        // ���ڵ��Ա�Ŵ�1��ʼ��תΪ0����
        graph[p.start - 1].emplace_back(p.end - 1, p.time);
        graph[p.end - 1].emplace_back(p.start - 1, p.time);
    }

    // Dijkstra�㷨
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    vector<int> minTime(n, INT_MAX);

    minTime[firstComputer - 1] = 0;
    pq.push({ firstComputer - 1, 0 });

    while (!pq.empty()) {
        Node current = pq.top();
        pq.pop();

        int u = current.computer;
        int currTime = current.time;

        if (currTime > minTime[u]) continue;

        for (auto& edge : graph[u]) {
            int v = edge.first;
            int time = edge.second;

            if (minTime[u] + time < minTime[v]) {
                minTime[v] = minTime[u] + time;
                pq.push({ v, minTime[v] });
            }
        }
    }

    // �ҵ����ʱ��
    int maxTime = 0;
    for (int i = 0; i < n; ++i) {
        if (minTime[i] == INT_MAX) return -1; // ������κε����޷���Ⱦ
        maxTime = max(maxTime, minTime[i]);
    }

    return maxTime;
}

//int main() {
//    int n;  // ���Ը���
//    cin >> n;
//    vector<int> computerNums(n);
//    for (int i = 0; i < n; i++) {
//        computerNums[i] = i + 1; // ���Ա�Ŵ�1��n
//    }
//
//    int netNums; // ����������
//    cin >> netNums;
//    vector<Path> paths(netNums);
//    for (int i = 0; i < netNums; i++) {
//        cin >> paths[i].start >> paths[i].end >> paths[i].time;
//    }
//
//    int firstComputer;
//    cin >> firstComputer;
//
//    int result = theTimes(computerNums, paths, firstComputer);
//    cout << result << endl;
//
//    return 0;
//}
