#pragma once
#include "Common.h"

class PrefixQueriesClass
{
public:
	
	//vector<int> inarray{ -3, 6, 2, 4, 5, 2, 8, -9, 3, 1 };
	//vector<int> inarray{ 2, 8, -1, 4 };
	vector<int> inarray{ 3,4,-2, 5, 3, -2, 8, 2, -1, 4};

	vector<vector<int>> rageQueries{ {4,8}, {3,7}, {1,3}, {0,4}};

	int calculatePF();

	int allsubarray();
	int sumOfallsubarray();
	int sumOfsubarraywithLen(int k);
};

