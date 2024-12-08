#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<pair<int, int>> findPairs(vector<int>& A, vector<int>& B, int R)
{
	vector<pair<int, int>> result;
	int i = 0, j = 0;
	int m = A.size(), n = B.size();

	while (i < m)
	{
		// �ҵ�����Ai < Bj�ĵ�һ��j
		while (j < n && A[i] > B[j])
		{
			j++;
		}

		if (j < n && B[j] - A[i] <= R)
		{
			// �ҵ�������R���ڵ����Bj
			result.push_back(make_pair(A[i], B[j]));
		}
		else if (j > 0 && A[i] - B[j - 1] <= R)
		{
			// �����ǰ j �����˷�Χ�������һ�� B[j-1]
			result.push_back(make_pair(A[i], B[j - 1]));
		}

		// �ƶ�����һ�� Ai
   		i++;
	}

	return result;

}

//
//int main()
//{
//	string input;
//	cin >> input;
//
//	size_t posA = input.find("A={");
//	size_t posB = input.find("},B={");
//	size_t posR = input.find("},R=");
//
//	string strA = input.substr(posA + 3, posB - posA - 3);
//	string strB = input.substr(posB + 5, posR - posB - 5);
//	string strR = input.substr(posR + 4);
//
//	vector<int> A, B;
//	int R= stoi(strR);
//
//	stringstream ssA(strA);
//	stringstream ssB(strB);
//	string temp;
//
//	// ����A����
//	while (getline(ssA, temp, ',')) {
//		A.push_back(stoi(temp));
//	}
//
//	// ����B����
//	while (getline(ssB, temp, ',')) {
//		B.push_back(stoi(temp));
//	}
//
//	// Ѱ��ƥ���
//	vector<pair<int, int>> pairs = findPairs(A, B, R);
//
//	for (auto& p : pairs)
//	{
//		cout<<"("<<p.first<<","<<p.second<<")"<<" ";
//	}
//	cout<<endl;
//
//}

