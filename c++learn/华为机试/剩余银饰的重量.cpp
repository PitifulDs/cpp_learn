//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//    int n; // 银饰数
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
//            // 所有三块银饰都会被完全熔掉
//            continue;
//        }
//        else if (x == y && y != z) {
//            // 剩余重量为 z - y 的银块无法被熔掉
//            remain = z - y;
//          
//            silverWeights.push_back(remain);
//            
//        }
//        else if (x != y && y == z) {
//            // 剩余重量为 y - x 的银块无法被熔掉
//            remain = y - x;
//           
//            silverWeights.push_back(remain);
//            
//        }
//        else if(x!=y && y!=z){
//            // 剩余重量为 z - y 和 y - x 的银块
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