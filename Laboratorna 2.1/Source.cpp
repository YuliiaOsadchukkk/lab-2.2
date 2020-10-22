
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double n; // вхідний параметр
	double m; // вхідний параметр
	//double z1; // результат обчислення першого виразу
	double z2; // результат обчислення другого виразу

	//ввід даних

	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	// обчислення
	//z1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) / (sqrt(m * m * m * n) + n * m + m * m - m);
	z2 = (sqrt(m) - sqrt(n)) / m;

	// виведення результатів
	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;

}
