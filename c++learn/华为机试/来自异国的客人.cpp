#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;



//int main()
//{
//    // k ��ʾ�ÿ��˹������Ʒ��ֵ����ʮ���Ƽ���ļ۸�
//    // n ��ʾ�ÿ��˵���������
//    // m ��ʾ�ÿ������ڹ��Ȳ��õĽ���
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