//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <sstream>
//#include <unordered_set>
//
//using namespace std;
//
//void dfs(int person, vector<vector<int>>& matrix, vector<bool>& visited)
//{
//	visited[person] = true;
//	for (int i = 0; i < matrix.size(); ++i) 
//	{
//		if (matrix[person][i] == 1 && !visited[i])
//		{
//			dfs(i, matrix, visited);
//		}
//	}
//}
//
//
//
//int main()
//{
//	int N; // ������
//   	cin >> N;
//	cin.ignore(); // ���Ի��з�
//
//	string line;
//	getline(cin, line);
//	stringstream ss(line);
//	string temp;
//	unordered_set<int> confirmedCases;// ȷ�ϲ�����Ա���
//	while (getline(ss, temp, ',')) {
//		confirmedCases.insert(stoi(temp));
//	}
//
//	vector<vector<int>> matrix(N, vector<int>(N));
//	for (int i = 0; i < N; ++i) {
//		getline(cin, line);
//		stringstream rowStream(line);
//		for (int j = 0; j < N; ++j) {
//			getline(rowStream, temp, ',');
//			matrix[i][j] = stoi(temp);
//		}
//	}
//	
//
//	// ʹ��DFS����������Ҫ�����������
//	vector<bool> visited(N, false);
//	for (int caseNum : confirmedCases) {
//		dfs(caseNum, matrix, visited);
//	}
//	
//	// ͳ����Ҫ����������������ȷ�ﲡ����
//	int count = 0;
//	for (int i = 0; i < N; ++i) {
//		if (visited[i] && confirmedCases.find(i) == confirmedCases.end()) {
//			++count;
//		}
//	}
//
//	// ������
//	cout << count << endl;
//}
//
//
//
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <sstream>
//#include <unordered_set>
//
//using namespace std;
//
//void dfs(int person, vector<vector<int>>& matrix, vector<bool>& visited) {
//    visited[person] = true;
//    for (int i = 0; i < matrix.size(); i++) {
//        if (matrix[person][i] == 1 && !visited[i]) {
//            dfs(i, matrix, visited);
//        }
//    }
//}
//
//int main() {
//    int N; // ������
//    cin >> N;
//    cin.ignore();
//
//    string line;
//    string temp;
//
//    vector<int> patientsNum;
//    getline(cin, line);
//    stringstream ss(line);
//    while (getline(ss, temp, ',')) { // ע���ö��ŷָ�������ȡÿ��ȷ�ﲡ��
//        patientsNum.push_back(stoi(temp));
//    }
//
//    vector<vector<int>> matrix(N, vector<int>(N)); // �Ӵ�����
//    for (int i = 0; i < N; i++) {
//        getline(cin, line);
//        stringstream ss2(line);
//        for (int j = 0; j < N; j++) {
//            getline(ss2, temp, ',');
//            matrix[i][j] = stoi(temp);
//        }
//    }
//
//    // dfsѰ����Ҫ������
//    vector<bool> visited(N, false);
//    for (int person : patientsNum) {
//        if (!visited[person]) {
//            dfs(person, matrix, visited);
//        }
//    }
//
//    // ͳ����Ҫ����������������ȷ�ﲡ����
//    int count = 0;
//    for (int i = 0; i < N; i++) {
//        auto target = find(patientsNum.begin(), patientsNum.end(), i);
//        if (visited[i] && target == patientsNum.end()) { // ����ͳ���߼�
//            count++;
//        }
//    }
//    cout << count << endl;
//
//    return 0;
//}
