
#include <iostream>
using namespace std;
int main()
{
	int A; char tmp[33];
	cout << "Enter your number ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	int length = strlen(tmp);
	if (tmp[length - 1] == '0' && tmp[length - 2] == '0' && tmp[length - 3] == '0' && tmp[length - 4] == '0') {
		cout << "Number is a multiple of 16";
	}
	else {
		cout << "Number is NOT a multiple of 16";
	}

}

