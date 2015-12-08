#include <iostream>
#include <string>
#include <bitset>
#include <climits>

using namespace std;

int main()
{

	union ufloat {
		float f;
		unsigned u;
	};
	union udouble {
		double d;
		unsigned long u;
	};

	std::cout << std::fixed;
	cout.precision(50);
	int minInt = std::numeric_limits<int>::min();
	int maxInt = std::numeric_limits<int>::max();
	long minLong = std::numeric_limits<long>::min();
	long maxLong = std::numeric_limits<long>::max();
	long long minLongLong = std::numeric_limits<long long>::min();
	long long maxLongLong = std::numeric_limits<long long>::max();
	ufloat minFloat;
	minFloat.f = std::numeric_limits<float>::min();
	ufloat maxFloat;
	maxFloat.f = std::numeric_limits<float>::max();
	//ufloat uf1;
	//uf1.f = 1.0f;
	//ufloat uf2;
	//uf2.f = 0.01f;
	//udouble ud1;
	//ud1.d = 1.0f;
	//udouble ud2;
	//ud2.d = 0.01f;
	//float aShiftedFloat = 1;
	//float bShiftedFloat = 0.01;
	udouble minDouble;
	minDouble.d = std::numeric_limits<double>::min();
	udouble maxDouble;
	maxDouble.d = std::numeric_limits<double>::max();
	long double minLongDouble = std::numeric_limits<long double>::min();
	long double maxLongDouble = std::numeric_limits<long double>::max();
	cout << "Int(" << sizeof(maxInt) << ")" << endl;
	cout << " IntMin: " << minInt << endl;
	cout << " IntMax: " << maxInt << endl;
	cout << " IntMaxBinary: " << std::bitset<65>(maxInt) << endl << endl;
	cout << "Long(" << sizeof(maxLong) << ")" << endl;
	cout << " LongMin: " << minLong << endl;
	cout << " LongMax: " << maxLong << endl;
	cout << " LongMaxBinary: " << std::bitset<65>(maxLong) << endl << endl;
	cout << "LongLong(" << sizeof(maxLongLong) << ")" << endl;
	cout << " LongLongMin: " << minLongLong << endl;
	cout << " LongLongMax: " << maxLongLong << endl;
	cout << " LongLongMaxBinary: " << std::bitset<65>(maxLongLong) << endl << endl;
	cout << "Float(" << sizeof(maxFloat) << ")" << endl;
	cout << " FloatMin: " << minFloat.f << endl;
	cout << " FloatMax: " << maxFloat.f << endl;
	cout << " FloatMaxBinary: " << std::bitset<65>(maxFloat.u) << endl << endl;

	//cout << " A ShiftedFloat: " << aShiftedFloat << endl;
	//cout << " A ShiftedFloatFloatBinary: " << std::bitset<128>(aShiftedFloat) << endl << endl;
	//cout << " B ShiftedFloat: " << bShiftedFloat << endl;
	//cout << " B ShiftedFloatFloatBinary: " << std::bitset<128>(bShiftedFloat) << endl << endl;

	//cout << " uf1(" << uf1.f << "): " << std::bitset<128>(uf1.u) << endl;
	//cout << " uf2(" << uf2.f << "): " << std::bitset<128>(uf2.u) << endl;
	//cout << " ud1(" << ud1.d << "): " << std::bitset<128>(ud1.u) << endl;
	//cout << " ud2(" << ud2.d << "): " << std::bitset<128>(ud2.u) << endl << endl;

	cout << "Double(" << sizeof(maxDouble.d) << ")" << endl;
	cout << " DoubleMin: " << minDouble.d << endl;
	cout << " DoubleMax: " << maxDouble.d << endl;
	cout << " DoubleMaxBinary: " << std::bitset<65>(maxDouble.u) << endl << endl;
	cout << "LongDouble(" << sizeof(maxLongDouble) << ")" << endl;
	cout << " LongDoubleMin: " << minLongDouble << endl;
	cout << " LongDoubleMax: " << maxLongDouble << endl;
	cout << " LongDoubleMaxBinary: " << std::bitset<65>(maxLongDouble) << endl << endl;
	cout << endl << "Type in values to see in 128 bit format " << endl << endl;
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