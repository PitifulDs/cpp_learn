#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

//int thePeaks(vector<int>& heights)
//{
//
//	vector<int> peaks;
//	for (int i = 0; i < heights.size(); i++)
//	{
//		// 检查第一个元素：如果它是边界且高于右边
//		if (i == 0 && heights[i] > heights[i + 1])
//		{
//			peaks.push_back(heights[i]);
//		}
//		// 检查最后一个元素：如果它是边界且高于左边
//		else if (i == heights.size() - 1 && heights[i] > heights[i - 1])
//		{
//			peaks.push_back(heights[i]);
//		}
//		else if (i < heights.size()-1 && i > 0)
//		{
//			if (heights[i] > heights[i + 1] && heights[i] > heights[i - 1])
//			{
//				peaks.push_back(heights[i]);
//			}
//		}
//
//	}
//	return peaks.size();
//}

//int main()
//{
//	string input;
//	cin >> input;
//	stringstream ss(input);
//	string h;
//	vector<int> heights;
//	while (getline(ss, h, ','))
//	{
//		heights.push_back(stoi(h));
//	}
//
//	int result = thePeaks(heights);
//	cout << result << endl;
//}