#pragma once
#include "Common.h"
class BinSearch
{
private:
	vector<int> inarray;
	int alen = 0;
	int findmaxima();
public:
	int set(int* arr, int len);
	bool doeselemExists(int k);
	int findfloor(int k);
	int findfirstOccurance(int x);
	int lastOccurance(int x);
	int findFreq(int x);
	
	int findMaxima();

	int findUniqueElem();

};

