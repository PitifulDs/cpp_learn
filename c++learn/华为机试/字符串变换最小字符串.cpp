#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string getMinString(string s) {
    int n = s.length();
    if (n <= 1) return s;

    // �洢��С�ַ�����Сλ��
    vector<int> minPos(n, n - 1);
    int minIdx = n - 1;

    // ���ҵ��������С�ַ���λ��
    for (int i = n - 2; i >= 0; --i) {
        if (s[i] < s[minIdx]) {
            minIdx = i;
        }
        minPos[i] = minIdx;
    }

    // Ѱ�����Ž���λ��
    for (int i = 0; i < n - 1; ++i) {
        int j = minPos[i];
        if (s[j] < s[i]) {
            // �ҵ�һ�����Խ������ַ�
            swap(s[i], s[j]);
            break; // ֻ����һ�ν���
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