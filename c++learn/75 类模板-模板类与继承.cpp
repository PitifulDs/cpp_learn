//#include <iostream>         // ����ͷ�ļ���
//using namespace std;        // ָ��ȱʡ�������ռ䡣
//
//template<class T1, class T2>
//class BB    // ģ����BB��
//{
//public:
//	T1 m_x;
//	T2 m_y;
//	BB(const T1 x, const T2 y) :  m_x(x), m_y(y) { cout << "������BB�Ĺ��캯����\n"; }
//	void func2() const { cout << "������func2()������x = " << m_x << ", y = " << m_y << endl; }
//};
//
//template<class T1, class T2>
//class AA:public BB<T1, T2>     // ��ͨ��AA�����ģ���ࡣ
//{
//public:
//	int m_a;
//	AA(int a, const T1 x, const T2 y) :BB<T1, T2>(x,y),m_a(a) { cout << "������AA�Ĺ��캯����\n"; }
//	void func1() { cout << "������func1()������m_a=" << m_a << endl;; }
//};
//
//template<class T, class T1, class T2>
//class CC:public BB<T1, T2>
//{
//public:
//	T m_a;
//	CC(const T a, const T1 x, const T2 y) :BB<T1, T2>(x, y), m_a(a) { cout << "������CC�Ĺ��캯����\n"; };
//	void func3() { cout << "������func3()������m_a=" << m_a << endl;; }
//};
//
//int main()
//{
//	// BB<int, string> bb(8, "����һֻɵɵ��", 3);
//	// bb.func2();
//	// bb.func1();
//	/*AA<int, string> aa(3,8, "����һֻɵɵ��");
//	aa.func1();
//	aa.func2();*/
//	CC<int, int, string> cc(3, 8, "����һֻɵɵ��");
//	cc.func3();
//	cc.func2();
//}