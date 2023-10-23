#include<iostream>
#include "Common.h"
#include "CarryFwd_CountagPair.h"
#include "Leader_CarryFwd.h"
#include "PrefixQueriesClass.h"
#include "HashingArray.h"
#include "ContributionTech.h"
#include "BinSearch.h"

using namespace std;

int main()
{
	cout << __FUNCTION__ << endl;
	//main_graycode();
	//main_toh();
	//main_checkIfExists();

	carryForwardQ2 question;
	//question.main_checkIfExistsQ2();
	
	CarryFwd_CountagPair countpair;
	//countpair.countPairs_bruteForce();
	//countpair.countPairs();
	
	Leader_CarryFwd leader;
	//leader.calculateTotalLeader();

	//PrefixQueriesClass pf;
	//pf.calculatePF();
	
	PrefixQueriesClass subarray;
	//subarray.allsubarray();
	//subarray.sumOfallsubarray();
	//subarray.sumOfsubarraywithLen(6);

	HashingArray hashsetmap;
	//hashsetmap.isElementsRepeating();
	
	int a[] = {4, -3, -1, 2, -2}; // {2, 3, 3, -6, 3, 3, -6, 6, -3, 4, -4};//{ 2,4,-1,-2,1 };// { 1, 2, 2, 1, -3, 4, 3, 1, -2, -3};
	hashsetmap.set(a, sizeof(a)/sizeof(a[0]));
	//hashsetmap.isSubArraywithSumExists();
	//hashsetmap.longestSubarray();

	int a1[] = { 3,4,-2, 5,3, -2, 8, 2, 1, 4 }; //{ 2,8, -1, 4 };// { 3, -2, 4, -1, 2, 6 };
	ContributionTech ctech;
	ctech.set(a1, sizeof(a1) / sizeof(a1[0]));
	//ctech.sumofAllsubarray();
	//ctech.maxSubarrayoflenk(3);

	BinSearch bs;
	int a2[] = {0, 0,2,2,5, 3,3};//{9,8,7,3,6,4,1,5,2};// {2, 11, 3, 6, 17, 15, 10, 12, 14, 28, 24, 21, 16, 8, 18, 9};// { 3, 6,9,12,14,20, 23,25,27};
	bs.set(a2, sizeof(a2) / sizeof(a2[0]));
	//bs.doeselemExists(141);
	//bs.findfloor(2);
	//bs.findfirstOccurance(20);
	//bs.lastOccurance(20);
	//bs.findFreq(3);
	//bs.findMaxima();
	bs.findUniqueElem();

	return 0;
}