#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;
/*
    偏移量：内存块在整个内存空间中的起始位置
    内存大小：一个内存块所占用的字节数
    偏移量和内存大小一起决定了一个内存块的“区间”或范围。
    例如，假设有一个内存块从偏移量 20 开始，大小为 10 字节，
    那么这个内存块占据的范围是 [20, 30)，即从20字节到29字节（注意30是不包含的）。
*/


bool isOverlapOrInvalid(vector<pair<int, int>>& blocks) {
    for (int i = 1; i < blocks.size(); i++) {
        if (blocks[i].first < blocks[i - 1].first + blocks[i - 1].second) {
            return true; // 重叠
        }
    }
    return false;
}

//int main() {
//    int bytes; // 内存申请字节数
//    cin >> bytes;
//    if (bytes <= 0 || bytes > 100) {
//        cout << -1 << endl; // 非法请求大小
//        return 0;
//    }
//
//    vector<pair<int, int>> blocks;
//    string line;
//    cin.ignore(); // 忽略第一行后的换行符
//
//    // 读取每行的偏移量和内存大小
//    while (getline(cin, line)) {
//        if (line.empty()) {
//            break; // 如果输入为空行，退出循环
//        }
//        stringstream ss(line);
//        int offset, memory;
//        if (ss >> offset >> memory) {
//            if (offset < 0 || memory <= 0 || offset + memory > 100) {
//                cout << -1 << endl; // 非法输入
//                return 0;
//            }
//            blocks.emplace_back(offset, memory);
//        }
//        else {
//            cout << -1 << endl; // 无效输入
//            return 0;
//        }
//    }
//
//    // 按起始地址排序
//    sort(blocks.begin(), blocks.end());
//
//    // 检查输入的块是否有重叠或非法
//    if (isOverlapOrInvalid(blocks)) {
//        cout << -1 << endl;
//        return 0;
//    }
//
//    int bestFitOffset = -1;
//    int bestFitMemory = 101;
//
//    // 检查从0到第一个块之间的空闲空间
//    if (blocks.empty() || blocks[0].first >= bytes) {
//        bestFitOffset = 0;
//        bestFitMemory = blocks.empty() ? 100 : blocks[0].first;
//    }
//
//    // 检查每个已分配的块之间的空闲空间
//    for (int i = 1; i < blocks.size(); i++) {
//        int freeOffset = blocks[i - 1].first + blocks[i - 1].second;
//        int freeMemory = blocks[i].first - freeOffset;
//        if (freeMemory >= bytes && freeMemory < bestFitMemory) {
//            bestFitOffset = freeOffset;
//            bestFitMemory = freeMemory;
//        }
//    }
//
//    // 检查最后一个块到堆末尾的空闲空间
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
