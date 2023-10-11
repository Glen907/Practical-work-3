#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int a=0;
	double b=0, c=0;
	cout << "Введите числа, для расчета (Выйти-0)\n\n";
	do {
	    cout << "Число " << a+1 << "="; cin >> c;
	if (c){
	    a++;
	    b+=c;}}
	while (c);
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "Количество введенных чисел: " << a <<"\n";
	cout << "Общая сумма: " << b <<"\n";
	cout << "Среднее арифметическое: " << b/a;
	return 0;
}