#include<iostream>
using namespace std;

int main()
{
	int** arr;
	int m, n;
	int min;
	int posMin = 0;
	cin >> m >> n;
	arr = new int*[m];;
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = (i + 1) * (j + 1);
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout
				<< arr[i][j] << "   ";
		}
		cout << endl;

	}

	system("pause");
}