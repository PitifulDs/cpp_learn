#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

bool canGetAttendanceAward(const string& record) {
    vector<string> attendances;
    istringstream iss(record);
    string temp;

    // 解析考勤数据字符串
    while (iss >> temp) {
        attendances.push_back(temp);
    }

    int absentCount = 0;
    int n = attendances.size();

    // 条件1：缺勤不超过一次
    for (const string& day : attendances) {
        if (day == "absent") {
            absentCount++;
            if (absentCount > 1) {
                return false;
            }
        }
    }

    // 条件2：没有连续的迟到或早退
    for (int i = 1; i < n; ++i) {
        if ((attendances[i] == "late" || attendances[i] == "leaveearly") &&
            (attendances[i - 1] == "late" || attendances[i - 1] == "leaveearly")) {
            return false;
        }
    }

    // 条件3：任意连续7次考勤中，缺勤/迟到/早退不超过3次
    for (int i = 0; i <= n - 7; ++i) {
        int count = 0;
        for (int j = i; j < i + 7; ++j) {
            if (attendances[j] == "absent" || attendances[j] == "late" || attendances[j] == "leaveearly") {
                count++;
            }
        }
        if (count > 3) {
            return false;
        }
    }

    return true;
}

//int main() {
//    int n;
//    cin >> n;
//    cin.ignore(); // 忽略换行符
//
//    for (int i = 0; i < n; ++i) {
//        string record;
//        getline(cin, record);
//        if (canGetAttendanceAward(record)) {
//            cout << "true" << " ";
//        }
//        else {
//            cout << "false" << " ";
//        }
//    }
//
//    return 0;
//}
