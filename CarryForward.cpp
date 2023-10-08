//Given n arry elem, check if there exists the pair(a[i] + a[j] = k && i != j)
#include "Common.h"
#include<unordered_map>
int approach2(vector<int>& input, int B);
int TwopointerApproach(vector<int>& input, int B);
int main_checkIfExists()
{
	
	vector<int> input{ 3, 7, 11, 18, 14, 19, 20 };
	int B = 25;
	//return approach1_bruteforce(input);
	//return approach2(input, B);
	//return TwopointerApproach(input, B);
	return 0;
}

int TwopointerApproach(vector<int>&input, int B) //TC:O(N), SC:O(1)
{
	int p1 = 0;
	int p2 = input.size() - 1;
	while (p1 < p2)
	{
		if (input[p1] + input[p2] == B)
		{
			cout << "Found  pair: Indexes:" << p1 << " " << p2 << " values:" << input[p1] << " + " << input[p2] << endl;
			return 1;
		}
		if (input[p1] + input[p2] > B)
		{
			p2--;
		}
		else //p1+p2 < B
		{
			p1++;
		}
	}
	return 0;
}

int approach2(vector<int>& input, int B) //TC:O(N), SC:O(N)
{
	unordered_map<int, int> hashMap;
	for (int i = 0; i < input.size(); i++)
	{
		auto it = hashMap.find(B - input[i]);
		if (it != hashMap.end())
		{
			cout << "found pair: Indexes: " << it->first << " & " << i << " values:" << it->second << " and : " << input[i] << endl;
			return 1;
		}
		hashMap.insert({ input[i], i });
	}
	cout << "Not found" << endl;
	return 0;
}
int approach1_bruteforce(vector<int>& input) //TC:O(N2), SC:O(1)
{
	for (int i = 0; i < input.size(); i++)
	{
		for (int j = i + 1; j < input.size(); j++)
		{
			if (input[i] + input[j] == 25)
			{
				cout << "found pair:" << i << " " << j << endl;
				return 1;
			}
		}
	}
	cout << "Not found;" << endl;
	return 0;
}