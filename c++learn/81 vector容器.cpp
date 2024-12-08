#include <iostream>
#include <vector>
using  namespace std;
//
//int main()
//{
//	vector<int> v1;
//	v1 = { 1,2,3,4,5 };     // 使用统一初始化列表赋值。
//	for (int ii = 0; ii < v1.size(); ii++) cout << v1[ii] << "  ";
//	cout << endl;
//
//	vector<int> v2;
//	v2 = v1;                    // 把容器v1赋值给当前容器。
//	for (int ii = 0; ii < v2.size(); ii++) cout << v2[ii] << "  ";
//	cout << endl;
//
//	vector<int> v3;
//	v3.assign({ 1,2,3,4,5 });   // 用assign()函数给当前容器赋值，参数是统一初始化列表。
//	for (int ii = 0; ii < v3.size(); ii++) cout << v3[ii] << "  ";
//	cout << endl;
//
//
//
//
//
//	v3.data()[0] = 8;
//	v3.data()[1] = 7;
//	*(v3.data() + 2) = 5;
//	*(v3.data() + 3) = 4;
//	for (int ii = 0; ii < v3.size(); ii++) 
//		cout << v3[ii] << "  ";
//		
//
//}