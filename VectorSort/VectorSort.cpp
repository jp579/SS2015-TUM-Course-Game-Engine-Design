// VectorSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

struct myComparison {
	bool operator() (int i, int j) 
		{ return (i > j); }
} myobject;

int _tmain(int argc, _TCHAR* argv[])
{
	std::vector<int> vec;
	int a;
	do{

		std::cin >> a;
		if (a != 0)
			vec.push_back(a);
	} while (a != 0);
	
	std::sort(vec.begin(), vec.end(), myobject);

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl << "end"<< std::endl;
	system("pause");
	return 0;
}

