#include <iostream>
#include <sstream>
#include <string>
using namespace std;

//int main()
//{
//    //// 创建一个 string类 对象 s
//    //string s("hello stringstream");
//    //// 创建一个 stringstream类 对象 ss
//    //stringstream ss;
//
//    //// 向对象输入字符串 : "<<" 表示向一个对象中输入
//    //ss << s;
//    //cout << ss.str() << endl;
//
//
//
//
//    //// 创建一个 stringstraeam类 对象 ss1
//    //stringstream ss1("hello stringstream1");
//
//    //cout << ss1.str() << endl;
//
//
//
//
//    //string str("asd");
//    //// 第二种构造
//    //stringstream ss2(str);
//    //cout << ss2.str() << endl;
//
//    //// 第一种构造
//    //ss2 << "r";
//    //cout << ss2.str() << endl;
//
//    //ss2 << "13";
//    //cout << ss2.str() << endl;
//
//    //ss2 << "hy";
//    //cout << ss2.str() << endl;
//
//    //ostringstream ss("1 2 3 4 ", std::ios_base::ate);	// append 方式追加
//    //cout << ss.str() << endl;
//
//    //ss << "5 3 4";
//    //cout << ss.str() << endl;
//
//    //// 清空内容
//    //ss.str("");
//    //cout << ss.str() << "清空" << endl;
//
//
//
//
//    //stringstream ss("hello string and stringstream");
//    //cout << ss.str() << endl;
//
//    //cout << endl;
//
//    //string str;
//    //// 注意： stringstream 是一个单词一个单词 ”流入“ string 的
//    //while (ss >> str)
//    //{
//    //    cout << str << endl;
//    //}
//
//
//
//    //// 根据 , 来分割内容
//    //string source = "abc,123,<!>";
//    //stringstream ss(source);
//    //cout << ss.str() << endl;
//
//    //cout << endl;
//
//    //string str;
//    //while (getline(ss, str, ','))
//    //{
//    //    cout << str << endl;
//    //}
//
//
//
//
//    //// 数字转为string
//    //int num = 123;
//    //std::stringstream ss;
//    //ss << num; // 将整数放入流中
//    //std::string str = ss.str(); // 使用str()函数 从流中提取字符串
//    //std::cout << str << std::endl; // 输出：123
//  
//
//
//
//    // string转为数字
//    //std::string str = "456";
//    //std::stringstream ss(str); // 初始化stringstream
//    //int num;
//    //ss >> num; // 从流中提取整数
//    //std::cout << num << std::endl; // 输出：456
// 
//
//    // 提取单个字符
//    /*std::string s("hello");
//    std::stringstream ss(s);
//
//    char ch;
//    while (ss.get(ch)) {
//        std::cout << "Character extracted: " << ch << std::endl;
//    }*/
//
//    return 0;
//}
