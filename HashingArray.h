#pragma once
#include "Common.h"
class HashingArray
{
	vector<int> inarray{ 1, 2, 4, 2, 7, 8, 3, 1, 6, 8 };
	
public:
	bool isElementsRepeating();
	int isSubArraywithSumExists();
	void set(int array[], int aSize);
	int longestSubarray();
};

