//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int N;
//    cin >> N;
//    vector<int> pizza(N);
//    for (int i = 0; i < N; i++) {
//        cin >> pizza[i];
//    }
//
//    vector<vector<int>> dp(N, vector<int>(N, 0));
//    vector<vector<int>> sum(N, vector<int>(N, 0));
//
//    // ��ʼ�� sum ����
//    for (int i = 0; i < N; i++) {
//        sum[i][i] = pizza[i];
//        for (int j = i + 1; j < N; j++) {
//            sum[i][j] = sum[i][j - 1] + pizza[j];
//        }
//    }
//
//    // ��̬�滮��� dp ����
//    for (int length = 1; length < N; length++) {
//        for (int i = 0; i + length < N; i++) {
//            int j = i + length;
//            dp[i][j] = max(sum[i + 1][j] - dp[i + 1][j], sum[i][j - 1] - dp[i][j - 1]);
//        }
//    }
//
//    int totalSum = sum[0][N - 1];
//    int cheeHuoTotal = (totalSum + dp[0][N - 1]) / 2;
//
//    cout << cheeHuoTotal << endl;
//
//    return 0;
//}
