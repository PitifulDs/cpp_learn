#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;



//int main()
//{
//    // k 表示该客人购买的物品价值（以十进制计算的价格）
//    // n 表示该客人的幸运数字
//    // m 表示该客人所在国度采用的进制
//    long long k;
//    int n, m;
//    cin >> k >> n >> m;
//
//
//    int count = 0;
//    string tmp = "";
//    while (k > 0)
//    {
//        int digit = k % m;
//        tmp += to_string(digit);
//        if (digit == n)
//        {
//           
//            count++;
//        }
//        k /= m;
//    }
//
//    cout << tmp << endl;
//    cout << count << endl;
//
//}