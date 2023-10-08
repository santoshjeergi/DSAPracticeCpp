#include<iostream>
#include "Common.h"
#include "CarryFwd_CountagPair.h"
#include "Leader_CarryFwd.h"

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
	leader.calculateTotalLeader();
	return 0;
}