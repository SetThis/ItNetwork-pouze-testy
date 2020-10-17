#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string slovo;
	string heslo;

	cout << "Zadejte text k zasifrovani: ";
	cin >> slovo;

	cout << "Zadejte heslo: ";
	cin >> heslo;

	string sifra = slovo;

	for (int i = 0; i < slovo.length(); i++)
		sifra[i] = slovo[i] + heslo[i % heslo.length()] - 'a' + i;		// slovo[i] a heslo[i] = dame tam jen a = 97
																		//takze to pocita:
																		//slovo[97] + heslo[97 / 1] - 97 + 0 (posledni je pocet cyklu]
																		//= slovo[97 = a]
	
	 for (int i = 0; i < sifra.length(); i++)							
		if (sifra[i] > 'z' || sifra[i] < 'a')							
			sifra[i] = sifra[i] - 26;

	cout << sifra << endl;

	cin.get(); cin.get();
	return 0;
}