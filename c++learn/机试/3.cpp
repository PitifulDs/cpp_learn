//#include <iostream>
//#include <string>
//#include <vector>
//#include <sstream>
//
//using namespace std;
//
//vector<string> macthCity(vector < pair<string, vector<string>>>& citiesIp, vector<string>& targetIps)
//{
//	vector<string> res;
//	res.push_back("City1");
//	res.push_back("City2");
//	res.push_back("City3");
//		
//
//	return res;
//}
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	
//	vector < pair<string, vector<string>>> citiesIp;
//	stringstream ss(s);
//	string temp;
//	while (getline(ss, temp, ';'))
//	{
//		int pos = temp.find('=');
//		string cityNum = temp.substr(0, pos);
//		string ipAdresses = temp.substr(pos + 1); 
//		// 将ip地址转为整数；
//		vector<string> ips;
//		int pos2 = ipAdresses.find(',');
//		string ipStart = ipAdresses.substr(0, pos2);
//		string ipEnd = ipAdresses.substr(pos2 + 1);
//
//		ips.push_back(ipStart);
//		ips.push_back(ipEnd);
//
//		citiesIp.emplace_back(cityNum, ips);
//	}
//
//	string line2;
//	getline(cin, line2);
//	stringstream ss2(line2);
//	string temp2;
//	vector<string> targetIps;
//	while (getline(ss2, temp2, ','))
//	{
//		targetIps.push_back(temp2);
//	}
//
//	vector<string> result = macthCity(citiesIp, targetIps);
//
//	for (int i=0 ; i<result.size(); i++)
//	{
//		string city = result[i];
//		if(i == result.size()-1)
//		{
//			cout << city;
//		}
//		else {
//			cout << city << ',';
//		}
//	}
//
//}