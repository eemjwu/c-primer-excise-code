// text7.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"Person.h"

using namespace std;


int main()
{
	Person p("wmj", "gz");
	cout << p.get_name() << endl;
	while (1);
    return 0;
}

