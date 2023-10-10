#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main() {
	double x, y;
	double R1; cout << "R1= ";  cin >> R1;
	double R2; cout << "R2= ";  cin >> R2;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		cout << "X= ";  cin >> x;
		cout << "Y= ";  cin >> y;
		if ((pow(x, 2) + pow(y, 2) <= pow(R1, 2) && x <= 0 && y >= 0) ||
			(pow(x, 2) + pow(y, 2) <= pow(R1, 2) && pow(x, 2) + pow(y, 2) <= pow(R2, 2) && y <= 0 && x >= 0))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	cout << "------------------------------------" << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = (R1 + R1) * rand() / RAND_MAX - R1;
		y = (R1 + R1) * rand() / RAND_MAX - R1;
		if ((pow(x, 2) + pow(y, 2) <= pow(R1, 2) && x <= 0 && y >= 0) ||
			(pow(x, 2) + pow(y, 2) <= pow(R1, 2) && pow(x, 2) + pow(y, 2) <= pow(R2, 2) && y <= 0 && x >= 0))
			cout << setw(8) << setprecision(2) << x << " "
			<< setw(8) << setprecision(2) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(2) << x << " "
			<< setw(8) << setprecision(2) << y << " " << "no" << endl;
	}
	cout << "------------------------------------" << endl;
	return 0;
}