#include <iostream>
#include <string>
#include <vector>
using namespace std;
//
//int main()
//{
//    int maxTasks; // ���ִ���������
//    cin >> maxTasks;
//
//    int taskArrLen; // �������鳤��
//    cin >> taskArrLen;
//
//    // ����Ԫ�ر�ʾ����1�������������������ÿ�붼����������
//    vector<int> taskArray(taskArrLen); // ��������
//    for (int i = 0; i < taskArrLen; i++)
//    {
//        cin >> taskArray[i];
//    }
//
//    int count = 0;
//    int leaveTask = 0;
//    for (auto& n : taskArray)
//    {
//        int tasks = n + leaveTask;
//        if (tasks <= maxTasks)
//        {
//            leaveTask = 0;
//            count++;
//        }
//        else {
//            leaveTask = tasks - maxTasks;
//            count++;
//        }
//
//    }
//    if (leaveTask != 0)
//    {
//        int time = 0;
//        if (leaveTask % maxTasks == 0)
//        {
//            time = leaveTask / maxTasks;
//        }
//        else {
//            time = leaveTask / maxTasks + 1;
//        }
//
//        count += time;
//
//    }
//
//
//    cout << count << endl;
//
//}