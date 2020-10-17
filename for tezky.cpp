#include <iostream>
#include <string>

using namespace std;

int main()
{
	int min1;
	int max1;
	int min2;
	int max2;
	

	cout<< "Zadejte levou mez 1. intervalu:" << endl;
	cin >> min1;
	cout << "Zadejte pravou mez 1. intervalu:" << endl;
	cin >> max1;
	cout << "Zadejte levou mez 2. intervalu:" << endl;
	cin >> min2;
	cout << "Zadejte pravou mez 2. intervalu:" << endl;
	cin >> max2;

	cout << "Dvojice cisel, jejichz soucet lezi v nekterem z intervalu:" << endl;
	cout << "(1. cislo je z prvniho intervalu a 2. z druheho intervalu)" << endl;

	for (int i = min1; i <= max1; i++)
	{
		for (int j = min2; j <= max2; j++)
		{
			if ((i + j <= max2) && (i + j >= min2) || (i + j <= max1) && (i + j >= min1))
				break;

			cout << "[" << i << ":" << j << "]";
		}
	}

	cin.get(); cin.get();
	return 0;
}