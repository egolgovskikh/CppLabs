//В массиве Х(N) среди четных значений найти максимальный элемент, среди
//нечетных подсчитать количество отрицательных.

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    const int N=29; // размер массива минус 1
    int dig[N],col=5,max,negative;
    int even[N], odd[N];
    int i,j,k,y,x;
    char s;
    setlocale(0,"Russian");
    srand(time(0)); // инициализировать генератор случайных чисел
    cout<<"Вычисление максимального элемента массива\n";
LOOP:// метка для организации цикла повторного запуска вычислений
    // заполнение массива с помощью датчика случайных чисел
    for (i=0; i<=N; i++)
        dig[i]=rand()%100 - 50; //генерация 2-х значных чисел
    // печать массива в col колонок
    for (i=0; i<=N; i++)
    {
        cout<<dig[i];
        if ((i+1)%col) cout<<"\t";
        else cout<<"\n";
    }
    cout<<"\n";
    
    // Создаем массив с четными и нечетными
    if (dig[i] != 0) {
        for (i=0, j=0, k=0 ; i<N; i++)
            if((dig[i] % 2 == 0) ) {
                even[j]=dig[i]; j++;
                x = j;
            } else {
                odd[k]=dig[i]; k++; y = k;
            }
    }
    
    // поиск максимума
    max=0; // начальное значение для максимума
    for (i=0; i<x-1; i++)
        if(even[i] > max) {
            max=even[i];
        }
    cout << "max = " << max << endl;
    
    // сумма нечетных
    
    for (i=0; i<k-1; i++)
        if(odd[i] < 0) {
            negative++;
        }
    cout << "Отрацительных чисел = " << negative << endl;
    
    
    
    cout<<"Продолжить или закончить? (y/n) : ";
    cin>>s;
    cout<<"======================================="<<endl;
    if (s=='y') goto LOOP;
    system("PAUSE");
    return 0;
}

