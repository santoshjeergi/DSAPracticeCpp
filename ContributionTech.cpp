#include "ContributionTech.h"
int ContributionTech::sumofAllsubarray()
{
	int tsum = 0;
	int n = inarray.size();
	for (int i = 0; i < n; i++)
	{
		tsum += ((i - 0 + 1) * (n - 1 - i + 1) * inarray[i]);
	}
	cout << "sumofAllsubarray: Tsum:" << tsum << endl;
	return tsum;
}
int ContributionTech::set(int array[], int len)
{
	inarray.assign(array, array + len);
	return 0;
}

int ContributionTech::maxSubarrayoflenk(int k)
{
	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum += inarray[i];
	}
	int ans = sum;

	int s = 1;
	int e = k;
	//for (int s = 1; s <= e; s++)
	while(e < inarray.size())
	{
		sum = sum + inarray[e] - inarray[s - 1];
		ans = max(sum, ans);
		e++;
		s++;
	}
	cout << __FUNCTION__<<" "<<ans << endl;
	return ans;
}