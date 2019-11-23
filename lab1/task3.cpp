//Ввести число k (от 0 до 9). Вводить пятизначные числа, при выводе удалять все цифры равные k. Например при k =0 число 10045 преобразуется в 145.

#include <iostream>

using namespace std;

int main()
{
    int k = 0, five = 0, units=0, tens=0, hundreds=0, thousands=0, tenThousand=0; // Создание переменных
    cout << "Введи k = "; // Вывод на экран
    cin >> k; // Напишите k
    if (k >= 0 && k <= 9)
    { // Если условие верно
        cout << "\nВведи пятизначное число = ";
        cin >> five;
        if (five >= 10000 && k <= 99999)
        { // Если условие верно
            tenThousand = five / 10000;
            if (tenThousand != k) {cout << tenThousand;}
            thousands = five % 10000 / 1000;
            if (thousands != k) {cout << thousands;}
            hundreds = five % 1000 / 100;
            if (hundreds != k) {cout << hundreds;}
            tens = five % 100 / 10;
            if (tens != k) {cout << tens;}
            units = five % 10;
            if (units != k) {cout << units;}
            
        } else { // если условие неверное
            cout << endl << " Число не пятизначное" << endl;
        }
    } else {
        cout << endl << " Неправильно введен k (k должен быть от 0 до 9" << endl;
    }
    return 0; // Вернуть функции main значение 0
}
