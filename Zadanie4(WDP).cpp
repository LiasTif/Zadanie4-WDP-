#include <iostream>

using namespace std;

struct Variables {
    int x = 10, y = 5, out{}, * px = &x, * px2 = &y;
    int* arr = new int[x];
};

/// <summary>
/// Metoda, która generuje proste operacje matematyczne
/// </summary>
/// <param name="operation">rodzaj operacji, która ma być wykonana</param>
/// <returns>result</returns>
void GetOperation(int *num1, int *num2, int result, char operation) {
    switch (operation) {
    case '+':
        printf("suma: %d + %d = %d\n\n", *num1, *num2, result = *num1 + *num2); break;
    case '*':
        printf("iloczyn: %d * %d = %d\n\n", *num1, *num2, result = *num1 * *num2); break;
    case '/':
        printf("iloraz: %d / %d = %d\n\n", *num1, *num2, result = *num1 / *num2); break;
    case '-':
        printf("roznica: %d - %d = %d\n\n", *num1, *num2, result = *num1 - *num2); break;
    default:
        cout << "Nieznana operacja\n\n"; break;
    }
}

int main()
{
    // tworzymy strukturę vars1
    Variables vars1;

    // wyświetlić w konsoli px i px2
    cout << "px:\t" << *vars1.px << endl;
    cout << "px2:\t" << *vars1.px2 << endl;

    // wypełnianie tablicy danymi
    for (int i = 0; i < vars1.x; i++)
        vars1.arr[i] = i + 1;

    // wykonać wybraną przez użytkownika operację na px i px2
    char operation;

    cout << "Podaj operacje (-, +, /, *): ";
    cin >> operation;

    GetOperation(vars1.px, vars1.px2, vars1.out, operation);

    cout << "adres zmiennej, ktora zawierajaca odpowiedz: " << &vars1.out << endl;

    // wyprowadzić tablicę
    cout << "Tablica 'arr': ";
    for (int i = 0; i < vars1.x; i++)
        cout << vars1.arr[i] << " ";

    // usunąńć tavlicę
    delete[] vars1.arr;

    return 0;
}