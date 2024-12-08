#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>
#include <numeric>

using namespace std;

//// �������̴�С
//const int BOARD_SIZE = 19;
//
//// ���巽������, ÿһ�д���һ������, ��һ�д���������ı仯�����ڶ��д���������ı仯����
//int directions[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
//
//// ���㵥�����ӵ�����
//int calculateQi(const vector<pair<int, int>>& stones, const vector<vector<int>>& board)
//{
//    int qi = 0;
//    vector<vector<bool>> visited(BOARD_SIZE, vector<bool>(BOARD_SIZE, false));
//
//    for(auto& stone : stones)
//    {
//        int x = stone.first;
//        int y = stone.second;
//
//        // ������������ĸ�����
//        for (int d = 0; d < 4; d++)
//        {
//            int nx = x + directions[d][0]; 
//            int ny = y + directions[d][1];
//            // �ж��Ƿ������̷�Χ����Ϊ��λ
//            if (nx >= 0 
//                && nx < BOARD_SIZE && ny >= 0 
//                && ny < BOARD_SIZE && board[nx][ny] == 0
//                && !visited[nx][ny]) 
//            {
//                qi++;
//                visited[nx][ny] = true; // ��Ǵ����Ѿ��������
//            }
//        }
//    }
//
//    return qi;
//}
//
//int main()
//{
//    // ���봦��
//    string line;
//    vector<pair<int, int>> blackStones;
//    vector<pair<int, int>> whiteStones;
//
//    for (int i = 0; i < 2; ++i)
//    {
//        getline(cin, line);
//        stringstream ss(line);
//        int x, y;
//        while (ss >> x >> y) 
//        {
//            if (i == 0)
//                blackStones.emplace_back(x, y);
//            else
//                whiteStones.emplace_back(x, y);
//        }
//    }
//
//    // �������̲���ʼ��
//    vector<vector<int>> board(BOARD_SIZE, vector<int>(BOARD_SIZE, 0));
//
//    // ��Ǻ���
//    for (auto& stone : blackStones)
//    {
//        board[stone.first][stone.second] = 1; // 1��ʾ����
//    }
//
//    // ��ǰ���
//    for (auto& stone : whiteStones)
//    {
//        board[stone.first][stone.second] = 2; // 1��ʾ����
//    }
//
//    // ��������
//    int blackQi = calculateQi(blackStones, board);
//    int whiteQi = calculateQi(whiteStones, board);
//
//    // ������
//    cout << blackQi << " " << whiteQi << endl;
//
//}
