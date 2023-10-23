#include "PrefixQueriesClass.h"

int PrefixQueriesClass::calculatePF()
{
	vector<int> prefixarray;
	int sum = inarray[0];
	prefixarray.push_back(sum);

	for (int i = 1; i < inarray.size(); i++)
	{
		sum += inarray[i];
		prefixarray.push_back(sum);
	}

	for (vector<int> q : rageQueries) {
		int p1 = q[0];
		int p2 = q[1];
		cout << "Query:{" << p1 << ", " << p2 << "} =";

		int prefixSum = 0;
		if (p1 == 0)
		{
			prefixSum = prefixarray[p2];
		}
		else
		{
			prefixSum = prefixarray[p2] - prefixarray[p1 - 1];
		}
		cout << prefixSum << endl;

	}

	return 0;
}


int PrefixQueriesClass::allsubarray()
{

	

	int i = 0;
	for (int s = 0; s < inarray.size(); s++)
	{
		for (int e = s; e < inarray.size(); e++)
		{
			//printarray(s, e);	
			cout << i++ << " : ";
			for (int i = s; i <= e; i++)
			{
				cout << inarray[i] <<" ";
			}
			cout << endl;
		}
	}

	return 0;
}

int PrefixQueriesClass::sumOfallsubarray()
{
	cout << __FUNCTION__ << endl;
	vector<int> prefixarray;
	int sum = inarray[0];
	prefixarray.push_back(sum);

	for (int i = 1; i < inarray.size(); i++)
	{
		sum += inarray[i];
		prefixarray.push_back(sum);
	}
	int maxSubarraysum = inarray[0];
	for (int s = 0; s < inarray.size(); s++)
	{
		int sum = 0;
		for (int e = s; e < inarray.size(); e++)
		{
			//sum += inarray[e];
			//cout << " " << sum;

			int psum = (s != 0) ? (prefixarray[e] - prefixarray[s - 1]) : prefixarray[e];
			cout << " " << psum;
			maxSubarraysum = max(maxSubarraysum, psum);
	/*		for (int i = s; i <= e; i++)
			{
				cout << inarray[i] << " ";
			}
			cout << endl;*/
		}
	}
	cout << endl<<" maxSubarraysum: "<< maxSubarraysum << endl;

	return 0;
}

int PrefixQueriesClass::sumOfsubarraywithLen(int k)
{
	cout << __FUNCTION__ << " lenk:" << k << endl;

	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum = sum + inarray[i];
	}

	int ans = sum;

	int s = 1;
	int e = k;

	while (e < inarray.size())
	{
		sum = sum - inarray[s - 1] + inarray[e];
		ans = max(sum, ans);
		s++;
		e++;
	}
	cout << "maxSubarraySum of len:" << k << " is " << ans << endl;
	return ans;
}