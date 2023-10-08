#include "Leader_CarryFwd.h"

int Leader_CarryFwd::calculateTotalLeader()
{
	int max = inarray[0];
	int totalLeader = 1;
	for (int i = 1; i < inarray.size(); i++)
	{
		if (inarray[i] > max)
		{
			max = inarray[i];
			totalLeader++;
		}
	}
	cout << "Total leaders:" << totalLeader << endl;
	return totalLeader;
}