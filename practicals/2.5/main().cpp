//Завдання 2

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    int grade;
};

int findMaxGradeStudent(const vector<Student>& students) {
    int maxGrade = -1;
    int maxIndex = -1;

    for (int i = 0; i < students.size(); ++i) {
        if (students[i].grade > maxGrade) {
            maxGrade = students[i].grade;
            maxIndex = i;
        }
    }

    return maxIndex;
}

int main() {
    vector<Student> students = {
        {"Олексій", 85},
        {"Марина", 92},
        {"Іван", 78},
        {"Катерина", 95},
        {"Дмитро", 89}
    };

    int maxIndex = findMaxGradeStudent(students);

    if (maxIndex != -1) {
        cout << "Учень з максимальним балом: " << students[maxIndex].name << " (номер у списку: " << maxIndex + 1 << ")" << endl;
    } else {
        cout << "Список учнів порожній." << endl;
    }

    return 0;
}

//Завдання 4

#include <iostream>
#include <vector>
#include <string>
using namespace std;

enum CarBrand { TESLA, BMW, AUDI, MERCEDES, NISSAN };
enum Color { RED, BLUE, GREEN, BLACK, WHITE };

struct Car {
    CarBrand brand;
    Color color;
    int year;
};

vector<Car> filterCarsByYear(const vector<Car>& cars, int year) {
    vector<Car> filteredCars;
    for (const Car& car : cars) {
        if (car.year >= year) {
            filteredCars.push_back(car);
        }
    }
    return filteredCars;
}

string brandToString(CarBrand brand) {
    switch (brand) {
        case TESLA: return "Tesla";
        case BMW: return "BMW";
        case AUDI: return "Audi";
        case MERCEDES: return "Mercedes";
        case NISSAN: return "Nissan";
        default: return "Unknown";
    }
}

string colorToString(Color color) {
    switch (color) {
        case RED: return "Red";
        case BLUE: return "Blue";
        case GREEN: return "Green";
        case BLACK: return "Black";
        case WHITE: return "White";
        default: return "Unknown";
    }
}

int main() {
    vector<Car> cars = {
        {TESLA, RED, 2019},
        {BMW, BLUE, 2018},
        {AUDI, GREEN, 2020},
        {MERCEDES, BLACK, 2015},
        {NISSAN, WHITE, 2017}
    };

    int filterYear = 2018;
    vector<Car> filteredCars = filterCarsByYear(cars, filterYear);

    cout << "Автомобілі, виготовлені не раніше " << filterYear << " року:" << endl;
    for (const Car& car : filteredCars) {
        cout << "Марка: " << brandToString(car.brand) << ", Колір: " << colorToString(car.color) << ", Рік: " << car.year << endl;
    }

    return 0;
}
