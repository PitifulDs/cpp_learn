#include <iostream>
#include <map>
using  namespace std;

//int main()
//{
//	// 1��map();  // ����һ���յ�map������
//	map<int, string> m1;
//
//	// 2��map(initializer_list<pair<K, V>> il); // ʹ��ͳһ��ʼ���б�
//	map<int, string> m2({ { 8,"����" }, { 3,"��ʩ" }, { 1,"����" }, { 7,"����" }, { 5,"����" } });
//	// map<int, string> m2={ { 8,"����" }, { 3,"��ʩ" }, { 1,"����" }, { 7,"����" }, { 5,"����" } };
//	// map<int, string> m2   { { 8,"����" }, { 3,"��ʩ" }, { 1,"����" }, { 7,"����" }, { 5,"����" } };
//	for (auto& val : m2)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 3��map(const map<K, V>&m);  // �������캯����
//	map<int, string> m3 = m2;
//	for (auto& val : m3)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 4��map(Iterator first, Iterator last);  // �õ���������map������
//	auto first = m3.begin();  first++;
//	auto last = m3.end();  last--;
//	map<int, string> m4(first, last);
//	for (auto& val : m4)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// 5��map(map<K, V> && m);  // �ƶ����캯����C++11��׼����
//}

//int main()
//{
//	map<string, string> m({ { "08","����" }, { "03","��ʩ" }, { "01","����" }, { "07","����" }, { "05","����" } });
//
//	for (auto& val : m)
//		cout << val.first << "," << val.second << "  ";
//	cout << endl;
//
//	// ��map�����в��Ҽ�ֵΪkey�ļ�ֵ�ԣ�����ɹ��ҵ����򷵻�ָ��ü�ֵ�Եĵ�������ʧ�ܷ���end()��
//	auto it1 = m.find("05");
//	if (it1 != m.end())
//		cout << "���ҳɹ���" << it1->first << "," << it1->second << endl;
//	else
//		cout << "����ʧ�ܡ�\n";
//
//	// ��map�����в��ҵ�һ����ֵ >= key�ļ�ֵ�ԣ��ɹ����ص�������ʧ�ܷ���end()��
//	auto it2 = m.lower_bound("05");
//	if (it2 != m.end())
//		cout << "���ҳɹ���" << it2->first << "," << it2->second << endl;
//	else
//		cout << "����ʧ�ܡ�\n";
//
//	//	��map�����в��ҵ�һ����ֵ > key�ļ�ֵ�ԣ��ɹ����ص�������ʧ�ܷ���end()��
//	auto it3 = m.upper_bound("05");
//	if (it3 != m.end())
//		cout << "���ҳɹ���" << it3->first << "," << it3->second << endl;
//	else
//		cout << "����ʧ�ܡ�\n";
//
//	//	ͳ��map�����м�ֵΪkey�ļ�ֵ�Եĸ�����
//	cout << "count(05)=" << m.count("05") << endl;   // ����1��
//	cout << "count(06)=" << m.count("06") << endl;   // ����0��
//}
