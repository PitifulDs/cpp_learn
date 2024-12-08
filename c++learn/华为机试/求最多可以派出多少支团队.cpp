#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int theTeams(vector<int>& abilities, int lowAblility)
{
	vector<string> teams;
	vector<int> newAbilities;
	for (auto& a : abilities)
	{
		if (a >= lowAblility)
		{
			teams.push_back(to_string(a));
		}
		else {
			newAbilities.push_back(a);
		}
	}

	
	int left = 0;
	int right = newAbilities.size() - 1;
	while (left< right)
	{
		int curAbility = newAbilities[left] + newAbilities[right];
		if (curAbility >= lowAblility)
		{
            teams.push_back(to_string(newAbilities[left]) + " " + to_string(newAbilities[right]));
			left++;
			right--;
		}
		else {
   			left++;
		}

	}

	return teams.size();

}

//int main()
//{
//	int n; // ������
//   	cin >> n;
//
//	vector<int> abilities(n); // ÿ���˵�����ֵ
//	for(int i= 0; i < n; i++) cin >> abilities[i];
//
//	sort(abilities.begin(), abilities.end());
//
//	int lowAblility; // ��С����ֵ
//	cin >> lowAblility;
//
//   	int maxTeamNum = 0; // ����Ŷ���
//	
//	maxTeamNum = theTeams(abilities, lowAblility);
//
//	cout << maxTeamNum << endl;
//}