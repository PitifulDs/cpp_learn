//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <sstream>
//#include <unordered_map>
//
//using namespace std;
//
//// 识别山峰并返回山峰的索引
//vector<int> findPeaks(vector<int>& heights)
//{
//	vector<int> peaks;
//	for (int i = 0; i < heights.size(); i++)
//	{
//		// 检查第一个元素：如果它是边界且高于右边
//		if (i == 0 && heights[i] > heights[i + 1])
//		{
//			peaks.push_back(i);
//		}
//		// 检查最后一个元素：如果它是边界且高于左边
//		else if (i == heights.size() - 1 && heights[i] > heights[i - 1])
//		{
//			peaks.push_back(i);
//		}
//		// 检查中间元素
//		else if (i > 0 && i < heights.size() - 1)
//		{
//			if (heights[i] > heights[i + 1] && heights[i] > heights[i - 1])
//			{
//				peaks.push_back(i);
//			}
//		}
//	}
//	return peaks;
//}
//
//// 体力消耗
//int calculateStrength(vector<int>& heights, int start, int peak)
//{
//	int strength = 0;
//	// 上山
//	for (int i = start; i < peak; i++)
//	{
//		strength += 2 * abs(heights[i + 1] - heights[i]);
//	}
//
//	// 下山
//	for (int i = peak; i > start; i--)
//	{
//        strength += abs(heights[i] - heights[i - 1]);
//	}
//	return strength;
//}
//
//int theMaxStrength(vector<int>& heights, vector<int>& peaks, int strength)
//{
//	int count = 0;
//	for (int peakPosition : peaks)
//	{
//		// 计算从左侧起点0到peakPosition的体力消耗
//		int leftStrength = -1; // 0会被认为是无消耗
//		for (int i = peakPosition- 1; i >= 0; i--)
//		{
//			if (heights[i] == 0)
//			{
//				leftStrength  = calculateStrength(heights, i, peakPosition);
//				break;
//			}
//		}
//
//		// 计算从右侧起点0到peakPosition的体力消耗
//		int rightStrength = -1; // 0会被认为是无消耗
//		for (int i = peakPosition + 1; i < heights.size(); i++)
//		{
//			if (heights[i] == 0)
//			{
//				rightStrength = calculateStrength(heights, i, peakPosition);
//				break;
//			}
//		}
//
//		// 判断是否可以安全返回
//		if ((leftStrength != -1 && leftStrength < strength) ||
//			(rightStrength != -1 && rightStrength < strength))
//		{
//			count++;
//		}
//
//	}
//
//	return count;
//}
//
//int main()
//{
//	string input;
//	cin >> input;
//	stringstream ss(input);
//	string h;
//	vector<int> heights;
//	int count = 0;
//	while (getline(ss, h, ','))
//	{
//		int n = stoi(h);
//		heights.push_back(n);
//		if(n ==0) count++;
//	}
//	if (count == 0) return 0; // 没有合适的起点和终点
//
//	int strength;
//	cin >> strength;
//
//	// 可能有相同的山峰高度
//	vector<int> peaks = findPeaks(heights);
//
//	int result = theMaxStrength(heights, peaks, strength);
//	cout << result << endl;
//}
