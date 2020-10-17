#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	const int max = 10;
	int pole[max] = { 1, 9, 8, 6, 4, 7, 2, 3, 5, 0 };
	
	
	
	cout << "Pole pred setridenim: ";

		for (int i = 0; i < max; i++)
		{
			cout << pole[i] << " ";
		}
		cout << endl;

	sort(pole, pole + max);
	
	cout << "Pole po setrideni: ";

		for (int i = 0; i < max; i++)
		{
			cout << pole[i] << " ";
		}

	cin.get();
	return 0;
}