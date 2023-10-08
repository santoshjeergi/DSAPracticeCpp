//Given n arry elem, check if there exists the pair(a[i] - a[j] = k && i != j)
#include "Common.h"
#include<unordered_map>



int carryForwardQ2::main_checkIfExistsQ2()
{

	vector<int> input{ 1, 4, 5, 7, 10, 12, 15, 19, 25, 29};
	int B = 211;
	//return approach1_bruteforce(input); same as a[i] + a[j] = k
	//return approach2(input, B);same as a[i] + a[j] = k
	return TwopointerApproachQ2(input, B);

}

int carryForwardQ2::TwopointerApproachQ2(vector<int>& input, int B) {

	int p1 = 0;
	int p2 = 1;

	while (p2 < input.size())
	{
		int diff = (input[p1] - input[p2]);
		int absDiff = diff < 0 ? -1 * diff : diff;

		//if (input[p1] - input[p2] == B)
		if(absDiff == B)
		{
			cout << "Found  pair: Indexes:" << p1 << " " << p2 << " values:" << input[p1] << " + " << input[p2] << endl;			
			return 0;
		}
		
		//if (input[p1] - input[p2] > B)
		if(absDiff > B)
		{
			p1++;
			if (p1 == p2)
			{
				p2++;
			}
		}
		else {
			p2++;
		}

	}
	cout << "Not found" << endl;
	return 1;
}
