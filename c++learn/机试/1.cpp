//#include <iostream>
//#include <string>
//#include <vector>
//
//
//using namespace std;
//
//// < 表示可以清除前一个输入的字符
//
//string checkPass(string& temp)
//{
//	int passLen = temp.size();
//	//if (passLen < 8) return "false";
//
//	int lowCount = 0;
//	int upperCount = 0;
//	int digitCount = 0;
//	int punctCount = 0;
//
//	for (auto& c : temp)
//	{
//		if (islower(c)) lowCount++;
//		else if (isupper(c)) upperCount++;
//		else if (isdigit(c)) digitCount++;
//		else if (ispunct(c)) punctCount++;
//	}
//
//	if (passLen >= 8 && lowCount >= 1 && upperCount >= 1 && digitCount >= 1 && punctCount >= 1)
//	{
//		return "true";
//	}
//	else {
//		return "false";
//	}
//
//}
//
//int main()
//{
//	string password;
//	getline(cin, password);
//	
//	// 遍历所有字符
//	vector<char> pass;
//	char preChar = password[0];
//	if(preChar != '<')
//	{
//		pass.push_back(preChar);
//	}
//
//	for (int i=1; i<password.size(); i++)
//	{
//		char c = password[i]; 
//		if (c == '<')
//		{
//			pass.pop_back();
//		}else{
//			
//			pass.push_back(c);
//		}
//	}
//
//	string temp = "";
//	for (auto& c : pass)
//	{
//		temp += c;
//	}
//
//	string result = checkPass(temp);
//
//	for (auto& c : temp)
//	{
//		cout << c;
//	}
//	cout << ',';
//	cout << result;
//}