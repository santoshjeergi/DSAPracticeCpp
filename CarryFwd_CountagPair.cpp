#include "CarryFwd_CountagPair.h"

int CarryFwd_CountagPair::countPairs_bruteForce()//SC O(1), TC O(N2)
{
	int count = 0;
	for (int i = 0; i < inarray.size(); i++) {

		for (int j = i; j < inarray.size(); j++)
		{
			if (inarray[i] == 'a' && inarray[j] == 'g')
			{
				count++;
			}
		}
	}
	cout << "count pairs:" << count << endl;
	return count;
}

int CarryFwd_CountagPair::countPairs() //SC, TC O(1)
{
	int countpairs = 0;
	int countg = 0;
	for (int i = inarray.size() - 1; i >= 0;  i--) {
		if (inarray[i] == 'g') {
			countg++;
		}
		else if (inarray[i] == 'a') {
			countpairs += countg;
		}
	}
	cout << "count pairs:" << countpairs << endl;
	return countpairs;
}

