//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <vector>
//#include <sstream>
//#include <algorithm>
//
//using namespace std;
//
//// 函数用于判断赢家
//vector<string> determineWinners(unordered_map<char, vector<string>>& shapeMap) {
//    vector<string> winners;
//
//    // 统计每种形状的数量
//    int numA = shapeMap['A'].size();
//    int numB = shapeMap['B'].size();
//    int numC = shapeMap['C'].size();
//
//    // 判断唯一优势出拳形状
//    if (numA > 0 && numB > 0 && numC > 0) {
//        // 三种形状都有，形成循环，平局
//        return winners;
//    }
//    else if (numA > 0 && numB > 0 && numC == 0) {
//        // A 和 B 出现，A 胜
//        winners = shapeMap['A'];
//    }
//    else if (numB > 0 && numC > 0 && numA == 0) {
//        // B 和 C 出现，B 胜
//        winners = shapeMap['B'];
//    }
//    else if (numC > 0 && numA > 0 && numB == 0) {
//        // C 和 A 出现，C 胜
//        winners = shapeMap['C'];
//    }
//
//    // 按字典序排序赢家ID
//    sort(winners.begin(), winners.end());
//
//    return winners;
//}
//
//int main() {
//    unordered_map<char, vector<string>> shapeMap; // 用于存储每种形状的玩家列表
//    string line;
//
//    // 读取输入
//    while (getline(cin, line) && !line.empty()) {
//        stringstream ss(line);
//        
//
//        string id;
//        char shape;
//        // 使用字符串流解析ID和出拳形状
//        if (ss >> id >> shape) {
//            // 验证出拳形状是否合法
//            if (shape == 'A' || shape == 'B' || shape == 'C') {
//                shapeMap[shape].push_back(id);
//            }
//        }
//        
//        
//    }
//    // 判断赢家
//    vector<string> winners = determineWinners(shapeMap);
//
//    // 输出结果
//    if (winners.empty()) {
//        cout << "NULL" << endl;
//    }
//    else {
//        for (const auto& winner : winners) {
//            cout << winner << endl;
//        }
//    }
//
//    return 0;
//}
