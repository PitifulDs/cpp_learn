#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*
    ����ܼ򵥣�ֻҪͳ�Ƴ������ַ���s��'o'�ĸ�����

    ��� 'o' Ϊż��������s�������һ������ż����'o'�����ַ�����������s.length
    ��� 'o' Ϊ������������s�ǻ��εģ����ֻҪ��ѡ��������һ��'o'�⿪��ɾ������ʣ�µľ��Ǻ���ż���� 'o' ���Ӵ������Ӵ�����Ϊ s.length - 1
*/
#include <iostream>

using namespace std;

//int main() {
//    string s;
//    cin >> s;
//
//    // s��'o'�ĸ���
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