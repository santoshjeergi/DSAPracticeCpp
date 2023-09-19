#include<iostream>
#include<vector>
using namespace std;

vector<int> graycode(int n)
{
	if (n == 1)
	{
		vector<int> ans;
		ans.push_back(0);
		ans.push_back(1);
		return ans;
	}

	vector<int> ans;
	vector<int> appendZero = graycode(n - 1);
	for (int i = 0; i < appendZero.size(); i++)
	{
		ans.push_back(appendZero[i]);
	}
	for (int i = appendZero.size()-1; i >= 0; i--)
	{
		ans.push_back(appendZero[i] + ( 1<<(n-1)));
	}
	return ans;
}

void main_graycode()
{
	cout << __FUNCTION__ << endl;
	int n = 0;
	cout << "Enter seq of bit len:" << endl;
	cin >> n;
	cout << "Sequence for len:" << n << endl;
	vector<int> ans = graycode(n);
	for (int x : ans)
	{
		cout << x << endl;
	}
	cout << endl;
}