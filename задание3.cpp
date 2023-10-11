#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	long q=1, w=2, e=3, r=4, t=5, y=6, u=7, i=8, o=9, p=10;
	cout << "Мы попробуем вычислить (1+2)*(1+2+3)*...*(1+2+...+10).\n";
	long a = (q+w)*(q+w+e)*(q+w+e+r);
	long b = (q+w+e+r+t)*(q+w+e+r+t+y)*(q+w+e+r+t+y+u);
	long c = (q+w+e+r+t+y+u+i)*(q+w+e+r+t+y+u+i+o)*(q+w+e+r+t+y+u+i+o+p);
	long d = a*b*c;
	cout << "Ответ:" << d;
	return 0;
}