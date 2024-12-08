//#include <iostream>
//#include <vector>
//#include <list>
//using  namespace std;
//
//struct Node   // ������Ľ�㡣
//{
//	int item;
//	Node* next;
//};
//
//int* find_(int* arr, int n, const int& val)  // ����������arr�в���ֵΪval��Ԫ�ء�
//{
//	for (int ii = 0; ii < n; ii++)                     // �������顣
//		if (arr[ii] == val) return &arr[ii];       // ����ҵ��ˣ�����������Ԫ�صĵ�ַ��
//
//	return nullptr;
//}
//
//int* find_(int* begin, int* end, const int& val)  // ����������������в���ֵΪval��Ԫ�ء�
//{
//	for (int* iter = begin; iter != end; iter++)      // �����������䡣
//		if (*iter == val) return iter;                         // ����ҵ���Ԫ�أ����������е�λ�á�
//
//	return nullptr;
//}
//
//Node* find_(Node* begin, Node* end, const Node& val)         // �ڵ������в���ֵΪval��Ԫ�ء�
//{
//	for (Node* iter = begin; iter != end; iter = iter->next)     // ��������
//		if (iter->item == val.item) return iter;           // ����ҵ��ˣ����������н��ĵ�ַ��
//
//	return nullptr;
//}
//
//// ����Ԫ�ص��㷨��
//template<typename T1, typename T2>
//// begin-�������俪ʼ��λ�ã�end-�������������λ�ã�val-�����ҵ�ֵ��
//T1 find_(T1 begin, T1 end, const T2& val)
//{
//	for (T1 iter = begin; iter != end; iter++)     // �����������䡣
//		if (*iter == val) return iter;                       // ����ҵ���Ԫ�أ����������е�λ�á�
//
//	return end;
//}
//
//int main()
//{
//	// ��vector�����в���Ԫ�ء�
//	vector<int> vv = { 1,2,3,4,5 };      // ��ʼ��vector������
//	vector<int>::iterator it2 = find_(vv.begin(), vv.end(), 3);
//	if (it2 != vv.end()) cout << "���ҳɹ���\n";
//	else cout << "����ʧ�ܡ�\n";
//
//	// ��list�����в���Ԫ�ء�
//	list<int> ll = { 1,2,3,4,5 };               // ��ʼ��vector������
//	list<int>::iterator it3 = find_(ll.begin(), ll.end(), 3);
//	if (it3 != ll.end()) cout << "���ҳɹ���\n";
//	else cout << "����ʧ�ܡ�\n";
//}