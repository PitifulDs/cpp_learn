//#include <iostream>
//using namespace std;
//
//void func()
//{
//
//}
//
//template<class T1, class T2>
//class AA
//{
//public:
//	T1 m_x;
//	T2 m_y;
//	AA(const T1 x, const T2 y):m_x(x), m_y(y){}
//	void show() const { cout << "show() x =" << m_x << ",y=" << m_y << endl; }
//
//};
//
//class BB
//{
//public:
//	void show() const { cout << "������BB��show()����" << endl; }
//
//
//};
//// ������ͨ�����������ͷ���ֵ��ģ����AA��ʵ�����汾��
//AA<int, string> func(AA<int, string>& aa)
//{
//	aa.show();
//	cout << "������func(AA<int, string> &aa)������\n";
//	return aa;
//}
//
//// ����ģ�壬�����ͷ���ֵ�ǵ�ģ����AA��
//template <typename T1, typename T2>
//AA<T1, T2> func(AA<T1, T2>& aa)
//{
//	aa.show();
//	cout << "������func(AA<T1, T2> &aa)������\n";
//	return aa;
//}
//
//// ����ģ�壬�����ͷ���ֵ���������͡�
//template <typename T>
//T func(T& aa)
//{
//	aa.show();
//	cout << "������func(AA<T> &aa)������\n";
//	return aa;
//}
//
//int main()
//{
//	AA<int, string> aa(3, "����һֱɱɱ��");
//	//AA<char, string> aa(3, "����һֱɱɱ��");	// ���ú���ģ��汾
//	BB bb;
//	func(bb);
//
//
//
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
