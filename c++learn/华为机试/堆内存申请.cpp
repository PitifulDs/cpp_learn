#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;
/*
    ƫ�������ڴ���������ڴ�ռ��е���ʼλ��
    �ڴ��С��һ���ڴ����ռ�õ��ֽ���
    ƫ�������ڴ��Сһ�������һ���ڴ��ġ����䡱��Χ��
    ���磬������һ���ڴ���ƫ���� 20 ��ʼ����СΪ 10 �ֽڣ�
    ��ô����ڴ��ռ�ݵķ�Χ�� [20, 30)������20�ֽڵ�29�ֽڣ�ע��30�ǲ������ģ���
*/


bool isOverlapOrInvalid(vector<pair<int, int>>& blocks) {
    for (int i = 1; i < blocks.size(); i++) {
        if (blocks[i].first < blocks[i - 1].first + blocks[i - 1].second) {
            return true; // �ص�
        }
    }
    return false;
}

//int main() {
//    int bytes; // �ڴ������ֽ���
//    cin >> bytes;
//    if (bytes <= 0 || bytes > 100) {
//        cout << -1 << endl; // �Ƿ������С
//        return 0;
//    }
//
//    vector<pair<int, int>> blocks;
//    string line;
//    cin.ignore(); // ���Ե�һ�к�Ļ��з�
//
//    // ��ȡÿ�е�ƫ�������ڴ��С
//    while (getline(cin, line)) {
//        if (line.empty()) {
//            break; // �������Ϊ���У��˳�ѭ��
//        }
//        stringstream ss(line);
//        int offset, memory;
//        if (ss >> offset >> memory) {
//            if (offset < 0 || memory <= 0 || offset + memory > 100) {
//                cout << -1 << endl; // �Ƿ�����
//                return 0;
//            }
//            blocks.emplace_back(offset, memory);
//        }
//        else {
//            cout << -1 << endl; // ��Ч����
//            return 0;
//        }
//    }
//
//    // ����ʼ��ַ����
//    sort(blocks.begin(), blocks.end());
//
//    // �������Ŀ��Ƿ����ص���Ƿ�
//    if (isOverlapOrInvalid(blocks)) {
//        cout << -1 << endl;
//        return 0;
//    }
//
//    int bestFitOffset = -1;
//    int bestFitMemory = 101;
//
//    // ����0����һ����֮��Ŀ��пռ�
//    if (blocks.empty() || blocks[0].first >= bytes) {
//        bestFitOffset = 0;
//        bestFitMemory = blocks.empty() ? 100 : blocks[0].first;
//    }
//
//    // ���ÿ���ѷ���Ŀ�֮��Ŀ��пռ�
//    for (int i = 1; i < blocks.size(); i++) {
//        int freeOffset = blocks[i - 1].first + blocks[i - 1].second;
//        int freeMemory = blocks[i].first - freeOffset;
//        if (freeMemory >= bytes && freeMemory < bestFitMemory) {
//            bestFitOffset = freeOffset;
//            bestFitMemory = freeMemory;
//        }
//    }
//
//    // ������һ���鵽��ĩβ�Ŀ��пռ�
//    if (!blocks.empty()) {
//        int lastBlockEnd = blocks.back().first + blocks.back().second;
//        if (100 - lastBlockEnd >= bytes && 100 - lastBlockEnd < bestFitMemory) {
//            bestFitOffset = lastBlockEnd;
//            bestFitMemory = 100 - lastBlockEnd;
//        }
//    }
//
//    cout << bestFitOffset << endl;
//    return 0;
//}
