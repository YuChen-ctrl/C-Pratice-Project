// LeetCode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<set>
#include<algorithm>
#include<unordered_set>
using namespace std;

//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        if (s.size() == 0) return 0;
//        unordered_set<char>lookup;
//        int maxStr = 0;
//        int left = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//           
//            while (lookup.find(s[i]) != lookup.end()) {
//                lookup.erase(s[left]);
//                left++;
//            }
//            maxStr = max(maxStr, i - left + 1);
//            lookup.insert(s[i]);
//        }
//        
//        return maxStr;
//    }
//};
//
//int main()
//{
//    Solution p;
//    int i = p.lengthOfLongestSubstring("abcabcbb");
//    cout << i << endl;
//}

//unorder_set使用方法
int main()
{
	unordered_set<string>uset;
	uset.emplace("http://c.biancheng.net/java/");
	uset.emplace("http://c.biancheng.net/c/");
	uset.emplace("http://c.biancheng.net/python/");
	cout << uset.size() << endl;
	for (auto iter = uset.begin(); iter != uset.end(); ++iter) {
		cout << *iter << endl;
	}
	return 0;

}
