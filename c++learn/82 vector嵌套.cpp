#include <iostream>
#include <vector>
using  namespace std;
//
//int main()
//{
//	vector<vector<int>> vv;   // 创建一个vector容器vv，元素的数据类型是vector<int>。
//
//	vector<int> v;        // 创建一个容器v，它将作为容器vv的元素。
//
//	v = { 1,2,3,4,5 };      // 用统一初始化列表给v赋值。
//	vv.push_back(v);    // 把容器v作为元素追加到vv中。
//
//	v = { 11,12,13,14,15,16,17 };   // 用统一初始化列表给v赋值。
//	vv.push_back(v);                      // 把容器v作为元素追加到vv中。
//
//	v = { 21,22,23 };     // 用统一初始化列表给v赋值。
//	vv.push_back(v);    // 把容器v作为元素追加到vv中。
//
//	// 用嵌套的循环，把vv容器中的数据显示出来。
//	for (int ii = 0; ii < vv.size(); ii++)
//	{
//		for (int jj = 0; jj < vv[ii].size(); jj++)
//			cout << vv[ii][jj] << " ";      // 像二维数组一样使用容器vv。
//
//		cout << endl;
//	}
//}