//#include <iostream>
//using namespace std;
//
//
//// ��ģ��
//template<class T1, class T2>
//class AA{
//public:
//	T1 m_x;
//	T2 m_y;
//
//	AA(const T1 x, const T2 y) :m_x(x), m_y(y) { cout << "��ģ�壺���캯��\n"; }
//	void show() const;
//};
//
//
//template<class T1, class T2>
//void AA<T1, T2>::show() const{
//	cout << "��ģ�壺x = " << m_x << ",y=" << m_y << endl;
//}
//
//
//// ��ģ����ȫ���廯��Ϊͨ�����ݲ���ָ����������
//template<>
//class AA<int, string> {
//public:
//	int		m_x;
//	string	m_y;
//
//	AA(const int x, const string y) :m_x(x), m_y(y) { cout << "��ȫ���廯�����캯��\n"; }
//	void show() const;
//
//
//};
//void AA<int, string>::show() const {
//	cout << "��ȫ���廯��x = " << m_x << ",y=" << m_y << endl;
//}
//
//// ��ģ�岿�־��廯
//template<class T1>
//class AA<T1, string> {
//public:
//	T1       m_x;
//	string m_y;
//
//	AA(const T1 x, const string y) :m_x(x), m_y(y) { cout << "���־��廯�����캯����\n"; }
//	void show() const;
//};
//
//template<class T1>
//void AA<T1, string>::show() const {    // ��Ա��������ʵ�֡�
//	cout << "���־��廯��x = " << m_x << ", y = " << m_y << endl;
//}
//
//
//
//
//
//int main()
//{
//	// ���廯�̶ȸߵ��������ھ��廯�̶ȵ͵��࣬���廯����������û�о��廯���ࡣ
//	AA<int, string>     aa1(8, "����һֻɵɵ��");   // ��ʹ����ȫ���廯���ࡣ
//	AA<char, string>	aa2(8, "����һֻɵɵ��");   // ��ʹ�ò��־��廯���ࡣ
//	AA<int, double>		aa3(8, 999999);                      // ��ʹ��ģ���ࡣ
//
//	return 0;
//}
