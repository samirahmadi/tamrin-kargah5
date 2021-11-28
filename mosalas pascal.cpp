#include <iostream>
using namespace std;
int calculate(int n, int k);

void print(int n) {
	for (int line = 0; line < n; line++)
	{
		for (int i = 0; i <= line; i++)
			cout << " " << calculate(line, i);
		cout << "\n";
	}
}
int calculate(int n, int k)
{
	int res = 1;
	if (k > n - k)
		k = n - k;
	for (int i = 0; i < k; ++i)
	{
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}

int main()
{
	int n;
	cin >> n;
	print(n);

	system("pause");

}