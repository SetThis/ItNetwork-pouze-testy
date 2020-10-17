#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	const int max_pole = 10;
	int pole[max_pole];
	int cislo;
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Zadejte cislo: ";
		cin >> cislo;

		pole[i] = cislo;
	}
	int *max = max_element(pole, pole + max_pole);
	int *min = min_element(pole, pole + max_pole);
	
	for (int i = 0; i < 10; i++)
	{
		sum = sum + pole[i];
	}
	
	cout << *max << " " << *min << " " << sum / 10 << endl;

	cin.get();
	return 0;
}