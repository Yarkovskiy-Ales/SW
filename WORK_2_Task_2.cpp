#include<iostream>
#include<ctime>
#include<string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int size;
	cout << "������� ���������� ��������� �������\n";
	cin >> size;
	cout << endl;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)//���� ���������� ������� + �����
	{
		arr[i] = rand() % 10 - rand() % 10;
		cout << arr[i] << endl;
	}
	cout << "\n�����, ������� ������ �������� ���� ����������\n";
	for (int j = 2; j < size; j++)
	{
		if (arr[j] < arr[j - 2] - arr[j - 1])
		{
			cout << arr[j] << endl;
		}
	}

	delete[] arr;

}