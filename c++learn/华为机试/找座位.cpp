#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
//
//int main()
//{
//    string line;
//    getline(cin, line);
//
//    int n = line.size();
//
//    int count = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//
//        if (line[i] == '0')
//        {
//            bool canSit = true;
//            if (i > 0 && line[i - 1] == '1') canSit = false;
//            if (i < n - 1 && line[i + 1] == '1') canSit = false;
//
//            if (canSit)
//            {
//                count++;
//                i++; // 跳过下一个, 这里很重要！！！！
//            }
//
//        }
//
//
//    }
//
//    cout << count << endl;
//}