#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>
#include <numeric>

using namespace std;

//// 定义棋盘大小
//const int BOARD_SIZE = 19;
//
//// 定义方向数组, 每一行代表一个方向, 第一列代表行坐标的变化量，第二列代表列坐标的变化量。
//int directions[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
//
//// 计算单个棋子的气数
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
//        // 检查上下左右四个方向
//        for (int d = 0; d < 4; d++)
//        {
//            int nx = x + directions[d][0]; 
//            int ny = y + directions[d][1];
//            // 判断是否在棋盘范围内且为空位
//            if (nx >= 0 
//                && nx < BOARD_SIZE && ny >= 0 
//                && ny < BOARD_SIZE && board[nx][ny] == 0
//                && !visited[nx][ny]) 
//            {
//                qi++;
//                visited[nx][ny] = true; // 标记此气已经被计算过
//            }
//        }
//    }
//
//    return qi;
//}
//
//int main()
//{
//    // 输入处理
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
//    // 创建棋盘并初始化
//    vector<vector<int>> board(BOARD_SIZE, vector<int>(BOARD_SIZE, 0));
//
//    // 标记黑棋
//    for (auto& stone : blackStones)
//    {
//        board[stone.first][stone.second] = 1; // 1表示白棋
//    }
//
//    // 标记白棋
//    for (auto& stone : whiteStones)
//    {
//        board[stone.first][stone.second] = 2; // 1表示黑棋
//    }
//
//    // 计算气数
//    int blackQi = calculateQi(blackStones, board);
//    int whiteQi = calculateQi(whiteStones, board);
//
//    // 输出结果
//    cout << blackQi << " " << whiteQi << endl;
//
//}
