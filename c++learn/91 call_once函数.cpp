//#include<iostream>
//#include<thread>
//#include<mutex> 
//using namespace std;
//
//once_flag onceflag;	// once_flagȫ�ֱ�����������ȡֵΪ0��1����
//
//// ���߳��У�����ֻ����һ�εĺ���
//void once_func(const int bh, const string& str)
//{
//	cout << "once_func() bh= " << bh << ", str=" << str << endl;
//
//}
//
//
//// ��ͨ����
//void func(int bh, const string& str)
//{
//	call_once(onceflag, once_func, 0, "��λ���ڣ���Ҫ��ʼ����ˡ�");
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "��" << i << "�α�ף��װ���" << bh << "�ţ�" << str << endl;
//		this_thread::sleep_for(chrono::seconds(1)); // ����һ��
//	}
//
//}
//
//int main()
//{
//	// ��ͨ���������߳�
//	thread th1(func, 3, "����һֱɱɱ��");
//	thread th2(func, 8, "����һֻСС��");
//
//
//
//	th1.join();
//	th2.join();
//
//}
//
