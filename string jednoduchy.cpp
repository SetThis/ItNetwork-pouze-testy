#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

	char a;
	int i;
	

	for (i = 0; i <= 127; i++)
	{
		a = (char)i;
		cout << i << ":" << a << endl;
	}
	
	cin.get();
	return 0;
}