#include<iostream>
#include<thread>
#include<windows.h>
using namespace std;

//
//// ��ͨ����
//void func(int bh, const string& str)
//{
//	cout <<"���̣߳�" << this_thread::get_id() << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "��" << i << "�α�ף��װ���" << bh << "�ţ�" << str << endl;
//		Sleep(1000);
//	}
//
//}

//int main()
//{
//	// ����ͨ���������߳�
//	thread th1(func, 3, "����һֱɱɱ��");
//	thread th2(func, 8, "����һֻСС��");
//
//	cout << "���߳�:" << this_thread::get_id() << endl;
//	cout << "�߳�th1:" << th1.get_id() << endl;
//	cout << "�߳�th2:" << th2.get_id() << endl;
//	th1.swap(th2);
//	cout << "�߳�th1:" << th1.get_id() << endl;
//	cout << "�߳�th2:" << th2.get_id() << endl;
//
//	th1.join();
//	th2.join();
//
//}
//




