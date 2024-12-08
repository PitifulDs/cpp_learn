#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <unordered_map>

using namespace std;

int minHomeValue(vector<int>& memberValues, vector<pair<int, int>>& relation) {
    unordered_map<int, int> memberMap;
    int maxValue = 0;
    for (auto& r : relation)
    {
        int key = r.first;
        memberMap[r.first]++;
    }

    for (auto& p : memberMap)
    {
        //int members = p.second + 1; // 加上自己
        //int minister = memberValues[p.first];
        int curHomeVaule = memberValues[p.first];
        for (int i = 0; i < relation.size(); i++)
        {
            if (relation[i].first == p.first)
            {
                curHomeVaule += memberValues[relation[i].second];
            }

        }
        maxValue = max(maxValue, curHomeVaule);
    }

    return maxValue;
}

/*最简单的方法*/
//int main() {
//    int n;
//    cin >> n;
//
//    // 这里wealth长度定义为n+1，是为了让wealth数组索引对应成员编号 1~N
//    int wealth[n + 1];
//    int family[n + 1];
//
//    for (int i = 1; i <= n; i++) {
//        cin >> wealth[i];
//        family[i] = wealth[i];
//    }
//
//    for (int i = 0; i < n - 1; i++) {
//        int fa, ch;
//        cin >> fa >> ch;
//        family[fa] += wealth[ch];
//    }
//
//    int ans = family[1];
//    for (int i = 2; i <= n; i++) {
//        ans = max(ans, family[i]);
//    }
//
//    cout << ans << endl;
//
//    return 0;
//}
//int main()
//{
//    int N;
//    cin >> N;
//    vector<int>  memberValues(N + 1);
//    for (int i = 1; i <= N; i++)
//    {
//        cin >> memberValues[i];
//    }
//    if (N == 1)
//    {
//        cout << memberValues[1] << endl;
//        return 0;
//    }
//    vector<pair<int, int>> relation;
//    for (int i = 0; i < N; i++)
//    {
//        string line;
//        getline(cin, line);
//        stringstream ss(line);
//        int f, s;
//        while (ss >> f >> s)
//        {
//            relation.push_back(make_pair(f, s));
//        }
//    }
//
//    int result = minHomeValue(memberValues, relation);
//    cout << result << endl;
//}
