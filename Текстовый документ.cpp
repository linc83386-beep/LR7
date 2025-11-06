#include <iostream>
#include <math.h>
#include <iomanip>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x;
	cout << "Введіть x=";
	cin >> x;

	int sum = 0;
	for (int n = 1; n <= 5; n++) {
		sum += pow(n, 3);
	}
	double y = (cos(sum) + log(x)) / pow(tan(x), 2);
	cout << setprecision(4);
	cout << "Y=" << y << endl;

	return 0;
