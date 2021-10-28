#include<iostream>
#include<ctime>
#include<string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int size, a;
	cout << "¬ведите количестов элементов массива\n";
	cin >> size;
	cout << "\n¬ведите число\n\n";
	cin >> a;
	cout << endl;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 - rand() % 10;
		cout << arr[i] << endl;
	}
	for (int j = 0; j < size; j++)
	{
		if  (arr[j]==a)
			{
			cout << "\n»ндекс элемента массива, содержащего ваше число: " << j<<endl;
			break;
			}
		else if (j == size - 1)
		{
			cout << "\n¬ашего числа нет в массиве :(\n";
		}
	}

	delete[] arr;
	
}