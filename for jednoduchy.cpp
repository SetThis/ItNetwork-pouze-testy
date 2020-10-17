#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ryba = "< * ))) - <" ;
	int pocet;

	cout << "Kolik si date ryb k veceri?" << endl;
	cin >> pocet;

	for (int i = 0; i < pocet; i++)
		cout << ryba << endl;

	cin.get(); cin.get();
	return 0;
}
