#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	int lotto[6];
	cout << "           LOTTO                             " << endl;
	cout << "wybierz 6 liczb od 1 do 49" << endl;
	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "wybierz numer" << i + 1 << endl;
		cin >> lotto[i];
	}
	srand(time(NULL));
	int liczby[6];
	bool again;
	for (int i = 0; i < 6; i++)
	{
		again = true;
			while(again)
			{
				again = false;
				liczby[i] = rand() % 49 + 1;
				for(int j = 0; j < i; j++)
					if (liczby[i] == lotto[j])
					{
						again = true;
						break;
					}




			}




	}
	cout << "wylosowane liczby:" << endl << endl;
	for (int i = 0; i < 6; i++)
		cout << lotto[i] << " ";
	int licznik = 0;
	for (int i = 0; i < 6; i++)
	for (int j = 0; j < 6; j++)
		if (lotto[i] == liczby[j])
		{
			licznik++;
			break;
		}
	cout << "\n\nWytypowales dobrze " << licznik << " liczb\n";
	cout << endl;
	system("PAUSE");
	return 0;
}