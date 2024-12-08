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

// ���ڰ�������Ļ��ִӸߵ����������������ͬ��SLA�ӵ͵�������
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
//	int n;	// ��������
//	cin >> n;
//	int t;	// ����ʱ��
//	cin >> t;
//
//	vector<Task> tasks(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tasks[i].sla >> tasks[i].value;
//	}
//	// ��������Ļ��ִӸߵ����������������ͬ��SLA�ӵ͵�������
//	sort(tasks.begin(), tasks.end(), compareTasks);
//
//	vector<bool> timeSlot(t, false); // ���ڱ��ʱ����Ƿ��ѱ�ʹ��
//	int maxScore = 0;
//
//	// ̰���㷨���Ӹ߻��ֵ�����ʼִ��
//	/*
//		���Ǵ������������б�������ѡ�����񣬲�������ʣ��Ŀ���ʱ������������
//		���������ɣ��ͽ���Ӧ��ʱ��α��Ϊ��ʹ�ã����ۼ���Ӧ�Ļ���
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