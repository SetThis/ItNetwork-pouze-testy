#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double a;
	double b;
	double c;


	cout << "Zadejte postupne koeficienty a,b,c kvadraticke rovnice ax^2+bx+c=0:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	double d = (b * b) - 4 * a * c;

	double x_1 = (-b + sqrt(d)) / (2 * a);
	double x_2 = (-b - sqrt(d)) / (2 * a);

	if ((a == 0) || (b == 0) || (c == 0))
	{
		cout << "Neni kvadraticka rovnice" << endl;
		return 0;
	}
	else if (d < 0)
	{
		cout << "Neexistuje reseni v oblasti realnych cisel" << endl;
			return 0;
	}
	else if (d == 0)
	{
		cout << "Rovnice ma jeden koren x = " << -b / (2 * a) << endl;
		return 0;
	}
	else if (d > 0)
	{
		cout << "Rovnice ma 2 realne koreny x1 = " << x_1 << " , x2 " << x_2 << endl;
	}
	

	cin.get(); cin.get();
	return 0;
}
