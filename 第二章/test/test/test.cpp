// test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include <math.h>
#include<map>
using namespace std;

int lengthOfLongestSubstring(string s) {

	if (s.size()<1) return 0;
	int f = 0, b = 0;
	int res = 0;
	map<char, int> m;
	while (f<s.size())
	{

		if (m.find(s[f]) == m.end())/*如果之前没出现*/
		{
			m[s[f]] = 1;
			++f;

		}
		else//出现过
		{
			int tmp = f - b;
			if (tmp > res) res = tmp;
			b = f;
			m.erase(m.begin(), m.end());
		}


	}
	return res;

}
int main()
{
	string s = "abcabcdd";
	lengthOfLongestSubstring(s);
	
    return 0;
}


