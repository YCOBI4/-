//4. Пусть даны две строки str1 и str2.Необходимо выяснить, можно ли из str1 путём
//перестановки литер получить строку str2.Записать метод, решающий указанную задачу.


#include <algorithm>
#include <iostream>
#include <string>


using namespace std;

int prov(string str1, string str2)//функция отвечающая за сортировку, проверку и результат
{
    
        setlocale(LC_ALL, "Rus");

        sort(str1.begin(), str1.end()); //сортировка литер
        sort(str2.begin(), str2.end());
         
        return (str1 == str2);//проверка на истинность и вывод результата
    
}

int main()
{
    setlocale(LC_ALL, "Rus");

    string str1, str2; //задаются две строки
    cout << "Введите первую строку" << endl;
    cin >> str1; //ввод данных в первую строку
    cout << "Введите вторую строку" << endl;
    cin >> str2; //ввод данных во вторую строку
    cout << prov(str1, str2);
}