#include <iostream>
using namespace std;

int main(){
    setlocale(0,"");
    
    int n;
    float x,v,s;
    cout<<"Сумма вклада: ";
    cin>>s;
    cout<<"Лет: ";
    cin>>n;
    x=s*3/100;
    v=s+x*n;
    cout<<"Сумма счета: "<<n<<"Лет: "<<v<<endl;

    return 0;
}
