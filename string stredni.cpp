#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string palindrom;
	
	cout << "Zadejte palindrom: ";
	cin >> palindrom;
	cout << endl;

	for (int i = 0; i <= palindrom.length() / 2; i++)					//musi byt deleno 2, protoze by cyklus jel mimo kontrolu. 
	{																	//napr rotor  = 0=r, 1=o, 2=t, 3=o, 4=r
		if (palindrom[i] != palindrom[palindrom.length() - 1 - i])		//cyklus je palindrom[i] jede 0,1,2...  palindrom[palindrom.length()
		{																// jede delka slova je 5. pole je jen do 4, protoze zacina nulou, proto
			cout << "Neni to palindrom";								//-1. nasledne jede cyklus for. kdyz cyklus dojede na pozici 2, hodi chybu
			cin.get(); cin.get();										
			return 1;
		}
	}
	cout << "Je to palindrom";

	cin.get(); cin.get();
	return 0;
}