
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double n; // ������� ��������
	double m; // ������� ��������
	//double z1; // ��������� ���������� ������� ������
	double z2; // ��������� ���������� ������� ������

	//��� �����

	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	// ����������
	//z1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) / (sqrt(m * m * m * n) + n * m + m * m - m);
	z2 = (sqrt(m) - sqrt(n)) / m;

	// ��������� ����������
	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;

}
