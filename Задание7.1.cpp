#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, d, m, y;
	cout << "Введите год: "; cin >> y;
	cout << "Введите месяц: "; cin >> m;
	cout << "Введите сегодняшний день: "; cin >> d;
	cout << "Введите число n: "; cin >> n;
	while (n > 0)
	{
		d = d - n;

		if (d < 1)
		{
			n = -d;
			m--;
			if (m < 1)
			{
				y--;
				m = 12;
			}
			switch (m)
			{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				d = 31;
				break;
			case 4: case 6: case 9: case 11:
				d = 30;
				break;
			case 2:
				if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
				{
					d = 29;
				}
				else
					d = 28;
				break;
			}
		}

		if (d > n)
		{
			d -= n;
			break;
		}

	}
	cout << d << ends << m << ends << y << endl;
	return 0;
}

