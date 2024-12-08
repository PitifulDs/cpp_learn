#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*
    本题很简单，只要统计出输入字符串s中'o'的个数：

    如果 'o' 为偶数个，则s本身就是一个含有偶数个'o'的子字符串，结果输出s.length
    如果 'o' 为奇数个，由于s是环形的，因此只要任选环中任意一个'o'解开（删除），剩下的就是含有偶数个 'o' 的子串，该子串长度为 s.length - 1
*/
#include <iostream>

using namespace std;

//int main() {
//    string s;
//    cin >> s;
//
//    // s中'o'的个数
//    int zeroCount = 0;
//
//    for (auto c : s) {
//        if (c == 'o') zeroCount++;
//    }
//
//    if (zeroCount % 2 == 0) {
//        cout << s.size() << endl;
//    }
//    else {
//        cout << s.size() - 1 << endl;
//    }
//
//    return 0;
//}