#include<iostream>
#include<ctime>
#include<string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int size, n = 1;
	cout << "Введите количестов элементов массива\n";
	cin >> size;
	int* arr = new int[size];
	int* list = new int[size] {};
	for (int i = 0; i < size; i++)// заполнение и вывод массива
	{
		arr[i] = rand() % 10 - rand() % 10;
		cout << arr[i] << endl;
	}
	int i = 0;
	for (int j = 0; j < size; j++)
	{
		if (arr[j] == arr[j + 1])
		{
			n+=1;
			if (arr[j] != arr[j+2])
			{
				list[i] = n;
				n = 1;
				i += 1;
			}
		}
	}
	int b=list[0];
	for (int i = 1; i < size; i++)
	{
		if (b < list[i])
		{
			b = list[i];
		}
	}

	cout <<"\n\nНаибольшее количество повторений: " << b<<endl;


	delete[] arr;
	delete[] list;

}