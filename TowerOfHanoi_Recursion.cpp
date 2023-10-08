#include "Common.h"


void towerofHanoi(int noOfDisks, string src, string help, string dest)
{
	if (noOfDisks == 0)
	{
		return;
	}

	towerofHanoi(noOfDisks - 1, src, dest, help);

	cout << "Moving:" << src << " to " << dest << endl;

	towerofHanoi(noOfDisks - 1, help, src, dest);

}





void main_toh()
{
	int n = 0;
	cout << "Enter the NoOfDisks:" << endl;
	cin >> n;
	towerofHanoi(n, "A", "B", "C");
}