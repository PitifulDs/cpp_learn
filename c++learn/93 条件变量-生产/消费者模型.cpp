//#include <iostream>
//#include <string>
//#include <thread>                      // �߳���ͷ�ļ���
//#include <mutex>                      // ���������ͷ�ļ���
//#include <deque>                      // deque������ͷ�ļ���
//#include <queue>                      // queue������ͷ�ļ���
//#include <condition_variable>  // ����������ͷ�ļ���
//using namespace std;
//class aa
//{
//    mutex m_mutex;                                    // ��������
//    condition_variable m_cond;                  // ����������
//    queue<string, deque<string>> m_q;   // ������У��ײ�������deque��
//public:
//    void incache(int num)     // �������ݣ�numָ�����ݵĸ�����
//    {
//        lock_guard<mutex> lock(m_mutex);   // ���������
//        for (int ii = 0; ii < num; ii++)
//        {
//            static int bh = 1;           // ��Ů��š�
//            string message = to_string(bh++) + "�ų�Ů";    // ƴ�ӳ�һ�����ݡ�
//            m_q.push(message);     // ������������������ӡ�
//        }
//        //m_cond.notify_one();     // ����һ������ǰ���������������̡߳�
//        m_cond.notify_all();
//    }
//
//    void outcache()       // �������߳���������
//    {
//        while (true)
//        {
//            string message;
//            
//            // �ѻ�����ת����unique_lock<mutex>�������������
//            unique_lock<mutex> lock(m_mutex);
//
//            while (m_q.empty())    // ������пգ�����ѭ��������ֱ�Ӵ������ݡ�������ѭ����������if
//                m_cond.wait(lock);  // �ȴ������ߵĻ����źš�
//
//            // ����Ԫ�س��ӡ�
//            message = m_q.front();  m_q.pop();
//            cout << "�̣߳�" << this_thread::get_id() << "��" << message << endl;
//            lock.unlock();
//               
//            
//            // ������ӵ����ݣ����������ѵ�����
//            this_thread::sleep_for(chrono::milliseconds(1));   // ���账��������Ҫ1���롣
//            
//        }
//    }
//};
//
//int main()
//{
//    aa aa;
//
//    thread t1(&aa::outcache, &aa);     // �����������߳�t1��
//    thread t2(&aa::outcache, &aa);     // �����������߳�t2��
//    thread t3(&aa::outcache, &aa);     // �����������߳�t3��
//
//    this_thread::sleep_for(chrono::seconds(2));    // ����2�롣
//    aa.incache(3);      // ����3�����ݡ�
//
//    this_thread::sleep_for(chrono::seconds(3));    // ����3�롣
//    aa.incache(5);      // ����5�����ݡ�
//
//    t1.join();   // �������̵߳���Դ��
//    t2.join();
//    t3.join();
//}