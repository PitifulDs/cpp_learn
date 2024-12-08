#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int splitString(string input)
{
	vector<string> res;
	int countX = 0;
	int	countY = 0;
	string temp = "";
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == 'X')
		{
			countX++;
			temp += input[i];
		}
		if (input[i] == 'Y') 
		{
			countY++;
			temp += input[i];
		}

		if (countX == countY)
		{
            res.push_back(temp);
			temp = "";
		}

	}

	return res.size();


}


//int main()
//{
//	string input;
//	getline(cin, input);
//
//	int result = splitString(input);
//	cout << result << endl;
//}