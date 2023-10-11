#include <iostream>
using namespace std;

int main(){
    setlocale(0,"");
    int num;
    float mer;
    cout<<"Перевод старинных русских мерр длины, торгово патекарского веса (счетчика цикла от 1 до 10)";
    
    cout<<"[1]Сажены в метрах"<<endl;
    cout<<"[2]Футы в метрах"<<endl;
    cout<<"[3]Из дюмов в метры"<<endl;
    cout<<"[4]Драхм в метры"<<endl;
    cout<<"[5]Унций в граммы"<<endl;
    cout<<"[6]Фунтов в килограммы"<<endl;
    cout<<"[7]Аршины в метр"<<endl;
    cout<<"[8]Золотников в граммы"<<endl;
    cout<<"[9]Дюймы в милиметрах"<<endl;
    cout<<endl;
    cout<<"[10]Выйти";
    cout<<endl;
    cout<<"Введите меру длины: ";
    cin>>num;
    system("cls");
    switch(num){
        case(1):
            cout<<"Сколько сажены в метрах: ";
            cin>>mer;
            system("cls");
            cout<<mer<<"сажаней = "<<mer*2.1366<<"метров";
            break;
        case(2):
            cout<<"Сколько дюймов в сантиметрах: ";
            cin>>mer;
            system("cls");
            cout<<mer<<"дюймов = "<<mer*2.5<<"сантиметров";
            break;
        case(3):
            cout<<"Сколько футов в метрах: ";
            cin>>mer;
            system("cls");
            cout<<mer<<"футов = "<<mer*0.3048<<"метров";
            break;
        case(4):
            cout<<"Сколько драхм в граммах: ";
            cin>>mer;
            system("cls");
            cout<<mer<<"драхм = "<<mer*3.7325<<"граммов";
            break;
        case(5):
            cout<<"Сколько унций в граммах: ";
            cin>>mer;
            system("cls");
            cout<<mer<<"унций = "<<mer*29.86<<"грамм";
            break;
        case(6):
            cout<<"Сколько фунтов в килограммах: ";
            cin>>mer;
            system("cls");
            cout<<mer<<"фунтов = "<<mer*0.40951<<"килограмм";
            break;
        case(7):
            cout<<"Сколько аршин в метрах: ";
            cin>>mer;
            system("cls");
            cout<<mer<<"аршин = "<<mer*0.7112<<"метров";
            break;
        case(8):
            cout<<"Сколько золотников в граммах: ";
            cin>>mer;
            system("cls");
            cout<<mer<<"золотников = "<<mer*4.2657<<"грамм";
            break;
        case(9):
            cout<<"Сколько дюймов в милиметрах: ";
            cin>>mer;
            system("cls");
            cout<<mer<<"дюймов = "<<mer*25.2995<<"милиметров";
            break;
        case(10):
            cout<<"Выход";
            return 0;
        default:
            cout<<"Не корректное значение";
            break;
    }
    
    return 0;
}
