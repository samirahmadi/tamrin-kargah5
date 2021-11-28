#include<iostream>
#include<string>
using namespace std;

int main() {
	int cnt = 0;
	string str;

	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 32)
			cnt++;
	}
	cout << cnt + 1 << endl;

	system("pause");
}