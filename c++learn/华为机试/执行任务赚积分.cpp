#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct Task
{
	int sla;
	int value;
};

// 用于按照任务的积分从高到低排序，如果积分相同则按SLA从低到高排序
bool compareTasks(Task a, Task b)
{
	if (a.value == b.value)
	{
		return a.sla < b.sla;
	}
	return a.value > b.value;

}

//int main()
//{
//	int n;	// 任务数量
//	cin >> n;
//	int t;	// 任务时间
//	cin >> t;
//
//	vector<Task> tasks(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tasks[i].sla >> tasks[i].value;
//	}
//	// 按照任务的积分从高到低排序，如果积分相同则按SLA从低到高排序
//	sort(tasks.begin(), tasks.end(), compareTasks);
//
//	vector<bool> timeSlot(t, false); // 用于标记时间段是否已被使用
//	int maxScore = 0;
//
//	// 贪心算法，从高积分的任务开始执行
//	/*
//		我们从排序后的任务列表中依次选择任务，并尝试在剩余的可用时间段内完成它。
//		如果可以完成，就将对应的时间段标记为已使用，并累加相应的积分
//	*/
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = min(t, tasks[i].sla) - 1; j >= 0; j--)
//		{
//			cout << j << " ";
//			if (!timeSlot[j])
//			{
//				timeSlot[j] = true;
//				maxScore += tasks[i].value;
//				break;
//			}
//		}
//	}
//
//	cout << maxScore << endl;
//
//}