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
//    unordered_map<char, int> maxLen; // �洢ÿ����ĸ������Ӵ�����
//    int n = s.length();
//
//    int i = 0;
//    while (i < n) {
//        char currentChar = s[i];
//        int length = 0;
//
//        // ���㵱ǰ�����Ӵ��ĳ���
//        while (i < n && s[i] == currentChar) {
//            length++;
//            i++;
//        }
//
//        // ����ÿ����ĸ����󳤶�
//        maxLen[currentChar] = max(maxLen[currentChar], length);
//    }
//
//    // ��ȡ������󳤶Ȳ�����
//    vector<int> lengths;
//    for (const auto& entry : maxLen) {
//        lengths.push_back(entry.second);
//    }
//
//    sort(lengths.rbegin(), lengths.rend()); // �Ӵ�С����
//
//    // �����k���ĳ���
//    if (k > lengths.size()) {
//        cout << -1 << endl; // ���k���ڲ�ͬ��ĸ�����������0
//    }
//    else {
//        cout << lengths[k - 1] << endl;
//    }
//
//    return 0;
//}
