//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <vector>
//#include <sstream>
//#include <algorithm>
//
//using namespace std;
//
//// ���������ж�Ӯ��
//vector<string> determineWinners(unordered_map<char, vector<string>>& shapeMap) {
//    vector<string> winners;
//
//    // ͳ��ÿ����״������
//    int numA = shapeMap['A'].size();
//    int numB = shapeMap['B'].size();
//    int numC = shapeMap['C'].size();
//
//    // �ж�Ψһ���Ƴ�ȭ��״
//    if (numA > 0 && numB > 0 && numC > 0) {
//        // ������״���У��γ�ѭ����ƽ��
//        return winners;
//    }
//    else if (numA > 0 && numB > 0 && numC == 0) {
//        // A �� B ���֣�A ʤ
//        winners = shapeMap['A'];
//    }
//    else if (numB > 0 && numC > 0 && numA == 0) {
//        // B �� C ���֣�B ʤ
//        winners = shapeMap['B'];
//    }
//    else if (numC > 0 && numA > 0 && numB == 0) {
//        // C �� A ���֣�C ʤ
//        winners = shapeMap['C'];
//    }
//
//    // ���ֵ�������Ӯ��ID
//    sort(winners.begin(), winners.end());
//
//    return winners;
//}
//
//int main() {
//    unordered_map<char, vector<string>> shapeMap; // ���ڴ洢ÿ����״������б�
//    string line;
//
//    // ��ȡ����
//    while (getline(cin, line) && !line.empty()) {
//        stringstream ss(line);
//        
//
//        string id;
//        char shape;
//        // ʹ���ַ���������ID�ͳ�ȭ��״
//        if (ss >> id >> shape) {
//            // ��֤��ȭ��״�Ƿ�Ϸ�
//            if (shape == 'A' || shape == 'B' || shape == 'C') {
//                shapeMap[shape].push_back(id);
//            }
//        }
//        
//        
//    }
//    // �ж�Ӯ��
//    vector<string> winners = determineWinners(shapeMap);
//
//    // ������
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
