#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int countOnes(int num)
{
	int count = 0;
	while (num) {
		num &= (num - 1);  // 清零最低位的1
		count++;
	}
	return count;
}

int findNext(int n)
{
	int targetOnes = countOnes(n);
	int m = n + 1;
	while (countOnes(m) != targetOnes)
	{
		m++;
	}

	return m;
}
//int main()
//{
//	int n;
//	cin >> n;
//
//	int m = findNext(n);
//	
//	cout << m << endl;
//
//
//}


