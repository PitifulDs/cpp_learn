//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//    int n; // ������
//    cin >> n;
//
//    vector<int> silverWeights(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> silverWeights[i];
//    }
//    
//
//    while (silverWeights.size() >= 3)
//    {
//        sort(silverWeights.begin(), silverWeights.end());
//
//        int x = silverWeights[silverWeights.size() - 3];
//        int y = silverWeights[silverWeights.size() - 2];
//        int z = silverWeights[silverWeights.size() - 1];
//        silverWeights.pop_back();
//        silverWeights.pop_back();
//        silverWeights.pop_back();
//
//        /*int remain = abs((z - y) - (y - x));
//        if (remain != 0)
//        {
//            silverWeights.push_back(remain);
//        }*/
//        int remain = 0;
//        if (x == y && y == z) {
//            // �����������ζ��ᱻ��ȫ�۵�
//            continue;
//        }
//        else if (x == y && y != z) {
//            // ʣ������Ϊ z - y �������޷����۵�
//            remain = z - y;
//          
//            silverWeights.push_back(remain);
//            
//        }
//        else if (x != y && y == z) {
//            // ʣ������Ϊ y - x �������޷����۵�
//            remain = y - x;
//           
//            silverWeights.push_back(remain);
//            
//        }
//        else if(x!=y && y!=z){
//            // ʣ������Ϊ z - y �� y - x ������
//            remain = abs((z - y) - (y - x));
//            if (remain != 0)
//            {
//                silverWeights.push_back(remain);
//            }
//            //silverWeights.push_back(y - x);
//        }
//
//    }
//
//    if (silverWeights.size() == 2) {
//        cout << max(silverWeights[0], silverWeights[1]) << endl;
//    }
//    else if (silverWeights.size() == 1) {
//        cout << silverWeights[0] << endl;
//    }
//    else {
//        cout << 0 << endl;
//    }
//
//}