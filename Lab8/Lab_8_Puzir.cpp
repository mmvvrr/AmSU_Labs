#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

const int n = 24;

int main()
{
	float A[n], temp;
	int i, j, ot = 0;
	
	srand (time ( 0 ) ); 

	for (i = 0; i < n; i++)
	{
		A[i] = rand() % 100 - 25;
		if (A[i] < 0 && A[ot] >= 0) ot = i;
		cout << "A[" << i+1 << "] " <<A[i] << endl;
	}

	for (i = 0; i < ot - 1; i++)
	{
		for (j = 0; j < ot - 1; j++)
		{
			if (A[j] < A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
	cout << endl;
	for (i = 0; i < n; i++)
	{
		cout << "A[" << i+1 << "] " <<A[i] << endl;
	}

	system("Pause");
    return 0;
}
