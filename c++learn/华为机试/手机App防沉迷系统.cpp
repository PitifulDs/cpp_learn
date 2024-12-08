//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <sstream>
//
//using namespace std;
//
//// APP�ṹ�嶨�壬����Ӧ�õ����ơ����ȼ�����ʼʱ��ͽ���ʱ��
//struct APP {
//    string name;    // ����
//    int priority;   // ���ȼ�
//    int startTime;  // ��ʼʱ�䣨�Է�������ʾ��
//    int endTime;    // ����ʱ�䣨�Է�������ʾ��
//
//    // ���캯�������ڳ�ʼ��APP�ṹ��
//    APP(string n, int p, int s, int e) : name(n), priority(p), startTime(s), endTime(e) {}
//};
//
//// ʱ��ת����������HH:MM��ʽ��ʱ��ת��Ϊ�����������ڱȽ�
//int timeToMinutes(const string& time) {
//    int hour = stoi(time.substr(0, 2));  // ��ȡСʱ���ֲ�ת��Ϊ����
//    int minute = stoi(time.substr(3, 2));  // ��ȡ���Ӳ��ֲ�ת��Ϊ����
//    return hour * 60 + minute;  // �����ܷ�����
//}
//
//int main() {
//    int N;  // N��ʾҪע���App����
//    cin >> N;
//    cin.ignore();  // ���Ե�cin����Ļ��з�
//
//    vector<APP> apps;  // �洢��Чע���App���б�
//    for (int i = 0; i < N; i++) {
//        string name, startTimeStr, endTimeStr;
//        int priority;
//
//        // ��ȡÿ��App�����ơ����ȼ�����ʼʱ��ͽ���ʱ��
//        cin >> name >> priority >> startTimeStr >> endTimeStr;
//
//        // ����ʼʱ��ͽ���ʱ��ת��Ϊ������
//        int startTime = timeToMinutes(startTimeStr);
//        int endTime = timeToMinutes(endTimeStr);
//
//        if (startTime >= endTime) {
//            // �����ʼʱ�䲻С�ڽ���ʱ�䣬���ע����Ч������
//            continue;
//        }
//
//        bool conflict = false;  // ����Ƿ��г�ͻ
//
//        // ��鵱ǰApp��ʱ����Ƿ�����ע���App�г�ͻ
//        for (auto it = apps.begin(); it != apps.end();) {
//            APP& app = *it;
//
//            // �������ʱ����Ƿ����ص�
//            if (!(endTime <= app.startTime || startTime >= app.endTime)) {
//                if (priority < app.priority || (priority == app.priority && i > distance(apps.begin(), it))) {
//                    // �����ǰApp���ȼ����ߣ��������ȼ���ͬ���Ǻ�ע�ᣬ����Ϊ��ͻ
//                    conflict = true;
//                    break;
//                }
//                else if (priority > app.priority) {
//                    // ��ǰApp���ȼ����ߣ��Ƴ����еĳ�ͻApp
//                    it = apps.erase(it);
//                    continue;  // �Ƴ������ӵ���������������ǰitλ��
//                }
//            }
//            ++it;  // ����û���Ƴ�Ԫ��ʱ��������ǰ��
//        }
//
//        if (!conflict) {
//            // ���û�г�ͻ���򽫵�ǰAppע�ᵽ�б���
//            apps.push_back(APP(name, priority, startTime, endTime));
//        }
//    }
//    cin.ignore();  // ���������еĻ��з�
//
//    // ��ȡ��Ҫ��ѯ��ʱ���
//    string queryTime;
//    getline(cin, queryTime);
//    int queryTimeInMinutes = timeToMinutes(queryTime);  // ת��Ϊ������
//
//    // �����ڲ�ѯʱ�����Ч��App
//    string result = "NA";  // Ĭ�Ϸ���"NA"����ʾû���ҵ���Ч��App
//    int maxPriorty = -1;  // ���ڼ�¼��ǰ��ߵ����ȼ�
//
//    for (auto& app : apps) {
//        // �����ѯʱ�����App����Чʱ�䷶Χ��
//        if (queryTimeInMinutes >= app.startTime && queryTimeInMinutes < app.endTime) {
//            if (app.priority > maxPriorty) {
//                // �����ǰApp�����ȼ����ߣ����½��
//                maxPriorty = app.priority;
//                result = app.name;
//            }
//        }
//    }
//    // �����ѯ���
//    cout << result << endl;
//
//    return 0;
//}
