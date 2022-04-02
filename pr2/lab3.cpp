#include "pch.h"
#include <iostream>
#include <iomanip>
#include "math.h"
#include <windows.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double x = 1000000000000;
	double y = 0.0000000000001;
	double c = x + y;
	cout << "Исчезновение операнда " << endl << "Результат равен " << setprecision(30) << c << endl;
	x = 0;
	int i;
	for (i = 0; i <= 1000; i++)
	{
		x += 0.1;

	}
	double m = x;
	cout << "Умножение ошибки" << endl << "Результат равен " << setprecision(20) << m << endl;
	float x1 = 18710247182.11092000;
	float x2 = 18710247182.0;
	float l = x1 - x2; 
	cout << "Потеря значимости " << endl << "Результат равен " << std::setprecision(20) << l << endl;
	double z1 = 5821.123864;
	double z2 = 5821.0; 
	double z = z1 - z2; 
	cout << "Потеря значимости " << endl << "Результат равен " << std::setprecision(20) << z << endl;
	//neyvnoe
	float q = 111 / 33;
	cout << "\n" << q << "\n";
	q = 111.0 / 33.0;
	cout << "\n" << q << "\n";
	//сначала вычисляется целое значение, после оно конвертируется в тип float
	//yvnoe
	int p = (int )111.0;
	p = static_cast<int>(p / 33);
	cout << "\n" << p << "\n";
	system("pause");
	return 0;

}

