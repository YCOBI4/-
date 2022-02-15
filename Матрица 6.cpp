#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Rus");
    int n, m, count;
    float max_el;
    srand(time(0)); // генерация случайных чисел
    // динамическое создание двумерного массива вещественных чисел на десять элементов
    cout << "Введите кол-во строк = ";
    cin >> n;
    cout << "Введите кол-во столбцов = ";
    cin >> m;
    int** ptrarray = new int* [n]; // две строки в массиве
    for (int count = 0; count < n; count++)
        ptrarray[count] = new int[m]; // и пять столбцов
    // заполнение массива
    for (int count_row = 0; count_row < n; count_row++)
        for (int count_column = 0; count_column < m; count_column++)
            ptrarray[count_row][count_column] = (rand() % 10 + 1) / int((rand() % 10 + 1)); //заполнение массива случайными числами с масштабированием от 1 до 10
    // вывод массива
    for (int count_row = 0; count_row < n; count_row++) {
        for (int count_column = 0; count_column < m; count_column++)
            cout << setw(4) << setprecision(2) << ptrarray[count_row][count_column] << " ";
        cout << endl;
    }
    cout << endl;
    //для столбцов
    for (int row = 0; row < m; row++) {
        max_el = ptrarray[0][row];
        int col = 0;
        for (; col < n; col++) {
            if (max_el < ptrarray[col][row])
                max_el = ptrarray[col][row];
        }
        cout << " Макс. эл. столбца " << row << " = " << max_el << endl;
    }
    //для строк
    for (int col = 0; col < n; col++) {
        max_el = ptrarray[col][0];
        int row = 0;
        for (; row < m; row++) {
            if (max_el < ptrarray[col][row])
                max_el = ptrarray[col][row];
        }
        cout << " Макс. эл. строки " << col << " = " << max_el << endl;
    }
    //для диагонали
    max_el = ptrarray[0][0];
    for (int col = 0; col < n; col++) {
        for (int row = 0; row < m; row++) {
            if (col == row)
                if (max_el < ptrarray[col][row])
                    max_el = ptrarray[col][row];
        }
    }
    cout << " Макс. эл.  диагонали = " << max_el << endl;
    cout << endl;
    // удаление двумерного динамического массива
    for (int count = 0; count < n; count++)
        delete[]ptrarray[count];
    system("pause");
    return 0;
}