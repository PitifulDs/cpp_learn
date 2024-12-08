#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

//int main() {
//    string s;
//    cin >> s;
//
//    int k;
//    cin >> k;
//
//    if (k <= 0)
//    {
//        cout << -1 << endl;
//        return 0;
//    }
//    unordered_map<char, int> maxLen; // 存储每个字母的最大子串长度
//    int n = s.length();
//
//    int i = 0;
//    while (i < n) {
//        char currentChar = s[i];
//        int length = 0;
//
//        // 计算当前连续子串的长度
//        while (i < n && s[i] == currentChar) {
//            length++;
//            i++;
//        }
//
//        // 更新每个字母的最大长度
//        maxLen[currentChar] = max(maxLen[currentChar], length);
//    }
//
//    // 提取所有最大长度并排序
//    vector<int> lengths;
//    for (const auto& entry : maxLen) {
//        lengths.push_back(entry.second);
//    }
//
//    sort(lengths.rbegin(), lengths.rend()); // 从大到小排序
//
//    // 输出第k长的长度
//    if (k > lengths.size()) {
//        cout << -1 << endl; // 如果k大于不同字母的数量，输出0
//    }
//    else {
//        cout << lengths[k - 1] << endl;
//    }
//
//    return 0;
//}
