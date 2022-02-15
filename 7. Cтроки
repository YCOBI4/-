//4. Пусть даны две строки str1 и str2.Необходимо выяснить, можно ли из str1 путём
//перестановки литер получить строку str2.Записать метод, решающий указанную задачу.


#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    string str1 , str2 ; //задаются две строки
    cout << "Введите первую строку" << endl;
    cin >> str1; //ввод данных в первую строку
    cout << "Введите вторую сторку" << endl;
    cin >> str2; //ввод данных во вторую строку
    sort(str1.begin(), str1.end()); //перестановка литер
    sort(str2.begin(), str2.end());
    cout << boolalpha << (str1 == str2) << endl; //проверка на истинность
}
