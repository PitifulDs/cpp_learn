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
//	int n; // 总人数
//   	cin >> n;
//
//	vector<int> abilities(n); // 每个人的能力值
//	for(int i= 0; i < n; i++) cin >> abilities[i];
//
//	sort(abilities.begin(), abilities.end());
//
//	int lowAblility; // 最小能力值
//	cin >> lowAblility;
//
//   	int maxTeamNum = 0; // 最大团队数
//	
//	maxTeamNum = theTeams(abilities, lowAblility);
//
//	cout << maxTeamNum << endl;
//}