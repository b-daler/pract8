#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b = 5;
	cout << "Введите число: ";
	cin >> a;
	b += 5;
	if (a % 2 == 0) {
		cout << "Число четное!";
	}
	else
	{
		cout << "Число нечетное!";
	}
	cout << b;
}

