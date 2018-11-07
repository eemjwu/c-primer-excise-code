// 01.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<Sales_item.h>
#include<iostream>
using namespace std;

int main()
{
	Sales_item total;
	if (cin >> total)
	{
		Sales_item trans;
		while (cin >> trans)
		{
			//if (cin.get() == '\n') break;
			if (total.isbn() == trans.isbn())
				total += trans;
			else
			{
				cout << total << endl;
				total = trans;
			}
			
		}
		cout << total << endl;
	}
	else
	{
		cerr << "NO data?!" << endl;
	}
	
    return 0;
}

