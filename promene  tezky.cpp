#include <iostream>
#include <string>

using namespace std;

int main()
{
	float r;
	const float pi = 3.1415;
	
	cout << "Zadejte polomer: ";
	cin >> r;
	cout << endl;

	float obsah = pi * r * r;
	float obvod = 2 * pi * r;

	cout << "Obvod kruhu je: " << obvod << " a jeho obsah je " << obsah << " cm2" << endl;

	cin.get(); cin.get();
	return 0;
}