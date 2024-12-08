#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

bool canGetAttendanceAward(const string& record) {
    vector<string> attendances;
    istringstream iss(record);
    string temp;

    // �������������ַ���
    while (iss >> temp) {
        attendances.push_back(temp);
    }

    int absentCount = 0;
    int n = attendances.size();

    // ����1��ȱ�ڲ�����һ��
    for (const string& day : attendances) {
        if (day == "absent") {
            absentCount++;
            if (absentCount > 1) {
                return false;
            }
        }
    }

    // ����2��û�������ĳٵ�������
    for (int i = 1; i < n; ++i) {
        if ((attendances[i] == "late" || attendances[i] == "leaveearly") &&
            (attendances[i - 1] == "late" || attendances[i - 1] == "leaveearly")) {
            return false;
        }
    }

    // ����3����������7�ο����У�ȱ��/�ٵ�/���˲�����3��
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
//    cin.ignore(); // ���Ի��з�
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
