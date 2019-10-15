#include <iostream>

using namespace std;

int main()
{
    int d; // Создание переменной d
    cout << "Введи d = "; // Вывод на экран
    cin >> d; // Напишите d
    if ((9999 < d) || (d < 1)) {
        cout <<"\nНеправильный ввод\n";
    } else if ((10 < d) && (d < 15)) {
        cout << d << " рублей\n";// Если условие верно
    } else {
        switch (d % 10) {
            case 0:
                cout << d << " рублей\n";
                break;
            case 1:
                cout << d << " рубль\n";
                break;
            case 2 ... 4:
                cout<< d << " рубля\n";
                break;
            case 5 ... 9:
                cout<< d << " рублей\n";
                break;
            default:
                break;
        }
    }
    return 0; // Вернуть функции main значение 0
}

