#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 10;
	
	for (i = 10; i >= 1; i--)
	{
		if ((i <= 10) && (i >= 5))
		{
			cout << i << " zelenych lahvi stoji na stole a jedna lahev spadne" << endl;
			continue;
		}
		if ((i <= 4) && (i >= 2))
		{
			cout << i << " zelene lave stoji na stole a jedna lahev spadne" << endl;
			continue;
		}
		if (i == 1)
		{
			cout << i << " zelena lahev spadne na stole a jedna lahev spadne" << endl;
			continue;
		}
	}
				
	cin.get(); cin.get();
	return 0;
}