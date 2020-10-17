#include <iostream>
#include <string>

using namespace std;

int main()
{
	int cislo;
	

	cout << "Zadejte cislo: ";
	cin >> cislo;

	//cislo *= cislo;									//nebo cislo = cislo * cislo
	
	cout << "Druha mocnina je: " << cislo * cislo;

	cin.get(); cin.get();
	return 0;
}