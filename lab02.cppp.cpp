#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a1, b1; // стороны первого прямоугольника
    double a2, b2; // стороны второго прямоугольника

    cout << "Введите стороны первого прямоугольника: ";
    cin >> a1 >> b1;

    cout << "Введите стороны второго прямоугольника: ";
    cin >> a2 >> b2;

    double area1 = a1 * b1;
    double area2 = a2 * b2;

    if (area1 > area2) {
        cout << "Площадь первого прямоугольника больше." << endl;
    }
    else if (area1 < area2) {
        cout << "Площадь второго прямоугольника больше." << endl;
    }
    else {
        cout << "Площади прямоугольников равны." << endl;
    }

    return 0;
}