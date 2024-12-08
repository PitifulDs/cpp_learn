#include <iostream>
#include <string>
#include <type_traits>
#include <vector>
#include <map>
using namespace std;


vector<int> theMaxEarning(vector<int>& productEarnRate,
    vector<int>& productRisk, vector<int>& productMaxShop,
    int m, int N, int X)
{
    map<int, int> selectPro; // 产品索引 与 投资额
    int maxEarning = 0; // 最大投资回报

    for (int i = 0; i < m; i++)
    {
        int curRisk = productRisk[i];
        if (curRisk > X) continue;

        int curInvestment = min(productMaxShop[i], N);
        int curEarning = productEarnRate[i] * curInvestment;

        // 保存当前方案
        if (curEarning >= maxEarning)
        {
            maxEarning = curEarning;
            selectPro.clear();
            selectPro[i] = curInvestment;
        }

        for (int j = i + 1; j < m; j++)
        {
            int combineRisk = curRisk + productRisk[j];
            if (combineRisk > X) continue;

            int investI; // 当前I投资额
            int investJ; // 当前J投资额

            if (productEarnRate[i] == productEarnRate[j]) {
                // 相同回报率的情况下，优先考虑风险更低且能提供最大投资回报的产品
                if (productRisk[i] <= productRisk[j]) {
                    investI = min(productMaxShop[i], N);
                    investJ = min(N - investI, productMaxShop[j]);
                }
                else {
                    investJ = min(productMaxShop[j], N);
                    investI = min(N - investJ, productMaxShop[i]);
                }
            }
            else if (productEarnRate[i] > productEarnRate[j]) {
                investI = min(productMaxShop[i], N);
                investJ = min(N - investI, productMaxShop[j]);
            }
            else {
                investJ = min(productMaxShop[j], N);
                investI = min(N - investJ, productMaxShop[i]);
            }


            curInvestment = investI + investJ;
            curEarning = investI * productEarnRate[i] + investJ * productEarnRate[j];

            // 保存当前方案
            if (curEarning > maxEarning)
            {
                maxEarning = curEarning;
                selectPro.clear();
                if (investI > 0) selectPro[i] = investI;
                if (investJ > 0) selectPro[j] = investJ;
            }

        }

    }

    vector<int> res;
    for (int i = 0; i < m; i++)
    {
        if (selectPro.count(i))
        {
            res.push_back(selectPro[i]);
        }
        else {
            res.push_back(0);
        }


    }

    return res;
}


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

/* 以上是最新*/





















//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//map<int, int> theInvestmentGame(vector<int> productValueRates, vector<int> productRiskValues,
//	vector<int> maxInvestments, int totalValues, int riskValue)
//{
//	map<int, int> selectProduct;	// 产品索引与投资额
//	int maxEranings = 0;	// 最大投资回报
//	//int curEranings = 0;	// 当前投资回报
//	//int curRisk = 0;		// 当前投资风险
//	//int curInvestment = 0;	// 当前投资额
//	for (int i = 0; i < productValueRates.size(); i++)
//	{
//		int curRisk = productRiskValues[i];
//
//		if (curRisk > riskValue) continue;
//
//		int curInvestment = min(maxInvestments[i], totalValues);
//		int curEranings = productValueRates[i] * curInvestment;
//
//		// 保存当前方案
//		if (curEranings > maxEranings)
//		{
//			maxEranings = curEranings;
//			selectProduct.clear();
//			selectProduct[i] = curInvestment;
//		}
//
//
//
//		for (int j = i + 1; j < productValueRates.size(); j++)
//		{
//			int combinedRisk = curRisk + productRiskValues[j];
//			if (combinedRisk > riskValue) break;
//
//			int investI; // 当前 I 投资额
//			int investJ; // 当前 J 投资额
//
//			// 优先投资回报率高的产品
//			if (productValueRates[i] > productValueRates[j])
//			{
//				// 能投多少I投多少
//				investI = min(maxInvestments[i], totalValues);
//				investJ = min(totalValues - investI, maxInvestments[j]);
//
//			}
//			else {
//				// 能投多少J投多少
//				investJ = min(maxInvestments[j], totalValues);
//				investI = min(totalValues - investJ, maxInvestments[i]);
//			}
//
//			// 更新当前投资额和投资回报
//			curInvestment = investI + investJ;
//			curEranings = investI * productValueRates[i] + investJ * productValueRates[j];
//
//			// 保存当前方案
//			if (curEranings > maxEranings)
//			{
//				maxEranings = curEranings;
//				selectProduct.clear();
//				if (investI > 0)	selectProduct[i] = investI;
//				if (investJ > 0) selectProduct[j] = investJ;
//			}
//		}
//
//
//	}
//
//
//	return selectProduct;
//}

