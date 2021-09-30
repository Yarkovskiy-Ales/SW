#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double x, y, a, b, c;
	cout << "¬ведите длину и ширину отверсти€ :" << endl;
	cin >> x >> y;
	cout << "¬ведите длину, ширину и высоту параллелепипеда: " << endl;
	cin >> a >> b >> c;
	if (a < x && b < y || a < x && c < y || b < x && c < y || a < y && b < x || a < y && c < x || b < y && c < x)
	cout << "ѕараллелепипед проходит в отверстие" << endl;
	else cout << "ѕараллелепипед никак не проходит в отверстие" << endl;
	return 0;
}