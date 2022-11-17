#include <iostream>

using namespace std;

int x = 10, y = 5, out, *px = &x, *px2 = &y;
char operation;

/// <summary>
/// Metoda, która generuje proste operacje matematyczne
/// </summary>
/// <param name="operation">rodzaj operacji, która ma być wykonana</param>
/// <returns>result</returns>
void GetOperation(char operation) {
    switch (operation) {
    case '+':
        printf("suma: %d + %d = %d\n", *px, *px2, out = *px + *px2); break;
    case '*':
        printf("iloczyn: %d * %d = %d\n", *px, *px2, out = *px * *px2); break;
    case '/':
        printf("iloraz: %d / %d = %d\n", *px, *px2, out = *px / *px2); break;
    case '-':
        printf("roznica: %d - %d = %d\n", *px, *px2, out = *px - *px2); break;
    default:
        cout << "Nieznana operacja\n\n"; break;
    }
}

int main()
{
    cout << "px:\t" << *px << endl;
    cout << "px2:\t" << *px2 << endl;

    // wykonać wybraną przez użytkownika operację na px i px2
    cout << "Podaj operacje (-, +, /, *): ";
    cin >> operation;
    GetOperation(operation);

    return 0;
}