//int main()
//{
//	string line;
//	getline(cin, line);
//
//	int products;	// 产品数量
//	int totalValues;// 总投资额
//	int riskValue;	// 风险承受能力
//	stringstream ss(line);
//	ss >> products >> totalValues >> riskValue;
//
//	vector<int> productValueRates;	// 产品投资回报率序列
//	string line2;
//	getline(cin, line2);
//	stringstream ss2(line2);
//	int valueRate;
//	while (ss2 >> valueRate)
//	{
//		productValueRates.push_back(valueRate);
//	}
//
//	vector<int> productRiskValues;	// 产品风险值序列
//	string line3;
//	getline(cin, line3);
//	stringstream ss3(line3);
//	int productRisk;
//	while (ss3 >> productRisk)
//	{
//		productRiskValues.push_back(productRisk);
//	}
//
//	vector<int> maxInvestments;	// 最大投资额度序列
//	string line4;
//	getline(cin, line4);
//	stringstream ss4(line4);
//	int maxInvestmentValue;
//	while (ss4 >> maxInvestmentValue)
//	{
//		maxInvestments.push_back(maxInvestmentValue);
//	}
//
//	map<int, int> investments;	// 最终投资额序列
//
//	investments = theInvestmentGame(productValueRates, productRiskValues, maxInvestments, totalValues, riskValue);
//
//	for (int i = 0; i < products; i++)
//	{
//		if (investments.count(i))
//		{
//			cout << investments[i] << " ";
//		}
//		else {
//			cout << 0 << " ";
//		}
//	}
//
//}


//int main() {
//    int m, N, X;
//    cin >> m >> N >> X;
//
//    vector<int> rates(m); // 投资回报率序列
//    vector<int> risks(m); // 风险值序列
//    vector<int> max_invest(m); // 最大投资额度序列
//
//    for (int i = 0; i < m; ++i) {
//        cin >> rates[i];
//    }
//
//    for (int i = 0; i < m; ++i) {
//        cin >> risks[i];
//    }
//
//    for (int i = 0; i < m; ++i) {
//        cin >> max_invest[i];
//    }
//
//    int max_profit = 0;
//    vector<int> best_investment(m, 0); // 最优的投资组合
//
//    // 遍历所有两个不同产品的组合
//    for (int i = 0; i < m; ++i) {
//        for (int j = i + 1; j < m; ++j) {
//            // 遍历可能的投资金额组合
//            for (int invest_i = 0; invest_i <= max_invest[i]; ++invest_i) {
//                for (int invest_j = 0; invest_j <= max_invest[j]; ++invest_j) {
//                    int total_invest = invest_i + invest_j;
//                    int total_risk = invest_i * risks[i] + invest_j * risks[j];
//                    int total_profit = invest_i * rates[i] + invest_j * rates[j];
//
//                    // 检查是否满足条件，并更新最大利润
//                    if (total_invest <= N && total_risk <= X && total_profit > max_profit) {
//                        max_profit = total_profit;
//                        best_investment[i] = invest_i;
//                        best_investment[j] = invest_j;
//                    }
//                }
//            }
//        }
//    }
//
//    // 输出最优的投资组合
//    for (int i = 0; i < m; ++i) {
//        cout << best_investment[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}












//void backTrace(vector<int>& productValueRates, vector<int>& productRiskValues,
//	vector<int>& maxInvestments, int totalValues, int riskValue,
//	int index, vector<int>& currentProducts, int& maxEarnings, vector<int>& bestCombination)
//{
//	int curEarnings = 0;	// 当前投资回报
//	int curRisk = 0;		// 当前投资风险
//	int curInvestment = 0;	// 当前投资额
//
//	for (int i : currentProducts)
//	{
//		curRisk += productRiskValues[i];
//		curInvestment += maxInvestments[i];
//		curEarnings += productValueRates[i] * maxInvestments[i];
//	}
//
//	if (curRisk <= riskValue && curInvestment <= totalValues)
//	{
//		if (curEarnings > maxEarnings)
//		{
//			maxEarnings = curEarnings;
//			bestCombination = currentProducts;
//		}
//	}
//
//	for (int i = index; i < productValueRates.size(); i++)
//	{
//		currentProducts.push_back(i);
//   		backTrace(productValueRates, productRiskValues, maxInvestments, totalValues, riskValue,
//		i + 1, currentProducts, maxEarnings, bestCombination);
//		currentProducts.pop_back(); // 回溯
//	}
//}
//
//vector<int> theInvestmentGame(vector<int> productValueRates, vector<int> productRiskValues,
//	vector<int> maxInvestments, int totalValues, int riskValue)
//{
//	vector<int> combianation;
//	int maxEranings = 0;
//	vector<int> curProducts;
//	backTrace(productValueRates, productRiskValues, maxInvestments, totalValues, riskValue, 
//		0, curProducts, maxEranings, combianation);
//
//	return combianation;
//
//
//}



//struct Task
//{
//	vector<int> selectProucts;	// 选择的方案
//   	int totalEraning;			// 总投资回报
//
//	Task (vector<int> p, int e) : selectProucts(p), totalEraning(e) {}
//};

