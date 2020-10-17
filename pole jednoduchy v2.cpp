#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	const int max = 10;

	int pole[max];

	for (int i = 0; i < 10; i++)
	
		pole[i] = 10 - i;
	

		for (int i = 0; i < 10; i++)
		
			cout << pole[i] << " ";
	

	cin.get(); cin.get();
	return 0;
}