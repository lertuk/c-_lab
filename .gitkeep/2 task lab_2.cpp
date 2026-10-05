#include <iostream>
#include <cmath> // Бібліотека для математичних функцій (cos, log, pow)

using namespace std;

int main() {
    double x, y;
    
    cout << "Введіть значення x (x > 0): ";
    cin >> x;

    // Перевірка області визначення для логарифма
    if (x <= 0) {
        cout << "Помилка: x має бути строго більшим за 0 через наявність ln(x)." << endl;
        return 1; // Завершення програми з кодом помилки
    }

    // Обчислюємо вираз x^2 + ln(x) один раз, щоб не дублювати код
    double t = x * x + log(x);

    // Визначаємо значення y залежно від умов
    if (t > 0) {
        y = cos(t);
    } else if (t < 0) {
        y = 1.0 / t;
    } else { 
        // Якщо t == 0
        y = cos(x);
    }

    cout << "Результат y = " << y << endl;

    return 0;
}
