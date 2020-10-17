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

	if ((vyber == 'a') || (vyber == 'A'))
		cout << "Jmeno: Homer Simpson" << endl << "Vek: 39" << endl << "Zamestnani: bezpecnostni technik ve springfieldske jaderne elektrarne" << endl;
	else if ((vyber == 'b') || (vyber == 'B'))
		cout << "Jmeno: Bart Simpson" << endl << "Vek: 10" << endl << "Zamestnani: student" << endl;
	else if ((vyber == 'c') || (vyber == 'C'))
		cout << "Marge Simpson" << endl << "Vìk: 34" << endl << "Zamestnani: v domacnosti" << endl;
	else if ((vyber == 'd') || (vyber == 'D'))
		cout << "Jmeno: Liza Simpson" << endl << "Vek: 8" << endl << "Zamestnani: student" << endl;
	else if ((vyber == 'e') || (vyber == 'E'))
		cout << "Jmeno: Maggie Simpson" << endl << "Vek: 1" << endl << "Zamestnani: zadny" << endl;
	


	return 0;
}