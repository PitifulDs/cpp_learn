#include<iostream>
#include<thread>
#include<windows.h>
using namespace std;


//
//// ��ͨ����
//void func(int bh, const string& str)
//{
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "��" << i << "�α�ף��װ���" << bh << "�ţ�" << str << endl;
//		Sleep(1000);
//	}
//
//}
//
//
//// �º���
//class mythread1
//{
//public:
//	void operator()(int bh, const string& str) {
//		for (int i = 0; i < 10; i++)
//		{
//			cout << "��" << i << "�α�ף��װ���" << bh << "�ţ�" << str << endl;
//			Sleep(1000);
//		}
//	}
//};
//
//// �����о�̬��Ա����
//class mythread2
//{
//public:
//	static void func(int bh, const string& str) {
//		for (int i = 0; i < 10; i++)
//		{
//			cout << "��" << i << "�α�ף��װ���" << bh << "�ţ�" << str << endl;
//			Sleep(1000);
//		}
//	}
//};
//
//// ��������ͨ��Ա����
//class mythread3
//{
//public:
//	void func(int bh, const string& str) {
//		for (int i = 0; i < 10; i++)
//		{
//			cout << "��" << i << "�α�ף��װ���" << bh << "�ţ�" << str << endl;
//			::Sleep(1000);
//		}
//	}
//};
//
//int main()
//{
//	// ����ͨ���������߳�
//	/*thread th1(func, 3, "����һֻСС��");
//	thread th2(func, 8, "����һֻС��");*/
//	
//	// lamada������������
//	auto f = [](int bh, const string & str)
//	{
//
//		for (int i = 0; i < 10; i++)
//		{
//			cout << "��" << i << "�α�ף��װ���" << bh << "�ţ�" << str << endl;
//			Sleep(1000);
//		}
//
//	};
//	//thread th3(f, 3, "����һֻ��");
//
//	// �÷º��������߳�
//	//thread th4(mythread1(), 3, "������");
//
//	// ����ľ�̬��Ա���������߳�
//	//thread th5(mythread2::func, 3, "����");
//
//	// �������ͨ��Ա���������߳�
//	mythread3 myth; // �����ȴ�����Ķ��󣬱��뱣֤������������ڱ����̳߳���
//	thread th6(&mythread3::func, &myth, 3, "����");
//
//	cout << "����ʼ��\n";
//	for(int i = 0; i < 10; i++)
//	{
//		cout << "ִ��������\n";
//		Sleep(1000);
//	}
//
//	cout << "�������\n";
//	//th1.join();
//	//th2.join();
//	//th3.join();
//	//th4.join();
//	//th5.join();
//	th6.join();
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

