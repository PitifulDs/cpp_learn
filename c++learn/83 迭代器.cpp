//#include <iostream>
//#include <vector>
//#include <list>
//using  namespace std;
//
//struct Node   // 单链表的结点。
//{
//	int item;
//	Node* next;
//};
//
//int* find_(int* arr, int n, const int& val)  // 在整型数组arr中查找值为val的元素。
//{
//	for (int ii = 0; ii < n; ii++)                     // 遍历数组。
//		if (arr[ii] == val) return &arr[ii];       // 如果找到了，返回数组中元素的地址。
//
//	return nullptr;
//}
//
//int* find_(int* begin, int* end, const int& val)  // 在整型数组的区间中查找值为val的元素。
//{
//	for (int* iter = begin; iter != end; iter++)      // 遍历查找区间。
//		if (*iter == val) return iter;                         // 如果找到了元素，返回区间中的位置。
//
//	return nullptr;
//}
//
//Node* find_(Node* begin, Node* end, const Node& val)         // 在单链表中查找值为val的元素。
//{
//	for (Node* iter = begin; iter != end; iter = iter->next)     // 遍历链表。
//		if (iter->item == val.item) return iter;           // 如果找到了，返回链表中结点的地址。
//
//	return nullptr;
//}
//
//// 查找元素的算法。
//template<typename T1, typename T2>
//// begin-查找区间开始的位置；end-查找区间结束的位置；val-待查找的值。
//T1 find_(T1 begin, T1 end, const T2& val)
//{
//	for (T1 iter = begin; iter != end; iter++)     // 遍历查找区间。
//		if (*iter == val) return iter;                       // 如果找到了元素，返回区间中的位置。
//
//	return end;
//}
//
//int main()
//{
//	// 在vector容器中查找元素。
//	vector<int> vv = { 1,2,3,4,5 };      // 初始化vector容器。
//	vector<int>::iterator it2 = find_(vv.begin(), vv.end(), 3);
//	if (it2 != vv.end()) cout << "查找成功。\n";
//	else cout << "查找失败。\n";
//
//	// 在list容器中查找元素。
//	list<int> ll = { 1,2,3,4,5 };               // 初始化vector容器。
//	list<int>::iterator it3 = find_(ll.begin(), ll.end(), 3);
//	if (it3 != ll.end()) cout << "查找成功。\n";
//	else cout << "查找失败。\n";
//}