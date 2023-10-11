#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int num = 0;
    cout<<"Введите высоту равнобедренного треугольника: ";
    cin>>num;
    
    for(int i =0; i<num; i++)
    {
        for(int j = 1, i = num - 2*i; j < num -1, j<=num; j++)
        {
            cout<<" " << "*";
        }
        cout<<endl;
    }
    return 0;
}
