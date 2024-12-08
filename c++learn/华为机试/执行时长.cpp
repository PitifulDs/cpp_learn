#include <iostream>
#include <string>
#include <vector>
using namespace std;
//
//int main()
//{
//    int maxTasks; // 最多执行任务个数
//    cin >> maxTasks;
//
//    int taskArrLen; // 任务数组长度
//    cin >> taskArrLen;
//
//    // 数组元素表示在这1秒内新增的任务个数且每秒都有新增任务
//    vector<int> taskArray(taskArrLen); // 任务数组
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