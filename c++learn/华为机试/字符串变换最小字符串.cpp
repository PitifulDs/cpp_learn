#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string getMinString(string s) {
    int n = s.length();
    if (n <= 1) return s;

    // 存储最小字符的最小位置
    vector<int> minPos(n, n - 1);
    int minIdx = n - 1;

    // 从右到左填充最小字符的位置
    for (int i = n - 2; i >= 0; --i) {
        if (s[i] < s[minIdx]) {
            minIdx = i;
        }
        minPos[i] = minIdx;
    }

    // 寻找最优交换位置
    for (int i = 0; i < n - 1; ++i) {
        int j = minPos[i];
        if (s[j] < s[i]) {
            // 找到一个可以交换的字符
            swap(s[i], s[j]);
            break; // 只允许一次交换
        }
    }

    return s;
}

//int main() {
//    string s;
//    cin >> s;
//    cout << getMinString(s) << endl;
//    return 0;
//}
//int main() {
//    string s;
//    cin >> s;
//
//    string minS = s;
//    sort(minS.begin(), minS.end());
//
//    if (s != minS) {
//        for (int i = 0; i < s.length(); i++) {
//            if (s[i] != minS[i]) {
//                char tmp = s[i];
//                s[i] = minS[i];
//
//                auto swapIndex = s.rfind(minS[i]);
//
//                s[swapIndex] = tmp;
//                break;
//            }
//        }
//    }
//
//
//    cout << s << endl;
//
//    return 0;
//}