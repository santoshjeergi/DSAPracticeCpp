#include "HashingArray.h"


bool HashingArray::isElementsRepeating()
{
	unordered_set<int>  temp;
	unordered_set<int> dupset;
	for (unsigned int i = 0; i < inarray.size(); i++)
	{
		if (temp.find(inarray[i]) != temp.end())
		{
			dupset.insert(inarray[i]);
		}
		else {
			temp.insert(inarray[i]);
		}
	}
	cout << "dupset:";
	for (int x : dupset)
	{
		cout << " " << x;
	}
	cout << endl;

	return true;
}
void HashingArray::set(int array[], int aSize)
{
	inarray.assign(array, array + aSize);



}
int HashingArray::isSubArraywithSumExists() {
	int totalSubarray = 0;
	unordered_set<int>  temp;
	vector<int> prefixSum(inarray.size(),0);

	temp.insert(inarray[0]);
	prefixSum.push_back(inarray[0]);
	for (unsigned int i = 1; i < inarray.size(); i++)
	{
		int p = prefixSum[i - 1] + inarray[i];
		
		if (temp.find(p) != temp.end())
		{
			totalSubarray++;
			cout << "idx:" << i << endl;
		}
		else
		{
			temp.insert(p);
		}
		prefixSum.push_back(p);
	}
	cout << "Toal subarraywithZero:" << totalSubarray << endl;
	return totalSubarray;
}

int HashingArray::longestSubarray() {
	cout << " " << __FUNCTION__ << endl;
	unordered_map<int, int> hashMap;
	hashMap.insert({ 0, -1 });

	unsigned int pSum = 0;
	unsigned int len = 0;
	
	for (unsigned int i = 0; i < inarray.size(); i++)
	{
		pSum += inarray[i];
		unordered_map<int, int>::iterator itr = hashMap.find(pSum);
		if ( itr != hashMap.end())
		{ // 0 -(-1) + 1
			cout << "len: val:"<<inarray[i]<<" idx:"<< i << " " << itr->second << endl;
			len = max(len, (i - itr->second));
		}
		else 
		{
			hashMap.insert({ pSum , i });
		}
	}
	cout << "Len:" << len << endl;
	return len;
}
