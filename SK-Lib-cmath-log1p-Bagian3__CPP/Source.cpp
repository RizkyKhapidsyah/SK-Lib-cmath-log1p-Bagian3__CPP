// CPP program to illustrate log1p()
#include <cmath>
#include <iostream>
#include <conio.h>

/*	Source by GeeksForGees
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	double answer;
	int x = 143;

	// returns logarithm of 144 base e
	answer = log1p(x);
	cout << "log1p(" << x << ") = " << answer << endl;

	_getch();
	return 0;
}
