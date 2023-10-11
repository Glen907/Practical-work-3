#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	float x, v, s;
	cout << "Сумма вклада: "; cin >> s;
	cout << "Лет: "; cin >> n;
	x = s * 3 / 100;
	v = s + x * n;
	cout << "Сумма счета: " << v << " Лет: " << n;
	return 0;
}