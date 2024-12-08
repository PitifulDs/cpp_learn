#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;


int pixelGrayValue(vector<pair<int, int>>&grayPhoto, int pixelX, int pixelY, int row, int col)
{
	int targetIndex = pixelX * col + pixelY;
	int currentIndex = 0;
	for (auto& p : grayPhoto)
	{
		int grayValue = p.first;
		int count = p.second;

		if (currentIndex + count > targetIndex)
		{
			return grayValue;
		}
		currentIndex += count;
	}




	return 0;
}

//int main()
//{
//	string line;
//	getline(cin, line);
//	string temp;
//	stringstream ss(line);
//	vector<int> input;
//	while (getline(ss, temp, ' '))
//	{
//		input.push_back(stoi(temp));
//	}
//
//	int row, col;
//	vector<pair<int, int>> grayPhoto;
//	for (int i = 0; i < input.size() - 1; i += 2)
//	{
//		if (i < 2)
//		{
//			row = input[i];
//			col = input[i + 1];
//		}
//		else {
//			int grayValue = input[i];
//			int grayNums = input[i + 1];
//			grayPhoto.push_back({ grayValue , grayNums });
//		}
//	}
//
//	int pixelX, pixelY;
//	cin >> pixelX >> pixelY;
//
//	int result = pixelGrayValue(grayPhoto, pixelX, pixelY, row, col);
//	cout << result << endl;
//}

