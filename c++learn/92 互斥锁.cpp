//#include <iostream>
//#include <thread>                // �߳���ͷ�ļ���
//#include <mutex>                // ���������ͷ�ļ���
//using namespace std;
//
//mutex mtx;        // ����������������������Դcout����
//
//// ��ͨ������
//void func(int bh, const string& str) {
//	for (int ii = 1; ii <= 10; ii++)
//	{
//		mtx.lock();      // ���������
//		cout << "��" << ii << "�α�ף��װ���" << bh << "�ţ�" << str << endl;
//		mtx.unlock();  // ������
//		this_thread::sleep_for(chrono::seconds(1));     // ����1�롣
//	}
//}
//
//int main()
//{
//	timed_mutex tm;
//	tm.try_lock_for(chrono::seconds(10));
//
//	// ����ͨ���������̡߳�
//	thread t1(func, 1, "����һֻɵɵ��");
//	thread t2(func, 2, "����һֻɵɵ��");
//	thread t3(func, 3, "����һֻɵɵ��");
//	thread t4(func, 4, "����һֻɵɵ��");
//	thread t5(func, 5, "����һֻɵɵ��");
//
//	t1.join();         // �����߳�t1����Դ��
//	t2.join();         // �����߳�t2����Դ��
//	t3.join();         // �����߳�t3����Դ��
//	t4.join();         // �����߳�t4����Դ��
//	t5.join();         // �����߳�t5����Դ��
//}
//
