#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	double Pi = 3.14159265358979323846, a;

	cout << "Введите a: ";
	cin >> a;

	double y = sin(Pi / 2 + 3 * a) / (1 - sin(3 * a - Pi));

	cout << endl << "Результат sin(П / 2 + 3 * а) / (1 - sin(3 * а - П)) = " << y;
}