#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	const int max = 10;

	int pole[max];

	for (int i = 0; i < max; i++)
		pole[i] = i + 1;

	reverse(pole, pole + max);

	for (int i = 0; i < max; i++)


	cout << pole[i] << " ";

	cin.get(); cin.get();
	return 0;
}