

#include <iostream>

using namespace std;


struct rac
{
    int ch;
    unsigned int zn;
};

double GrThen (double a, double b)
{
    
    if (a > b)
    {
        cout << "a"<< "  " << "b" << endl;
    }
    if (b > a)
    {
        cout << "b" << "  " << "a" << endl;
    }
    if (a == b)
    {
        cout << "a" << "  " << "b" << endl;
    }
    cout << endl << endl;

    return 0;
   
}



int main()
{
    setlocale(LC_ALL, "Rus");

    rac frac[2];
    cout << "Введите числитель и знаменатель первого числа" << endl;
    cin >> frac[0].ch >> frac[0].zn;
    cout << "Введите числитель и знаменатель втрого числа" << endl;
    cin >> frac[1].ch >> frac[1].zn;
    double  a = frac[0].ch / frac[0].zn;
    double b = frac[1].ch / frac[1].zn;

    cout << GrThen (a, b);

}

