#include "BinSearch.h"


int BinSearch::set(int* arr, int len) {
	inarray.assign(arr, arr + len);
	alen = inarray.size();
	return 0;

}
bool BinSearch::doeselemExists(int k) {
	int l = 0;
	int h = alen - 1;
	//int e = h;
	bool found = false;
	while (l <= h)
	{
		int m = (l + h) / 2;
		if (inarray[m] == k)
		{
			found =  true;
			break;
		} else if (inarray[m] > k) {
			l = m + 1;
		}
		else {
			h = m - 1;
		}
	}
	cout <<"element found:" << found<<endl;
	return found;
}
int BinSearch::findfloor(int k) {

	int l = 0;
	int h = alen - 1;
	int floorVal = -1;

	while (h >= l )
	{
		int m = (l + h) / 2;
		if (inarray[m] == k)
		{
			floorVal = inarray[m];
			break;
		}
		else if (inarray[m] > k)
		{
			h = m - 1;
		}
		else {
			floorVal = inarray[m];
			l = m + 1;
		}
	}

	cout << __FUNCTION__ << " " << floorVal << endl;
	return floorVal;

}
int BinSearch::findfirstOccurance(int x) {
	int l = 0;
	int h = alen - 1;
	int firstOccIdx = -1;

	while (h >= l)
	{
		int m = (l + h) / 2;
		if (inarray[m] == x)
		{
			firstOccIdx = m;
			h = m - 1;
			
		}
		else if (inarray[m] > x)
		{
			h = m - 1;
		}
		else {
			
			l = m + 1;
		}
	}

	cout << __FUNCTION__ << " " << firstOccIdx << endl;
	return firstOccIdx;

}
int BinSearch::lastOccurance(int x) {
	int l = 0;
	int h = alen - 1;
	int LASTOccIdx = -1;

	while (h >= l)
	{
		int m = (l + h) / 2;
		if (inarray[m] == x)
		{
			LASTOccIdx = m;
			l = m + 1;

		}
		else if (inarray[m] > x)
		{
			h = m - 1;
		}
		else {

			l = m + 1;
		}
	}

	cout << __FUNCTION__ << " " << LASTOccIdx << endl;
	return LASTOccIdx;
}
int BinSearch::findFreq(int x) {
	int freqCount =  lastOccurance(x) - findfirstOccurance(x) + 1;
	cout << __FUNCTION__ << " " << freqCount << endl;
	return freqCount;
}

int BinSearch::findMaxima()
{
	int ans = findmaxima();
	cout << __FUNCTION__ << " " << ans << endl;
	return ans;
}
int BinSearch::findmaxima() {


	int idx = -1;
	int l = 0;
	int h = alen;
	if (alen == 1)
	{
		cout << __FUNCTION__ << __LINE__<<" "<< inarray[0] << endl;
		return inarray[0];
	}
	if (inarray[0] > inarray[1])
	{
		cout << __FUNCTION__ << __LINE__ << " " << inarray[0] << endl;
		return inarray[0];
	} 
	if (inarray[h - 1] > inarray[h - 2])
	{
		cout << __FUNCTION__ << __LINE__ << " " << inarray[h - 1] << endl;
		return inarray[h - 1];
	}

	l = 1;
	h = alen -2;

	while (l <= h)
	{
		int m = (l + h) / 2;
		if ((inarray[m] > inarray[m + 1]) && (inarray[m] > inarray[m - 1]))
		{
			idx = inarray[m];
			break;
		}
		else if (inarray[m] < inarray[m + 1])
		{
			l = m + 1; 
		}
		else //if (inarray[m] > inarray[m + 1])
		{
			h = m - 1;
		}

	}

	cout << __FUNCTION__ << " " << idx << endl;
	return idx;
}

int BinSearch::findUniqueElem() {

	int l = 0;
	int h = alen - 1;
	int idx = -1;

	if (alen == 1)
	{
		cout << __FUNCTION__ << " " << inarray[0] << endl;
		return inarray[0];
	}
	if (inarray[0] != inarray[1])
	{
		cout << __FUNCTION__ << " " << inarray[0] << endl;
		return inarray[0];
	}
	if (inarray[alen-1] != inarray[alen -2])
	{
		cout << __FUNCTION__ << " " << inarray[alen-1] << endl;
		return inarray[alen - 1];
	}

	while (l <= h)
	{
		int m = (l + h) / 2;

		if ((inarray[m] != inarray[m - 1]) && (inarray[m] != inarray[m + 1]))
		{
			cout << __FUNCTION__ << " " << inarray[m] << endl;
			idx = m;			
			return inarray[m];
		} 
		if (inarray[m] == inarray[m - 1])
		{
			m = m - 1; //point to first occurance
		}

		if (m % 2 == 0) {
			l = m + 2; //go right
		}
		else {
			h = m - 1; //go left
		}
	}
	cout << __FUNCTION__ << " " << idx << endl;
	return idx;
	


}