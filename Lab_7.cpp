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
			Sa = C[i];
		}
			else
			{
				if (C[i] > a && C[i] < b) {Sa *= C[i]; ch = true;}
			}
		
	}

//	for (int i = 0; i < t + 1; i++)
//		if (C[i] > a&&C[i] < b) {S *= C[i]; ch = true;}
	
	if (ch == true)	cout << "Произведение равно: " << S << endl;
		else cout << "Нет элементов, которые больше а, но меньше б" << endl;	
	cout << "Максимальный эллемент массива находится на " << t + 1 << " месте и равен: " << C[t] << endl;
    return 0;
}

/*
{
		cout << "C[" << i + 1 << "]: "; cin >> C[i];
	}

	for (int i = 0; i < 14; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if (C[j] < C[i]) { t = i; }
		}
	} 
*/ 
