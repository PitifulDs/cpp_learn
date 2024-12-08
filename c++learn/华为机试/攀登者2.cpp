//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <sstream>
//#include <unordered_map>
//
//using namespace std;
//
//// ʶ��ɽ�岢����ɽ�������
//vector<int> findPeaks(vector<int>& heights)
//{
//	vector<int> peaks;
//	for (int i = 0; i < heights.size(); i++)
//	{
//		// ����һ��Ԫ�أ�������Ǳ߽��Ҹ����ұ�
//		if (i == 0 && heights[i] > heights[i + 1])
//		{
//			peaks.push_back(i);
//		}
//		// ������һ��Ԫ�أ�������Ǳ߽��Ҹ������
//		else if (i == heights.size() - 1 && heights[i] > heights[i - 1])
//		{
//			peaks.push_back(i);
//		}
//		// ����м�Ԫ��
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
//// ��������
//int calculateStrength(vector<int>& heights, int start, int peak)
//{
//	int strength = 0;
//	// ��ɽ
//	for (int i = start; i < peak; i++)
//	{
//		strength += 2 * abs(heights[i + 1] - heights[i]);
//	}
//
//	// ��ɽ
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
//		// �����������0��peakPosition����������
//		int leftStrength = -1; // 0�ᱻ��Ϊ��������
//		for (int i = peakPosition- 1; i >= 0; i--)
//		{
//			if (heights[i] == 0)
//			{
//				leftStrength  = calculateStrength(heights, i, peakPosition);
//				break;
//			}
//		}
//
//		// ������Ҳ����0��peakPosition����������
//		int rightStrength = -1; // 0�ᱻ��Ϊ��������
//		for (int i = peakPosition + 1; i < heights.size(); i++)
//		{
//			if (heights[i] == 0)
//			{
//				rightStrength = calculateStrength(heights, i, peakPosition);
//				break;
//			}
//		}
//
//		// �ж��Ƿ���԰�ȫ����
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
//	if (count == 0) return 0; // û�к��ʵ������յ�
//
//	int strength;
//	cin >> strength;
//
//	// ��������ͬ��ɽ��߶�
//	vector<int> peaks = findPeaks(heights);
//
//	int result = theMaxStrength(heights, peaks, strength);
//	cout << result << endl;
//}
