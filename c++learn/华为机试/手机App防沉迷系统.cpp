//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <sstream>
//
//using namespace std;
//
//// APP结构体定义，包含应用的名称、优先级、开始时间和结束时间
//struct APP {
//    string name;    // 名称
//    int priority;   // 优先级
//    int startTime;  // 开始时间（以分钟数表示）
//    int endTime;    // 结束时间（以分钟数表示）
//
//    // 构造函数，用于初始化APP结构体
//    APP(string n, int p, int s, int e) : name(n), priority(p), startTime(s), endTime(e) {}
//};
//
//// 时间转换函数：将HH:MM格式的时间转换为分钟数，便于比较
//int timeToMinutes(const string& time) {
//    int hour = stoi(time.substr(0, 2));  // 提取小时部分并转换为整数
//    int minute = stoi(time.substr(3, 2));  // 提取分钟部分并转换为整数
//    return hour * 60 + minute;  // 返回总分钟数
//}
//
//int main() {
//    int N;  // N表示要注册的App数量
//    cin >> N;
//    cin.ignore();  // 忽略掉cin后面的换行符
//
//    vector<APP> apps;  // 存储有效注册的App的列表
//    for (int i = 0; i < N; i++) {
//        string name, startTimeStr, endTimeStr;
//        int priority;
//
//        // 读取每个App的名称、优先级、开始时间和结束时间
//        cin >> name >> priority >> startTimeStr >> endTimeStr;
//
//        // 将开始时间和结束时间转换为分钟数
//        int startTime = timeToMinutes(startTimeStr);
//        int endTime = timeToMinutes(endTimeStr);
//
//        if (startTime >= endTime) {
//            // 如果起始时间不小于结束时间，则此注册无效，跳过
//            continue;
//        }
//
//        bool conflict = false;  // 标记是否有冲突
//
//        // 检查当前App的时间段是否与已注册的App有冲突
//        for (auto it = apps.begin(); it != apps.end();) {
//            APP& app = *it;
//
//            // 检查两个时间段是否有重叠
//            if (!(endTime <= app.startTime || startTime >= app.endTime)) {
//                if (priority < app.priority || (priority == app.priority && i > distance(apps.begin(), it))) {
//                    // 如果当前App优先级不高，或者优先级相同但是后注册，则标记为冲突
//                    conflict = true;
//                    break;
//                }
//                else if (priority > app.priority) {
//                    // 当前App优先级更高，移除已有的冲突App
//                    it = apps.erase(it);
//                    continue;  // 移除后不增加迭代器，继续处理当前it位置
//                }
//            }
//            ++it;  // 仅当没有移除元素时，迭代器前进
//        }
//
//        if (!conflict) {
//            // 如果没有冲突，则将当前App注册到列表中
//            apps.push_back(APP(name, priority, startTime, endTime));
//        }
//    }
//    cin.ignore();  // 忽略输入中的换行符
//
//    // 读取需要查询的时间点
//    string queryTime;
//    getline(cin, queryTime);
//    int queryTimeInMinutes = timeToMinutes(queryTime);  // 转换为分钟数
//
//    // 查找在查询时间点有效的App
//    string result = "NA";  // 默认返回"NA"，表示没有找到有效的App
//    int maxPriorty = -1;  // 用于记录当前最高的优先级
//
//    for (auto& app : apps) {
//        // 如果查询时间点在App的有效时间范围内
//        if (queryTimeInMinutes >= app.startTime && queryTimeInMinutes < app.endTime) {
//            if (app.priority > maxPriorty) {
//                // 如果当前App的优先级更高，更新结果
//                maxPriorty = app.priority;
//                result = app.name;
//            }
//        }
//    }
//    // 输出查询结果
//    cout << result << endl;
//
//    return 0;
//}
