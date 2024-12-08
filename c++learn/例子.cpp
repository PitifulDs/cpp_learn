#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;


int lengthOfLongestSubstring(string s) {
    unordered_set<char> charSet;  // 用于存储当前窗口的字符
    int maxLength = 0;            // 最长无重复子串长度
    int start = 0;                // 窗口起始位置

    // 遍历字符串
    for (int end = 0; end < s.size(); end++) {
        // 如果当前字符已经在集合中，缩小窗口直到移除重复字符
        while (charSet.find(s[end]) != charSet.end()) {
            charSet.erase(s[start]);  // 从集合中移除窗口起始位置的字符
            start++;                  // 移动窗口起始位置
        }

        // 添加当前字符到集合
        charSet.insert(s[end]);

        // 更新最长无重复子串长度
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << "The length of the longest substring without repeating characters is: "
        << lengthOfLongestSubstring(s) << endl;
    return 0;
}









//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//// 在数组里面找到一个重复次数最多的数字
//class Solution {
//public:
//
//    static bool compare(pair<int, int>& a, pair<int, int>& b)
//    {
//        return a.second > b.second;
//    }
//
//    vector<int> findNums(vector<int>& nums)
//    {
//        unordered_map<int, int> hashMap;
//        for (auto& n : nums)
//        {
//            hashMap[n]++;
//        }
//
//        vector<pair<int, int>> vec(hashMap.begin(), hashMap.end());
//        sort(vec.begin(), vec.end(), compare);
//
//        vector<int> res;
//        int maxN = vec[0].second;
//        for (auto& p : vec)
//        {
//            if (p.second == maxN)
//            {
//                res.push_back(p.first);
//            }
//
//        }
//        return res;
//    }
//
//
//    
//};
//
//// 测试用例
//int main() {
//    Solution sol;
//    vector<int> nums = { 1, 1, 1, 2, 2, 3 };
//    vector<int> result = sol.findNums(nums);
//
//    // 输出结果
//    for (int num : result) {
//        cout << num << " ";
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//#include <type_traits>
//#include <vector>
//#include <map>
//using namespace std;
//
//
//vector<int> theMaxEarning(vector<int>& productEarnRate,
//    vector<int>& productRisk, vector<int>& productMaxShop,
//    int m, int N, int X)
//{
//    map<int, int> selectPro; // 产品索引 与 投资额
//    int maxEarning = 0; // 最大投资回报
//
//    for (int i = 0; i < m; i++)
//    {
//        int curRisk = productRisk[i];
//        if (curRisk > X) continue;
//
//        int curInvestment = min(productMaxShop[i], N);
//        int curEarning = productEarnRate[i] * curInvestment;
//
//        // 保存当前方案
//        if (curEarning >= maxEarning)
//        {
//            maxEarning = curEarning;
//            selectPro.clear();
//            selectPro[i] = curInvestment;
//        }
//
//        for (int j = i + 1; j < m; j++)
//        {
//            int combineRisk = curRisk + productRisk[j];
//            if (combineRisk > X) continue;
//
//            int investI; // 当前I投资额
//            int investJ; // 当前J投资额
//
//            if (productEarnRate[i] == productEarnRate[j]) {
//                // 相同回报率的情况下，优先考虑风险更低且能提供最大投资回报的产品
//                if (productRisk[i] <= productRisk[j]) {
//                    investI = min(productMaxShop[i], N);
//                    investJ = min(N - investI, productMaxShop[j]);
//                }
//                else {
//                    investJ = min(productMaxShop[j], N);
//                    investI = min(N - investJ, productMaxShop[i]);
//                }
//            }
//            else if (productEarnRate[i] > productEarnRate[j]) {
//                investI = min(productMaxShop[i], N);
//                investJ = min(N - investI, productMaxShop[j]);
//            }
//            else {
//                investJ = min(productMaxShop[j], N);
//                investI = min(N - investJ, productMaxShop[i]);
//            }
//
//
//            curInvestment = investI + investJ;
//            curEarning = investI * productEarnRate[i] + investJ * productEarnRate[j];
//
//            // 保存当前方案
//            if (curEarning > maxEarning)
//            {
//                maxEarning = curEarning;
//                selectPro.clear();
//                if (investI > 0) selectPro[i] = investI;
//                if (investJ > 0) selectPro[j] = investJ;
//            }
//
//        }
//
//    }
//
//    vector<int> res;
//    for (int i = 0; i < m; i++)
//    {
//        if (selectPro.count(i))
//        {
//            res.push_back(selectPro[i]);
//        }
//        else {
//            res.push_back(0);
//        }
//
//
//    }
//
//    return res;
//}
//
//
//int main()
//{
//    int m, N, X; // 理财产品m个，总投资额N，最该风险值X
//    cin >> m >> N >> X;
//
//    vector<int> productEarnRate(m);// 产品投资回报率序列
//    for (int i = 0; i < m; i++)
//    {
//        cin >> productEarnRate[i];
//    }
//
//    vector<int> productRisk(m); // 产品风险值序列
//    for (int i = 0; i < m; i++)
//    {
//        cin >> productRisk[i];
//    }
//
//    vector<int> productMaxShop(m); //最大投资额度序列
//    for (int i = 0; i < m; i++)
//    {
//        cin >> productMaxShop[i];
//    }
//
//    vector<int> result = theMaxEarning(productEarnRate, productRisk,
//        productMaxShop, m, N, X);
//
//    for (auto& n : result)
//    {
//        cout << n << ' ';
//
//    }
//
//
//}





//#include <iostream>
//#include <sstream>
//#include <string>
//#include <utility>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int minHomeValue(vector<int>& memberValues, vector<pair<int, int>>& relation) {
//    unordered_map<int, int> memberMap;
//    int maxValue = 0;
//    for (auto& r : relation)
//    {
//        int key = r.first;
//        memberMap[r.first]++;
//    }
//
//    for (auto& p : memberMap)
//    {
//        //int members = p.second + 1; // 加上自己
//        //int minister = memberValues[p.first];
//        int curHomeVaule = memberValues[p.first];
//        for (int i = 0; i < relation.size(); i++)
//        {
//            if (relation[i].first == p.first)
//            {
//                curHomeVaule += memberValues[relation[i].second];
//            }
//            
//        }
//        maxValue = max(maxValue, curHomeVaule);
//    }
//
//    return maxValue;
//}
//
//int main()
//{
//    int N;
//    cin >> N;
//    vector<int>  memberValues(N+1);
//    for (int i = 1; i <= N; i++)
//    {
//        cin >> memberValues[i];
//    }
//    if (N == 1)
//    {
//        cout << memberValues[1] << endl;
//        return 0;
//    }
//    vector<pair<int, int>> relation;
//    for (int i = 0; i < N ; i++)
//    {
//        string line;
//        getline(cin, line);
//        stringstream ss(line);
//        int f, s;
//        while (ss >> f >> s)
//        {
//            relation.push_back(make_pair(f, s));
//        }
//    }
//    
//    int result = minHomeValue(memberValues, relation);
//    cout<< result << endl;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    string getPermutation(int n, int k) {
//        // 阶乘数组，用于快速定位
//        vector<int> factorial(n, 1);
//        for (int i = 1; i < n; i++) {
//            factorial[i] = factorial[i - 1] * i;
//            cout << "factorial：" << factorial[i] << endl;
//        }
//
//        // 可选择的数字列表
//        vector<int> numbers;
//        for (int i = 1; i <= n; i++) {
//            numbers.push_back(i);
//        }
//
//        // 调整 k 为基于 0 的索引
//        k--;
//
//        string result;
//        // 逐步确定每一位
//        for (int i = n - 1; i >= 0; i--) {
//            int idx = k / factorial[i]; // 当前位的数字位置
//            result += to_string(numbers[idx]); // 添加到结果字符串
//            numbers.erase(numbers.begin() + idx); // 移除已选择的数字
//            k %= factorial[i]; // 更新 k
//        }
//
//        return result;
//    }
//};
//
//int main() {
//    Solution solution;
//    int n = 8;
//    int k = 3;
//    string result = solution.getPermutation(n, k);
//    cout << "第 " << k << " 个排列为: " << result << endl;
//
//    return 0;
//}
//
//
//
//



































// 64 位输出请用 printf("%lld")
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <unordered_map>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    cin.ignore();  // 忽略换行符
//
//    string nameLine;
//    getline(cin, nameLine);
//    stringstream ss(nameLine);
//    vector<string> candidates(n);
//    unordered_map<string, int> voteCount;
//
//    // 读取候选人名字
//    string name;
//    while (ss >> name) {
//        candidates.push_back(name);
//        voteCount[name] = 0;  // 初始化每个候选人的票数为0
//    }
//
//    int m;
//    cin >> m;
//    cin.ignore();  // 忽略换行符
//
//    string voteLine;
//    getline(cin, voteLine);  // 读取所有投票行
//
//    stringstream ssVotes(voteLine);
//    string vote;
//    int invalidVotes = 0;
//
//    // 处理每个投票并统计票数
//    while (ssVotes >> vote) {
//        if (voteCount.find(vote) != voteCount.end()) {
//            voteCount[vote]++;
//        }
//        else {
//            voteCount["Invalid"]++;
//        }
//    }
//
//    for (const auto& pair : voteCount) {
//        cout << pair.first << " : " << pair.second << endl;
//    }
//    cout << "Invalid : " << invalidVotes << endl;
//
//}
// 64 位输出请用 printf("%lld")

//#include <iostream>
//#include <thread>
//#include <vector>
//
//int value = 0; // 共享变量
//
//void increment() {
//    for (int i = 0; i < 100; ++i) {
//        ++value; // 不加锁的共享变量加操作
//    }
//}
//
//int main() {
//    std::vector<std::thread> threads;
//
//    // 创建两个线程
//    threads.emplace_back(increment);
//    threads.emplace_back(increment);
//
//    // 等待两个线程完成
//    for (auto& t : threads) {
//        t.join();
//    }
//
//    // 输出最终结果
//    std::cout << "Final value: " << value << std::endl;
//    return 0;
//}
//

//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <condition_variable>
//
//std::mutex  mtx;
//std::condition_variable cv;
//bool turn = true;
//
//void printNumbers(int start, int end)
//{
//	for (int i = start; i <= end; i++)
//	{
//		std::unique_lock<std::mutex> lock(mtx);
//		cv.wait(lock, [] {return turn; });
//		std::cout << i << "";
//		turn = false;
//		cv.notify_all();
//	
//	}
//}
//
//void printLetters(char start, char end)
//{
//	for (char ch = start; ch <= end; ch++)
//	{
//		std::unique_lock<std::mutex> lock(mtx);
//		cv.wait(lock, [] {return turn; });
//		std::cout << ch << "";
//		turn = true;
//		cv.notify_all();
//
//	}
//}
//
//
//
//int main()
//{
//	std::thread t1(printNumbers, 1, 100);
//	std::thread t2(printLetters, 'A', 'J');
//
//	t1.join();
//	t2.join();
//	return 0;
//}











//#include <iostream>
//using namespace std;
//
//// 定义二叉树的节点结构
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    void numsSum(TreeNode* node, int currentSum, int& sum) {
//        if (!node) return;
//
//        currentSum = currentSum * 10 + node->val;
//
//        // 打印当前节点和 currentSum 的值
//        cout << "Visiting Node: " << node->val << ", currentSum: " << currentSum << endl;
//
//        // 如果是叶子节点，累加当前路径表示的数字到总和中
//        if (!node->left && !node->right) {
//            sum += currentSum;
//            cout << "Leaf Node found: " << node->val << ", adding to sum: " << sum << endl;
//            return;
//        }
//
//        // 递归处理左子树和右子树
//        numsSum(node->left, currentSum, sum);
//        numsSum(node->right, currentSum, sum);
//    }
//
//    int sumNumbers(TreeNode* root) {
//        int sum = 0;
//        numsSum(root, 0, sum);
//        return sum;
//    }
//};
//
//int main() {
//    // 创建一个二叉树
//    TreeNode* root = new TreeNode(1);
//    root->left = new TreeNode(2);
//    root->right = new TreeNode(3);
//
//    Solution sol;
//    int result = sol.sumNumbers(root);
//
//    // 打印结果
//    cout << "The sum of root-to-leaf numbers is: " << result << endl;
//
//    // 释放内存
//    delete root->left;
//    delete root->right;
//    delete root;
//
//    return 0;
//}
//








//#include <iostream>
//#include <sstream>
//#include <string>
//
//int main()
//{
//    // 创建一个 string类 对象 s
//    std::string s("hello stringstream");
//    // 创建一个 stringstream类 对象 ss
//    std::stringstream ss;
//
//    // 向对象输入字符串 : "<<" 表示向一个对象中输入
//    ss << s;
//    std::cout << ss.str() << std::endl;
//
//    return 0;
//}
//
//
//
//








//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval) {
//    std::vector<std::vector<int>> result;
//    bool inserted = false;
//
//    for (auto& interval : intervals) {
//        if (interval[1] < newInterval[0]) {
//            // 当前区间在新区间的左侧，且没有重叠
//            result.push_back(interval);
//        }
//        else if (interval[0] > newInterval[1]) {
//            // 当前区间在新区间的右侧，且没有重叠
//            if (!inserted) {
//                result.push_back(newInterval);
//                inserted = true;
//            }
//            result.push_back(interval);
//        }
//        else {
//            // 当前区间与新区间有重叠，合并区间
//            newInterval[0] = std::min(newInterval[0], interval[0]);
//            newInterval[1] = std::max(newInterval[1], interval[1]);
//        }
//    }
//
//    if (!inserted) {
//        result.push_back(newInterval);
//    }
//
//    return result;
//}
//
//int main() {
//    std::vector<std::vector<int>> intervals = { {1, 3}, {6, 9} };
//    std::vector<int> newInterval = { 2, 5 };
//    std::vector<std::vector<int>> result = insert(intervals, newInterval);
//
//    std::cout << "插入并合并后的区间列表:" << std::endl;
//    for (const auto& interval : result) {
//        std::cout << "[" << interval[0] << "," << interval[1] << "] ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}

//#include <unordered_map>
//#include <vector>
//#include <string>
//#include <iostream>
//
//int main() {
//    std::vector<std::string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
//    std::vector<std::unordered_map<char, int>> char_counts;
//
//    // 遍历每个字符串
//    for (const auto& str : strs) {
//        std::unordered_map<char, int> char_count;
//        // 统计每个字符串的字符出现次数
//        for (char c : str) {
//            char_count[c]++;
//        }
//        // 将统计结果存入向量
//        char_counts.push_back(char_count);
//    }
//
//    // 输出每个字符串的字符统计结果
//    for (size_t i = 0; i < strs.size(); ++i) {
//        std::cout << "String: " << strs[i] << std::endl;
//        for (const auto& pair : char_counts[i]) {
//            std::cout << "'" << pair.first << "' : " << pair.second << std::endl;
//        }
//        std::cout << std::endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//#include <string>
//
//std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
//    std::unordered_map<std::string, std::vector<std::string>> anagrams;
//    for (const auto& str : strs) {
//        std::string sorted_str = str;
//        std::sort(sorted_str.begin(), sorted_str.end());
//        anagrams[sorted_str].push_back(str);
//    }
//
//    std::vector<std::vector<std::string>> result;
//    for (auto& pair : anagrams) {
//        result.push_back(pair.second);
//    }
//    return result;
//}
//
//int main() {
//    std::vector<std::string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
//    std::vector<std::vector<std::string>> groupedAnagrams = groupAnagrams(strs);
//
//    for (const auto& group : groupedAnagrams) {
//        for (const auto& str : group) {
//            std::cout << str << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    return 0;
//}










//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	const int* ptr = &x; // 常量指针，不能修改指针的值，但可以修改指针所指向的内容
//	ptr = &y; // 错误，不能修改指针的值
//
//	cout << "ptr:" << *ptr << endl;
//	// *ptr = 30; // 错误，不能修改指针所指向的内容
//}
//
//
//
//
//
//
//int main()
//{
//   //for (unsigned  char i = 0; i < 255; i++) 
//    for (char i = 0; i < 255; i++)
//    {
//        printf("%d ", i);
//    }
//    return 0;
//
//
//		
//}


//class Base {
//public:
//    Base() {
//        std::cout << "Base constructor\n";
//    }
//};

//class Member {
//public:
//    Member() {
//        std::cout << "Member constructor\n";
//    }
//};
//
//class Derived : public Base {
//    Member m;
//public:
//    Derived() {
//        std::cout << "Derived constructor\n";
//    }
//};
//
//int main() {
//    Derived d;
//    return 0;
//}

////
////int main()
////{
////	int a = 10;
////	
////	//创建引用
////	int& b = a;
////
////	cout << "a= " << a << endl;
////	cout << "b= " << b << endl;
////
////	b = 100;
////
////	cout << "a= " << a << endl;
////	cout << "b= " << b << endl;
////
////	a = 1000;
////
////	cout << "a= " << a << endl;
////	cout << "b= " << b << endl;
////
////	int c = 19;
////	b = c;
////	cout << "a= " << a << endl;
////	cout << "b= " << b << endl;
////	cout << "c= " << c << endl;
////
////	system("pause");
////
////	return 0;
////}
//
////int main()
////{
////	int temp = 10;
////	const int* p = &temp;
////	cout << "temp= " << temp << endl;
////	cout << "p= " << p << endl;
////	cout << "*p= " << *p << endl;
////	
////	temp = 100;
////	cout << "temp= " << temp << endl;
////	cout << "p= " << p << endl;
////	cout << "*p= " << *p << endl;
////
////	int* const q = &temp;
////	temp = 99;
////	cout << "temp= " << temp << endl;
////	cout << "q= " << q << endl;
////	cout << "*q= " << *q << endl;
////
////	*q = 100;
////	int tem2;
////	//q = &tem2;
////	cout << "temp= " << temp << endl;
////	cout << "q= " << q << endl;
////	cout << "*q= " << *q << endl;
////}
////
////int main() {
////    int a[5] = { 11,23,34,45,56 };
////    int* p = a;
////    for (int i = 0; i < 5; i++)
////    {
////        printf("*(p++):%d\n", *(p++));
////        //printf("++*p:%d\n", ++*p);
////        //printf("*(++p):%d\n", *(++p));
////        //printf("%d\n", *p+i);
////    }
////   
////    for (int i = 0; i < 5; i++)
////    {
////        //printf("*(p++):%d\n", *(p++));
////        printf("++*p:%d\n", ++*p);
////        //printf("*(++p):%d\n", *(++p));
////        //printf("%d\n", *p+i);
////    }
////
////    return 0;
////}
//
//
//struct A {
//	char x;
//	int c;
//	short b;
//	char c11;
//
//};
//
//
//struct B {
//	short x2;
//	short c2;
//	short b2;
//
//
//};
//
//
//struct C {
//	char x3;
//	short b3;
//	char c3;
//	
//
//
//};
//
//union Data {
//	char charValue;
//	int intValue;
//	float floatValue;
//	double doubleValue;
//
//};
// 
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	cout << sizeof(C) << endl;
//	cout << sizeof(Data) << endl;
//}
//
//
