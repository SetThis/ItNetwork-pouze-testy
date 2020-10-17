#include <iostream>
#include <string>

using namespace std;

int main()
{

	char vyber;

	cout << "Vyber si nejakou postavu ze Simpsonovych" << endl;
	cout << "a) Homer" << endl;
	cout << "b) Bart" << endl;
	cout << "c) Marge" << endl;
	cout << "d) Liza" << endl;
	cout << "e) Maggie" << endl;
	cin >> vyber;

	switch(vyber)
	{
	case 'a':
		cout << "Jmeno: Homer Simpson" << endl << "Vek: 39" << endl << "Zamestnani: bezpecnostni technik ve springfieldske jaderne elektrarne" <<endl;
		break;
	case 'b':
		cout << "Jmeno: Bart Simpson" << endl << "Vek: 10" << endl << "Zamestnani: student" << endl;
		break;
	case 'c':
		cout << "Marge Simpson" << endl << "Vìk: 34" << endl << "Zamestnani: v domacnosti" << endl;
		break;
	case 'd':
		cout << "Jmeno: Liza Simpson" << endl << "Vek: 8" << endl << "Zamestnani: student" << endl;
		break;
	case 'e':
		cout << "Jmeno: Maggie Simpson" << endl << "Vek: 1" << endl << "Zamestnani: zadny" << endl;
		break;
	

	}
	

	return 0;
}