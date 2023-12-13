/*
    Объект – автомобиль в автосервисе. Известна марка автомобиля,
    фамилия владельца, телефон владельца, дата последнего планового техобслуживания, причина нахождения в сервисе. 
    Выдать список автомобилей марки «Chevrolet».
*/
#include <iostream>
#include <string>
#include <cstdio>

struct Car {
    std::string brand;
    std::string lastNameOwner;
    std::string phoneNumberOwner;
    std::string dateLastRepair;
    std::string resonInService;
};

using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    system("chcp 1251");
    // Объявление переменных
    int n, countFindCar = 1;
    bool notCar = true;
    // Ввод кол-ва элементов массива cars
    cout << "Введите кол-во автомобилей: ";
    cin >> n;
    // Выделение динамической памати под массив cars
    Car* cars = new Car[n];
    // Ввод данных в массив cars
    cout << "Введите данные о автомобилях: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "-я машина:" << endl;
        cout << "Введите марку машины: ";
        cin >> cars[i].brand;
        cout << "Введите фамилию владельца: ";
        cin >> cars[i].lastNameOwner;
        cout << "Введите номер телефона владельца: ";
        cin >> cars[i].phoneNumberOwner;
        cout << "Введите дату последнего обслуживания: ";
        cin >> cars[i].dateLastRepair;
        cout << "Введите причину нахождения в сервисе: ";
        cin >> cars[i].resonInService;
    }
    // Поиск автомобиля по марке
    cout << "\nПоиск автомобилей 'Chevrolet'" << endl;
    for (int i = 0; i < n; i++) {
        if (cars[i].brand == "Chevrolet") {
            cout << countFindCar << "-я машина:" << endl;
            cout << "Марка: " << cars[i].brand << endl;
            cout << "Фамилия владельца: " << cars[i].lastNameOwner << endl;
            cout << "Номер телефона владельца: " << cars[i].phoneNumberOwner << endl;
            cout << "Дата последнего обслуживания: " << cars[i].dateLastRepair << endl;
            cout << "Причина нахождения в сервисе: " << cars[i].resonInService << endl;

            countFindCar++;
            notCar = false;
        }
    }
    if (notCar) {
        cout << "Автомобиль 'Chevrolet' не найден!";
    }
    // Освобождение выделенной памяти
    delete[] cars;
 }