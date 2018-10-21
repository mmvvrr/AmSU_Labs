#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	float C[14], a, b, S = 1, Sa = 1;
	int  t = 0;
	bool ch = false;

	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;

	for (int i = 0; i < 14; i++)
	{
		cout << "C[" << i + 1 << "]: "; cin >> C[i];
		if (C[i] > C[t]) 
		{
			t = i;
			S *= Sa;
			Sa = C[i-1];
		}
			else
			{
				if (C[i] > a && C[i] < b) {Sa *= C[i]; ch = true;}
			}		
	}
	
	if (ch == true)	cout << "Proizvedenie: " << S << endl;
		else cout << "Net elementov, kotoryye udovletvoryayut usloviyu" << endl;	
	cout << "Maksimal'nyy element massiva nakhoditsya na " << t + 1 << " meste i raven: " << C[t] << endl;
    return 0;
}

