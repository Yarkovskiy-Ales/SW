#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, k;
	cout << "¬ведите n: " << endl;
	cin >> n;
	cout << "¬ведите k: " << endl;
	cin >> k;
	k = to_string(n).length() - k;
	n = n / pow(10, k);
	cout << n << endl;
	return 0;
}