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
//	int N; // 总人数
//   	cin >> N;
//	cin.ignore(); // 忽略换行符
//
//	string line;
//	getline(cin, line);
//	stringstream ss(line);
//	string temp;
//	unordered_set<int> confirmedCases;// 确认病例人员编号
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
//	// 使用DFS查找所有需要做核酸检测的人
//	vector<bool> visited(N, false);
//	for (int caseNum : confirmedCases) {
//		dfs(caseNum, matrix, visited);
//	}
//	
//	// 统计需要检测的人数（不包括确诊病例）
//	int count = 0;
//	for (int i = 0; i < N; ++i) {
//		if (visited[i] && confirmedCases.find(i) == confirmedCases.end()) {
//			++count;
//		}
//	}
//
//	// 输出结果
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
//    int N; // 总人数
//    cin >> N;
//    cin.ignore();
//
//    string line;
//    string temp;
//
//    vector<int> patientsNum;
//    getline(cin, line);
//    stringstream ss(line);
//    while (getline(ss, temp, ',')) { // 注意用逗号分隔符来读取每个确诊病例
//        patientsNum.push_back(stoi(temp));
//    }
//
//    vector<vector<int>> matrix(N, vector<int>(N)); // 接触矩阵
//    for (int i = 0; i < N; i++) {
//        getline(cin, line);
//        stringstream ss2(line);
//        for (int j = 0; j < N; j++) {
//            getline(ss2, temp, ',');
//            matrix[i][j] = stoi(temp);
//        }
//    }
//
//    // dfs寻找需要核酸检测
//    vector<bool> visited(N, false);
//    for (int person : patientsNum) {
//        if (!visited[person]) {
//            dfs(person, matrix, visited);
//        }
//    }
//
//    // 统计需要检测的人数（不包括确诊病例）
//    int count = 0;
//    for (int i = 0; i < N; i++) {
//        auto target = find(patientsNum.begin(), patientsNum.end(), i);
//        if (visited[i] && target == patientsNum.end()) { // 修正统计逻辑
//            count++;
//        }
//    }
//    cout << count << endl;
//
//    return 0;
//}
