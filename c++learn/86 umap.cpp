//#include <iostream>
//#include <unordered_map>
//using  namespace std;
//
//template<class k, class v>
//using umap = std::unordered_map<k, v>;
//
//int main()
//{
//	// 1��umap();  // ����һ���յ�map������
//	umap<int, string> m1;
//
//	// 2��umap(initializer_list<pair<k, v>> il); // ʹ��ͳһ��ʼ���б�
//	umap<int, string> m2({ { 8,"����" }, { 3,"��ʩ" }, { 1,"����" }, { 7,"����" }, { 5,"����" } });
//	// umap<int, string> m2={ { 8,"����" }, { 3,"��ʩ" }, { 1,"����" }, { 7,"����" }, { 5,"����" } };
//	// umap<int, string> m2   { { 8,"����" }, { 3,"��ʩ" }, { 1,"����" }, { 7,"����" }, { 5,"����" } };
//	for (auto& val : m2)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 3��umap(const map<k, v>&m);  // �������캯����
//	umap<int, string> m3 = m2;
//	for (auto& val : m3)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 4��umap(iterator first, iterator last);  // �õ���������map������
//	auto first = m3.begin();  first++;
//	auto last = m3.end();  last--;
//	umap<int, string> m4(first, last);
//	for (auto& val : m4)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 5��umap(map<k, v> && m);  // �ƶ����캯����c++11��׼����
//}