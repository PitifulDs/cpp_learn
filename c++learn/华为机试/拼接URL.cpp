#include <iostream>
#include <string>

using namespace std;

//int main() {
//    string line;
//    getline(cin, line);
//
//    // 查找逗号分隔符的位置
//    size_t commaPos = line.find(',');
//
//    // 提取前缀和后缀
//    string prefix = line.substr(0, commaPos);
//    string suffix = line.substr(commaPos + 1);
//
//    // 去除前缀末尾和后缀开头的多余的 '/'
//    while (!prefix.empty() && prefix.back() == '/') {
//        prefix.pop_back();
//    }
//    while (!suffix.empty() && suffix.front() == '/') {
//        suffix.erase(0, 1);
//    }
//
//    // 拼接前缀和后缀，用 '/' 连接
//    string url = prefix + "/" + suffix;
//
//    // 输出拼接后的 URL
//    cout << url << endl;
//
//    return 0;
//}

/* 正则表达式法
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
//    // 查找逗号分隔符的位置
//    size_t commaPos = line.find(',');
//
//    // 提取前缀和后缀
//    string prefix = line.substr(0, commaPos);
//    string suffix = line.substr(commaPos + 1);
//
//    // 使用正则表达式去除前缀末尾和后缀开头的多余的 "/"
//    regex trailingSlash("/+$");
//    regex leadingSlash("^/+");
//
//    prefix = regex_replace(prefix, trailingSlash, "");
//    suffix = regex_replace(suffix, leadingSlash, "");
//
//    // 拼接前缀和后缀，用 "/" 连接
//    string url = prefix + "/" + suffix;
//
//    // 输出拼接后的 URL
//    cout << url << endl;
//
//    return 0;
//}
