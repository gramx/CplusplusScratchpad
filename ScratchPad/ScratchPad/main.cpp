#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
	cout << "Type in values to see in 128 bit format " << endl << endl;
	char quitloop = 'n';
	while (quitloop != 'Y') {
		float fValue;
		cin >> fValue;

		cout << std::bitset<128>(fValue) << endl << endl;

		//cout << "To stop testing type Y: ";
		//cin >> quitloop;
	}

	return 0;
}