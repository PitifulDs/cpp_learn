//#include <iostream>
//#include <unordered_map>
//using  namespace std;
//
//template<class k, class v>
//using umap = std::unordered_map<k, v>;
//
//int main()
//{
//	// 1）umap();  // 创建一个空的map容器。
//	umap<int, string> m1;
//
//	// 2）umap(initializer_list<pair<k, v>> il); // 使用统一初始化列表。
//	umap<int, string> m2({ { 8,"冰冰" }, { 3,"西施" }, { 1,"幂幂" }, { 7,"金莲" }, { 5,"西瓜" } });
//	// umap<int, string> m2={ { 8,"冰冰" }, { 3,"西施" }, { 1,"幂幂" }, { 7,"金莲" }, { 5,"西瓜" } };
//	// umap<int, string> m2   { { 8,"冰冰" }, { 3,"西施" }, { 1,"幂幂" }, { 7,"金莲" }, { 5,"西瓜" } };
//	for (auto& val : m2)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 3）umap(const map<k, v>&m);  // 拷贝构造函数。
//	umap<int, string> m3 = m2;
//	for (auto& val : m3)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 4）umap(iterator first, iterator last);  // 用迭代器创建map容器。
//	auto first = m3.begin();  first++;
//	auto last = m3.end();  last--;
//	umap<int, string> m4(first, last);
//	for (auto& val : m4)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 5）umap(map<k, v> && m);  // 移动构造函数（c++11标准）。
//}