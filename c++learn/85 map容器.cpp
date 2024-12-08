#include <iostream>
#include <map>
using  namespace std;

//int main()
//{
//	// 1）map();  // 创建一个空的map容器。
//	map<int, string> m1;
//
//	// 2）map(initializer_list<pair<K, V>> il); // 使用统一初始化列表。
//	map<int, string> m2({ { 8,"冰冰" }, { 3,"西施" }, { 1,"幂幂" }, { 7,"金莲" }, { 5,"西瓜" } });
//	// map<int, string> m2={ { 8,"冰冰" }, { 3,"西施" }, { 1,"幂幂" }, { 7,"金莲" }, { 5,"西瓜" } };
//	// map<int, string> m2   { { 8,"冰冰" }, { 3,"西施" }, { 1,"幂幂" }, { 7,"金莲" }, { 5,"西瓜" } };
//	for (auto& val : m2)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 3）map(const map<K, V>&m);  // 拷贝构造函数。
//	map<int, string> m3 = m2;
//	for (auto& val : m3)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 4）map(Iterator first, Iterator last);  // 用迭代器创建map容器。
//	auto first = m3.begin();  first++;
//	auto last = m3.end();  last--;
//	map<int, string> m4(first, last);
//	for (auto& val : m4)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 5）map(map<K, V> && m);  // 移动构造函数（C++11标准）。
//}

//int main()
//{
//	map<string, string> m({ { "08","冰冰" }, { "03","西施" }, { "01","幂幂" }, { "07","金莲" }, { "05","西瓜" } });
//
//	for (auto& val : m)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 在map容器中查找键值为key的键值对，如果成功找到，则返回指向该键值对的迭代器；失败返回end()。
//	auto it1 = m.find("05");
//	if (it1 != m.end())
//		cout << "查找成功：" << it1->first << "," << it1->second << endl;
//	else
//		cout << "查找失败。\n";
//
//	// 在map容器中查找第一个键值 >= key的键值对，成功返回迭代器；失败返回end()。
//	auto it2 = m.lower_bound("05");
//	if (it2 != m.end())
//		cout << "查找成功：" << it2->first << "," << it2->second << endl;
//	else
//		cout << "查找失败。\n";
//
//	//	在map容器中查找第一个键值 > key的键值对，成功返回迭代器；失败返回end()。
//	auto it3 = m.upper_bound("05");
//	if (it3 != m.end())
//		cout << "查找成功：" << it3->first << "," << it3->second << endl;
//	else
//		cout << "查找失败。\n";
//
//	//	统计map容器中键值为key的键值对的个数。
//	cout << "count(05)=" << m.count("05") << endl;   // 返回1。
//	cout << "count(06)=" << m.count("06") << endl;   // 返回0。
//}
