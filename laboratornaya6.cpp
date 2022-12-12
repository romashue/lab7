#include <iostream>
#include <cmath>
#include <lab6.hpp>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "rus");

	double A[100][100];
	cout << "Êîëè÷åñòâî ñòðîê: ";
	int m;
	cin >> m;
	cout << "Êîëè÷åñòâî ñòîëáöîâ: ";
	int n;
	cin >> n;

	cout << "Ìàòðèöà:" << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
	}

	int min = A[0][0];

	//âû÷èñëÿåì çíà÷åíèå ìèíèìàëüíîãî ýëåìåíòà â ìàòðèöå
	for (int ii = 0; ii < m; ii++)
	{
		for (int jj = 0; jj < n; jj++)
		{
			if (min > (A[ii][jj]))
			{
				min = A[ii][jj];
			}
		}
	}

	int kolvmin = 0;//êîëè÷åñòâî ìèíèìàëüíûõ ýëåìåíòîâ â ìàòðèöå
	int kolvprime = 0; //êîëè÷åñòâî ýëìåíòîâ, àáñîëþòíàÿ âåëè÷èíà êîòîðûõ ïðîñòîå ÷èñëî

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (A[i][j] == min)
			{
				kolvmin++;
			}
			if (absIsPrime(A[i][j]))
			{
				kolvprime++;
			}
		}
	}

	//èçìåíÿåì ìàòðèöó, ïðè âûïîëíåíèè íåîáõîäèìûõ óñëîâèé
	if ((kolvmin > 1) & (kolvprime > 1)) 
	{
		for (int i = 0; i < m - 1; i++)
		{
			int pr1 = 1;
			int pr2 = 1;
			for (int j = 0; j < n; j++)
			{
				pr1 = pr1 * A[i][j];
				pr2 = pr2 * A[i + 1][j];
				if (pr1 < pr2)
				{
					swap(A[i][j], A[i + 1][j]);
				}
			}
		}
	}


	//ïå÷àòàåì ìàòðèöó
	for (int k = 0; k < m; k++)
	{
		for (int l = 0; l < n; l++)
		{
			cout << A[k][l] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
