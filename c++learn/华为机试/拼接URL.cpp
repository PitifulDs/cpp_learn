#include <iostream>
#include <string>

using namespace std;

//int main() {
//    string line;
//    getline(cin, line);
//
//    // ���Ҷ��ŷָ�����λ��
//    size_t commaPos = line.find(',');
//
//    // ��ȡǰ׺�ͺ�׺
//    string prefix = line.substr(0, commaPos);
//    string suffix = line.substr(commaPos + 1);
//
//    // ȥ��ǰ׺ĩβ�ͺ�׺��ͷ�Ķ���� '/'
//    while (!prefix.empty() && prefix.back() == '/') {
//        prefix.pop_back();
//    }
//    while (!suffix.empty() && suffix.front() == '/') {
//        suffix.erase(0, 1);
//    }
//
//    // ƴ��ǰ׺�ͺ�׺���� '/' ����
//    string url = prefix + "/" + suffix;
//
//    // ���ƴ�Ӻ�� URL
//    cout << url << endl;
//
//    return 0;
//}

/* ������ʽ��
        */
//#include <iostream>
//#include <string>
//#include <regex>
//
//using namespace std;
//
//int main() {
//    string line;
//    getline(cin, line);
//
//    // ���Ҷ��ŷָ�����λ��
//    size_t commaPos = line.find(',');
//
//    // ��ȡǰ׺�ͺ�׺
//    string prefix = line.substr(0, commaPos);
//    string suffix = line.substr(commaPos + 1);
//
//    // ʹ��������ʽȥ��ǰ׺ĩβ�ͺ�׺��ͷ�Ķ���� "/"
//    regex trailingSlash("/+$");
//    regex leadingSlash("^/+");
//
//    prefix = regex_replace(prefix, trailingSlash, "");
//    suffix = regex_replace(suffix, leadingSlash, "");
//
//    // ƴ��ǰ׺�ͺ�׺���� "/" ����
//    string url = prefix + "/" + suffix;
//
//    // ���ƴ�Ӻ�� URL
//    cout << url << endl;
//
//    return 0;
//}
