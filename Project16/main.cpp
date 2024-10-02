#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    double distance, fuelConsumption;
    double fuelPrice1, fuelPrice2, fuelPrice3;

    cout << "Введите расстояние в километрах: ";
    cin >> distance;

    cout << "Введите расход бензина на 100 км (литров): ";
    cin >> fuelConsumption;

    cout << "Введите стоимость первого вида бензина (за литр): ";
    cin >> fuelPrice1;

    cout << "Введите стоимость второго вида бензина (за литр): ";
    cin >> fuelPrice2;

    cout << "Введите стоимость третьего вида бензина (за литр): ";
    cin >> fuelPrice3;

    
    double totalFuelConsumed = (fuelConsumption / 100) * distance;

    
    double totalCost1 = totalFuelConsumed * fuelPrice1;
    double totalCost2 = totalFuelConsumed * fuelPrice2;
    double totalCost3 = totalFuelConsumed * fuelPrice3;

    
    cout << fixed << setprecision(2); 
    cout << "\nСравнительная таблица стоимости поездки:\n";
    cout << "-------------------------------------------\n";
    cout << "| Вид бензина | Общий расход (литров) | Стоимость поездки (руб.) |\n";
    cout << "-------------------------------------------\n";
    cout << "| 1           | " << totalFuelConsumed << "                | " << totalCost1 << "                |\n";
    cout << "| 2           | " << totalFuelConsumed << "                | " << totalCost2 << "                |\n";
    cout << "| 3           | " << totalFuelConsumed << "                | " << totalCost3 << "                |\n";
    cout << "-------------------------------------------\n";

    return 0;
}
