//Дана целочисленная матрица 10x10, содержащая как положительные, так и отрицательные элементы. Найти количество нулей в верхней заштрихованной области и количество положительных элементов в нижней. Сформировать одномерный массив, содержащий минимумы (по модулю) каждого столбца.

#include <iostream>
#include <time.h>
#include <iomanip>
#include <math.h>

using namespace std;
int main()

{
    setlocale(0,"Russian");
    const int N=10; // размер массива
    double dig[N][N], min;
    int i,j,col=5, zeros = 0, positive = 0;
    char sim='y';
    time_t k;
    srand(time(&k)); // инициализировать генератор случайных чисел
    while (sim =='y') { // зацикливание программы
        // заполнение с помощью датчика случайных чисел и печать массива
        for (i=0; i<N; i++)
            for (j=0; j<N; j++)
                dig[i][j]=rand()%20-10;
        for (i=0; i<N; i++)
        {
            cout<<'\n';
            for (j=0; j<N; j++)
                cout<<setw(8)<<setprecision(3)<<dig[i][j]<<' ';
        }
        cout<<"\nМинимальное в столбце (по модулю)\n";
        // работа со столбцами (вычисление и печать результата)
        for (i=0; i<N; i++) {
            for (j=0, min=dig[j][i]; j<N; j++) {
                if (fabs(min) > fabs(dig[j][i])) {
                    min = fabs(dig[j][i]);
                }
            }
            cout<<setw (8)<<setprecision(3)<< fabs(min) <<' ';
        }
        
        for (i = 0; i < 10; i++) // Вычисление значений в верхней и нижней части
        {
            for (j = 0; j < N ; j++)
            {
                if (i <= j && (i <= N - j - 1)) {
                    if (dig[i][j] == 0) {
                        zeros += 1;
                    }
                } else if ((i >= N - j - 1) && i >= j) {
                    if (dig[i][j] > 0) {
                        positive += 1;
                    }
                }
            }
        }
        cout<<"\nКоличество нулей в верхней части = " << zeros;
        cout<<"\nКоличество положительных чисел в нижней части = " << positive;
        cout<<"\nПродолжить или закончить? (y/n) : ";
        cin>>sim;
    };
    return 0;
}
