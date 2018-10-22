#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

const int n = 24;


int main()
{
	float A[n], temp;
	int i, j, ot = 0, imin = 0;

	srand(time(0));

	for (i = 0; i < n; i++)
	{
		A[i] = rand() % 100 - 25;
		if (A[i] < 0 && A[ot] >= 0) ot = i;
		cout << A[i] << endl;
	}	
	int k, nmin;
	for (i = 0; i < ot - 1; i++)
	{
		nmin = i;
		for (j = i + 1; j < ot; j++)
		{
			if (A[j] > A[nmin])  nmin = j;
		}
		temp = A[i];
		A[i] = A[nmin];
		A[nmin] = temp;
		
	}
	
	cout << endl;
	
	for (i = 0; i < n; i++)
	{
		cout << A[i] << endl;
	}
}
