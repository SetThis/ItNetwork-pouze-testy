#include <iostream>
#include <string>

using namespace std;

int main()
{
	char odpoved_1;
	char odpoved_2;
	char odpoved_3;
	
	cout << "Vitej v mem kvizu..." << endl;
	cout << "--------------------------------------" << endl;

	cout << "1. Kdo zalozil Microsoft?" << endl;
	
		cout << "a) Steve Jobs" << endl;
		cout << "b) Tim Cook" << endl;
		cout << "c) Bill Gates" << endl;
		cout << "d) Mark Zuckerberg" << endl;
		
		cin >> odpoved_1;

		if ((odpoved_1 == 'c') || (odpoved_1 == 'C'))
		{
			cout << "Spravne" << endl;
		}
		else
		
			cout << "Spatne" << endl;

		
		

		cout << "2. Kdo vlastni MySQL?" << endl;  
		cout << "a) Microsoft" << endl;
		cout << "b) Apple" << endl;
		cout << "c) Google" << endl;
		cout << "d) Oracle" << endl;
		cin >> odpoved_2;

		if ((odpoved_2 == 'd') || (odpoved_2 == 'D'))
		{
			cout << "Spravne" << endl;
		}
		else
			cout << "Spatne" << endl;
		

		cout << "3. Jaky je code name pro Android 5?" << endl;
		cout << "a) Kit Kat" << endl;
		cout << "b) Lollipop" << endl;
		cout << "c) Cupcake" << endl;
		cout << "d) Jelly bean" << endl;
		cin >> odpoved_3;

		if ((odpoved_3 == 'b') || (odpoved_3 == 'B'))
		{
			cout << "Spravne" << endl;
		}
		else 
			cout << "Spatne" << endl;
	

	cin.get(); cin.get();
	return 0;

}